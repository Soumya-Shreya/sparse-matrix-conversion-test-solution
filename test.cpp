#include <Rcpp.h>
using namespace Rcpp;

// You can source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar).

// [[Rcpp::export]]
void print_matrix_cpp(S4 obj)
{
  //obj is the dgCMatrix which is defined as S4 object in the Matrix package
  
  //extracting different values from the object
  
  //Type of matrix
  CharacterVector type= obj.slot("class");
  
  //Dimensions of the matrix
  NumericVector dim = obj.slot("Dim");
  
  //0-based row number for each non zero element
  NumericVector i = obj.slot("i");  
  
  //total number of nonzero elements before a particular column number (0 based)
  NumericVector p = obj.slot("p");
  
  //non zero elements of the matrix
  NumericVector x = obj.slot("x");  
  
  //Printing the values
  Rcout<<"Type:\t"<<type<<"\n";
  Rcout<<"Dim:\t"<<dim<<"\n";
  Rcout<<"length of i:\t"<<i.size()<<"\n";
  Rcout<<"value of i:\t"<<i<<"\n";
  Rcout<<"length of p:\t"<<p.size()<<"\n";
  Rcout<<"value of p:\t"<<p<<"\n";
  Rcout<<"length of x:\t"<<x.size()<<"\n";
  Rcout<<"value of x:\t"<<x<<"\n";
  
}
