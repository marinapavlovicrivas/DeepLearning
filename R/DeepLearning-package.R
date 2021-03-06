#' Deep Learning Toolbox
#'
#' DeepLearning provides tools to train deep neural networks (or deep belief nets, DBN, represented by \code{\link{DeepBeliefNet}} objects) as 
#' a stack of restricted bolzman machines (RBM, represented by \code{\link{RestrictedBolzmannMachine}} objects) that
#' provide coupling between two \code{\link{Layer}}s.
#' The bolzman machines and deep networks can be pre-trained (with \code{\link{pretrain}} methods provided by the package) 
#' and fine-tuned (see  \code{\link{train}}) with the method proposed by Hinton and Salakhutdinov (Science, 2006) and refined
#' by Bengio \emph{et al}.
#' 
#' @section Classes:
#' The DeepLearning package defines three classes: \code{\link{Layer}}, \code{\link{RestrictedBolzmannMachine}}
#' and \code{\link{DeepBeliefNet}}.
#' A \code{\link{RestrictedBolzmannMachine}} object represents one layer of the network that can be pre-trained independently. It
#' stores the size of the input and output in two \code{\link{Layer}}s, that represent the input and output
#'  size and type well as the type of Bolzmann machine (\dQuote{binary}, \dQuote{continuous} or \dQuote{gaussian}).
#' A deep belief network is an object of class \code{\link{DeepBeliefNet}} that compiles a set of one or more
#' \code{\link{RestrictedBolzmannMachine}}s with compatible \code{\link{Layer}}s.
#' 
#' @section Functions and Methods:
#' \subsection{Initialization and Training}{
#' \tabular{rllll}{
#' Topic          \tab  Function name(s)                        \tab RBM \tab DBN \tab Layer \cr
#' Initialization \tab \code{\link{RestrictedBolzmannMachine}}, 
#'                     \code{\link{DeepBeliefNet}}, 
#'                     \code{\link{Layer}}                      \tab + \tab + \tab + \cr
#' Combine        \tab \code{\link[DeepLearning]{c}}            \tab + \tab + \tab + \cr
#' Pre-training   \tab \code{\link{pretrain}}                   \tab + \tab + \tab - \cr
#' Fine-tuning    \tab \code{\link{train}}                      \tab - \tab + \tab - \cr
#' Unrolling      \tab \code{\link{unroll}}                     \tab - \tab + \tab - \cr
#' }
#' }
#' \subsection{Modeling functions}{
#' \tabular{rlll}{
#' Topic           \tab  Function name(s)                        \tab RBM \tab DBN \cr
#' Prediction      \tab \code{\link[DeepLearning]{predict}}      \tab + \tab + \cr
#' Reconstruction  \tab \code{\link[DeepLearning]{reconstruct}}  \tab + \tab + \cr
#' Error           \tab \code{\link[DeepLearning]{error}}        \tab + \tab + \cr
#' Energy          \tab \code{\link[DeepLearning]{energy}}       \tab + \tab + \cr
#' Resample          \tab \code{\link[DeepLearning]{resample}}       \tab + \tab + \cr
#' }
#' }
#' \subsection{Methods}{
#' The following methods extend standard \R functions to perform various manipulations on the network:
#' \tabular{rllll}{
#' Topic       \tab  Function name(s)                    \tab RBM \tab DBN \tab Layer \cr
#' Drop        \tab \code{\link[DeepLearning]{drop}}     \tab - \tab + \tab - \cr
#' Extract     \tab see \link[DeepLearning]{Extract}     \tab - \tab + \tab - \cr
#' Length      \tab \code{\link[DeepLearning]{length}}   \tab - \tab + \tab + \cr
#' Print       \tab \code{\link[DeepLearning]{print}}    \tab + \tab + \tab + \cr
#' Reverse     \tab \code{\link[DeepLearning]{rev}}      \tab + \tab + \tab - \cr
#' Comparison  \tab see \link[DeepLearning]{Comparison}  \tab - \tab - \tab + \cr
#' }
#' }
#' @examples
#' library(mnist)
#' data(mnist)
#' 
#' # Initialize a 784-1000-500-250-30 layers DBN to process the MNIST data set
#' dbn.mnist <- DeepBeliefNet(Layers(c(784, 1000, 500, 250, 30), input="continuous", output="gaussian"))
#' print(dbn.mnist)
#' 
#' # Pre-train this DBN
#' \dontrun{
#' pretrained.mnist <- pretrain(dbn.mnist, mnist$train$x, 
#'                        penalization = "l2", lambda=0.0002, epsilon=c(.1, .1, .1, .001), 
#'                        batchsize = 100, maxiters=100000)
#' }
#' data(pretrained.mnist) # Load an already pre-trained network
#' 
#' # Make predictions to 2 dimensions
#' predictions <- predict(pretrained.mnist, mnist$test$x)
#' # See how the data is reconstructed
#' reconstructions <- reconstruct(pretrained.mnist, mnist$test$x)
#' dim(predictions)
#' # And test the RMS error
#' error <- rmse(pretrained.mnist, mnist$test$x)
#' head(error)
#' 
#' # Plot predictions
#' plot.mnist(predictions = predictions, reconstructions = reconstructions)
#' par(family="mono")
#' legend("bottomleft", legend = sprintf("Mean error = %.3f", mean(error)), bty="n")
#' 
#' # Unrolling the network is the same as c(pretrained.mnist, rev(pretrained.mnist))
#' unrolled.mnist <- unroll(pretrained.mnist)
#' print(unrolled.mnist)
#' 
#' # Fine-tune the DBN with backpropagation
#' \dontrun{
#' trained.mnist <- train(unrolled.mnist, mnist$train$x, maxiters = 2000, batchsize = 1000,
#'                 optim.control = list(maxit = 10))
#' }
#' data(trained.mnist) # Load an already trained network
#' 
#' # Make predictions to 2 dimensions
#' predictions <- predict(trained.mnist, mnist$test$x)
#' dim(predictions)
#' # Use reconstruct to pass through the whole unrolled network
#' reconstructions <- reconstruct(trained.mnist, mnist$test$x)
#' dim(reconstructions)
#' 
#' # test the RMS error
#' error <- rmse(trained.mnist, mnist$test$x)
#' head(error)
#' 
#' # Plot predictions
#' plot.mnist(predictions = predictions, reconstructions = reconstructions)
#' par(family="mono")
#' legend("bottomleft", legend = sprintf("Mean error = %.3f", mean(error)), bty="n")
#' 
#' # Perform various operations on it (not all of them make sense in this context)
#' combined <- c(trained.mnist, rev(trained.mnist[7:8]))
#' combined[[10]] <- RestrictedBolzmannMachine(Layer(1000, "binary"), Layer(784, "gaussian"))
#' print(combined)
#' length(combined)
#' drop(combined[4])
#' 
#' @references 
#' \enumerate{
#' \item Hinton GE, Salakhutdinov RR. Reducing the Dimensionality of Data with Neural Networks. Science. 
#' 2006 Jul 28;313(5786):504–7. \url{http://dx.doi.org/10.1126/science.1127647}.
#' \item Bengio Y, Lamblin P, Popovici D, Larochelle H. Greedy layer-wise training of deep networks. 
#' Advances in neural information processing systems. 2007;19:153–60. 
#' }
#' @useDynLib DeepLearning 
#' @docType package
#' @name DeepLearning
#' @aliases DeepLearning-package
#' @import Rcpp
NULL