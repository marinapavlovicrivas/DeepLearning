// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/DeepLearning.h"
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// detectCores
unsigned int detectCores();
RcppExport SEXP DeepLearning_detectCores() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(detectCores());
    return rcpp_result_gen;
END_RCPP
}
// unrollDbnCpp
DeepLearning::DeepBeliefNet unrollDbnCpp(DeepLearning::DeepBeliefNet& aDBN);
RcppExport SEXP DeepLearning_unrollDbnCpp(SEXP aDBNSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DeepLearning::DeepBeliefNet& >::type aDBN(aDBNSEXP);
    rcpp_result_gen = Rcpp::wrap(unrollDbnCpp(aDBN));
    return rcpp_result_gen;
END_RCPP
}
// predictRbmCpp
Eigen::MatrixXd predictRbmCpp(const DeepLearning::RBM& anRBM, const Eigen::Map<Eigen::MatrixXd>& aDataMatrix);
RcppExport SEXP DeepLearning_predictRbmCpp(SEXP anRBMSEXP, SEXP aDataMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DeepLearning::RBM& >::type anRBM(anRBMSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type aDataMatrix(aDataMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(predictRbmCpp(anRBM, aDataMatrix));
    return rcpp_result_gen;
END_RCPP
}
// predictDbnCpp
Eigen::MatrixXd predictDbnCpp(const DeepLearning::DeepBeliefNet& aDBN, const Eigen::Map<Eigen::MatrixXd>& aDataMatrix);
RcppExport SEXP DeepLearning_predictDbnCpp(SEXP aDBNSEXP, SEXP aDataMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DeepLearning::DeepBeliefNet& >::type aDBN(aDBNSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type aDataMatrix(aDataMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(predictDbnCpp(aDBN, aDataMatrix));
    return rcpp_result_gen;
END_RCPP
}
// sampleRbmCpp
Eigen::MatrixXd sampleRbmCpp(const DeepLearning::RBM& anRBM, const Eigen::Map<Eigen::MatrixXd>& aDataMatrix);
RcppExport SEXP DeepLearning_sampleRbmCpp(SEXP anRBMSEXP, SEXP aDataMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DeepLearning::RBM& >::type anRBM(anRBMSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type aDataMatrix(aDataMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(sampleRbmCpp(anRBM, aDataMatrix));
    return rcpp_result_gen;
END_RCPP
}
// sampleDbnCpp
Eigen::MatrixXd sampleDbnCpp(const DeepLearning::DeepBeliefNet& aDBN, const Eigen::Map<Eigen::MatrixXd>& aDataMatrix);
RcppExport SEXP DeepLearning_sampleDbnCpp(SEXP aDBNSEXP, SEXP aDataMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DeepLearning::DeepBeliefNet& >::type aDBN(aDBNSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type aDataMatrix(aDataMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(sampleDbnCpp(aDBN, aDataMatrix));
    return rcpp_result_gen;
END_RCPP
}
// reconstructRbmCpp
Eigen::MatrixXd reconstructRbmCpp(const DeepLearning::RBM& anRBM, const Eigen::Map<Eigen::MatrixXd>& aDataMatrix);
RcppExport SEXP DeepLearning_reconstructRbmCpp(SEXP anRBMSEXP, SEXP aDataMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DeepLearning::RBM& >::type anRBM(anRBMSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type aDataMatrix(aDataMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(reconstructRbmCpp(anRBM, aDataMatrix));
    return rcpp_result_gen;
END_RCPP
}
// reconstructDbnCpp
Eigen::MatrixXd reconstructDbnCpp(const DeepLearning::DeepBeliefNet& aDBN, const Eigen::Map<Eigen::MatrixXd>& aDataMatrix);
RcppExport SEXP DeepLearning_reconstructDbnCpp(SEXP aDBNSEXP, SEXP aDataMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DeepLearning::DeepBeliefNet& >::type aDBN(aDBNSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type aDataMatrix(aDataMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(reconstructDbnCpp(aDBN, aDataMatrix));
    return rcpp_result_gen;
END_RCPP
}
// pretrainRbmCpp
DeepLearning::RBM pretrainRbmCpp(DeepLearning::RBM& anRBM, const Eigen::Map<Eigen::MatrixXd>& aDataMatrix, const DeepLearning::PretrainParameters& params, const std::unique_ptr<DeepLearning::PretrainProgress>& diag, const DeepLearning::ContinueFunction& cont);
RcppExport SEXP DeepLearning_pretrainRbmCpp(SEXP anRBMSEXP, SEXP aDataMatrixSEXP, SEXP paramsSEXP, SEXP diagSEXP, SEXP contSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DeepLearning::RBM& >::type anRBM(anRBMSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type aDataMatrix(aDataMatrixSEXP);
    Rcpp::traits::input_parameter< const DeepLearning::PretrainParameters& >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< const std::unique_ptr<DeepLearning::PretrainProgress>& >::type diag(diagSEXP);
    Rcpp::traits::input_parameter< const DeepLearning::ContinueFunction& >::type cont(contSEXP);
    rcpp_result_gen = Rcpp::wrap(pretrainRbmCpp(anRBM, aDataMatrix, params, diag, cont));
    return rcpp_result_gen;
END_RCPP
}
// pretrainDbnCpp
DeepLearning::DeepBeliefNet pretrainDbnCpp(DeepLearning::DeepBeliefNet& aDBN, const Eigen::Map<Eigen::MatrixXd>& aDataMatrix, const std::vector<DeepLearning::PretrainParameters>& params, const std::unique_ptr<DeepLearning::PretrainProgress>& diag, DeepLearning::ContinueFunction& cont, const Rcpp::IntegerVector& aSkip);
RcppExport SEXP DeepLearning_pretrainDbnCpp(SEXP aDBNSEXP, SEXP aDataMatrixSEXP, SEXP paramsSEXP, SEXP diagSEXP, SEXP contSEXP, SEXP aSkipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DeepLearning::DeepBeliefNet& >::type aDBN(aDBNSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type aDataMatrix(aDataMatrixSEXP);
    Rcpp::traits::input_parameter< const std::vector<DeepLearning::PretrainParameters>& >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< const std::unique_ptr<DeepLearning::PretrainProgress>& >::type diag(diagSEXP);
    Rcpp::traits::input_parameter< DeepLearning::ContinueFunction& >::type cont(contSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type aSkip(aSkipSEXP);
    rcpp_result_gen = Rcpp::wrap(pretrainDbnCpp(aDBN, aDataMatrix, params, diag, cont, aSkip));
    return rcpp_result_gen;
END_RCPP
}
// trainDbnCpp
DeepLearning::DeepBeliefNet trainDbnCpp(DeepLearning::DeepBeliefNet& aDBN, const Eigen::Map<Eigen::MatrixXd>& aDataMatrix, const DeepLearning::TrainParameters& trainParams, const std::unique_ptr<DeepLearning::TrainProgress>& diag, const DeepLearning::ContinueFunction& cont);
RcppExport SEXP DeepLearning_trainDbnCpp(SEXP aDBNSEXP, SEXP aDataMatrixSEXP, SEXP trainParamsSEXP, SEXP diagSEXP, SEXP contSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DeepLearning::DeepBeliefNet& >::type aDBN(aDBNSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type aDataMatrix(aDataMatrixSEXP);
    Rcpp::traits::input_parameter< const DeepLearning::TrainParameters& >::type trainParams(trainParamsSEXP);
    Rcpp::traits::input_parameter< const std::unique_ptr<DeepLearning::TrainProgress>& >::type diag(diagSEXP);
    Rcpp::traits::input_parameter< const DeepLearning::ContinueFunction& >::type cont(contSEXP);
    rcpp_result_gen = Rcpp::wrap(trainDbnCpp(aDBN, aDataMatrix, trainParams, diag, cont));
    return rcpp_result_gen;
END_RCPP
}
// reverseRbmCpp
DeepLearning::RBM reverseRbmCpp(DeepLearning::RBM& anRBM);
RcppExport SEXP DeepLearning_reverseRbmCpp(SEXP anRBMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DeepLearning::RBM& >::type anRBM(anRBMSEXP);
    rcpp_result_gen = Rcpp::wrap(reverseRbmCpp(anRBM));
    return rcpp_result_gen;
END_RCPP
}
// reverseDbnCpp
DeepLearning::DeepBeliefNet reverseDbnCpp(DeepLearning::DeepBeliefNet& aDBN);
RcppExport SEXP DeepLearning_reverseDbnCpp(SEXP aDBNSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DeepLearning::DeepBeliefNet& >::type aDBN(aDBNSEXP);
    rcpp_result_gen = Rcpp::wrap(reverseDbnCpp(aDBN));
    return rcpp_result_gen;
END_RCPP
}
// energyRbmCpp
DeepLearning::ArrayX1d energyRbmCpp(const DeepLearning::RBM& anRBM, const Eigen::Map<Eigen::MatrixXd>& aDataMatrix);
RcppExport SEXP DeepLearning_energyRbmCpp(SEXP anRBMSEXP, SEXP aDataMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DeepLearning::RBM& >::type anRBM(anRBMSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type aDataMatrix(aDataMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(energyRbmCpp(anRBM, aDataMatrix));
    return rcpp_result_gen;
END_RCPP
}
// energyDbnCpp
DeepLearning::ArrayX1d energyDbnCpp(const DeepLearning::DeepBeliefNet& aDBN, const Eigen::Map<Eigen::MatrixXd>& aDataMatrix);
RcppExport SEXP DeepLearning_energyDbnCpp(SEXP aDBNSEXP, SEXP aDataMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DeepLearning::DeepBeliefNet& >::type aDBN(aDBNSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type aDataMatrix(aDataMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(energyDbnCpp(aDBN, aDataMatrix));
    return rcpp_result_gen;
END_RCPP
}
// errorDbnCpp
DeepLearning::ArrayX1d errorDbnCpp(const DeepLearning::DeepBeliefNet& aDBN, const Eigen::Map<Eigen::MatrixXd>& aDataMatrix);
RcppExport SEXP DeepLearning_errorDbnCpp(SEXP aDBNSEXP, SEXP aDataMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DeepLearning::DeepBeliefNet& >::type aDBN(aDBNSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type aDataMatrix(aDataMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(errorDbnCpp(aDBN, aDataMatrix));
    return rcpp_result_gen;
END_RCPP
}
// extractRbmWCpp
DeepLearning::MatrixXdMap extractRbmWCpp(const DeepLearning::RBM& anRBM);
RcppExport SEXP DeepLearning_extractRbmWCpp(SEXP anRBMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DeepLearning::RBM& >::type anRBM(anRBMSEXP);
    rcpp_result_gen = Rcpp::wrap(extractRbmWCpp(anRBM));
    return rcpp_result_gen;
END_RCPP
}
// extractRbmCCpp
DeepLearning::ArrayX1d extractRbmCCpp(const DeepLearning::RBM& anRBM);
RcppExport SEXP DeepLearning_extractRbmCCpp(SEXP anRBMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DeepLearning::RBM& >::type anRBM(anRBMSEXP);
    rcpp_result_gen = Rcpp::wrap(extractRbmCCpp(anRBM));
    return rcpp_result_gen;
END_RCPP
}
// extractRbmBCpp
DeepLearning::ArrayX1d extractRbmBCpp(const DeepLearning::RBM& anRBM);
RcppExport SEXP DeepLearning_extractRbmBCpp(SEXP anRBMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DeepLearning::RBM& >::type anRBM(anRBMSEXP);
    rcpp_result_gen = Rcpp::wrap(extractRbmBCpp(anRBM));
    return rcpp_result_gen;
END_RCPP
}
// unit_DbnGradient
SEXP unit_DbnGradient(SEXP& aDBN, SEXP& aDataMatrix);
RcppExport SEXP DeepLearning_unit_DbnGradient(SEXP aDBNSEXP, SEXP aDataMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP& >::type aDBN(aDBNSEXP);
    Rcpp::traits::input_parameter< SEXP& >::type aDataMatrix(aDataMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(unit_DbnGradient(aDBN, aDataMatrix));
    return rcpp_result_gen;
END_RCPP
}
