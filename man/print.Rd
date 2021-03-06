% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/Layer.methods.R, R/dbn.methods.R, R/rbm.methods.R
\name{print.Layer}
\alias{print}
\alias{print.DeepBeliefNet}
\alias{print.Layer}
\alias{print.RestrictedBolzmannMachine}
\title{Print a Deep Belief Net}
\usage{
\method{print}{Layer}(x, ...)

\method{print}{DeepBeliefNet}(x, ...)

\method{print}{RestrictedBolzmannMachine}(x, ...)
}
\arguments{
\item{x}{the RestrictedBolzmannMachine or DeepBeliefNet object to be printed}

\item{...}{ignored}
}
\value{
Returns x invisibly
}
\description{
Print a DeepBeliefNet or RestrictedBolzmannMachine and returns it invisibly
}
\examples{
layer <- Layer(10L, "gaussian")
print(layer)
dbn <- DeepBeliefNet(Layers(c(784, 1000, 500, 250, 30), input="continuous", output="gaussian"))
print(dbn)
rbm <- RestrictedBolzmannMachine(Layer(784, "continuous"), Layer(1000, "binary"))
print(rbm)
}
\seealso{
\code{\link{print}} \code{\link{Layer}}

\code{\link{RestrictedBolzmannMachine}},  \code{\link{DeepBeliefNet}}, \code{\link{print}}

\code{\link{RestrictedBolzmannMachine}}, \code{\link{print}}
}

