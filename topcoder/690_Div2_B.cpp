#include<vector>

using namespace std;

class GerrymanderEasy {
  public:
    double getmax(vector <int> A, vector <int> B, int K);
};

double GerrymanderEasy::getmax(vector <int> A, vector <int> B, int K){
  double max=0;
  for (int i=0; i<A.size(); i++) {
    for (int j= i+K-1; j<A.size(); j++) {
      double sum = 0;
      double support = 0;
      for (int k = i; k<=j; k++) {
        sum += A[k];
        support += B[k];
      }
      if (support/sum > max) max = support/sum;
    }
  }
  return max;
}
