#include <bits/stdc++.h>
using namespace std; 

/////loop macros
#define FR(i, a, b) for(int i=(a); i<(b); i++) 
#define FOR(i, n) FR(i, 0, n) 

/////floating point
typedef double D;
const D EPS = 1e-9;
int EQ(D a, D b) {return fabs(a - b) < EPS;}

/////gener for the random sparse matrices that
//are the focus of what we're trying to look at

int main(int argt, char **args) {
  int n, d, seed;
  sscanf(args[1], "%d", &n);
  sscanf(args[2], "%d", &d);
  sscanf(args[3], "%d", &seed);
  if(seed == -1) seed = time(0);
  fprintf(stderr, "generating %d-by-%d rand matrix with %d random +/-1 non-zeros per row, with seed %d\n", n, n, d, seed);
  map<pair<int, int>, D> nnz;
  FOR(i, n) {
    FOR(t, d) {
      int j = rand() % n;
      nnz[make_pair(i, j)] = (rand() % 2) * 2 + -1;
    }
  }

  printf("%d\n", nnz.size());
  for(auto x:nnz) {
    printf("%d %d %0.3g\n", x.first.first, x.first.second, x.second);
  }
  return 0;
}

