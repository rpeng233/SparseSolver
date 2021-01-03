#include <bits/stdc++.h>
using namespace std; 

/////loop macros
#define FR(i, a, b) for(int i=(a); i<(b); i++) 
#define FOR(i, n) FR(i, 0, n) 

/////floating point
typedef double D;
const D EPS = 1e-9;
int EQ(D a, D b) {return fabs(a - b) < EPS;}

/////fast I/O
namespace IO {
   const int BUF = 32768;
   FILE *in = stdin;
   int ipos = BUF;
   char inbuf [BUF];
   inline void init (const char *namein) {
       in = fopen (namein, "r");
   }

   inline char nextc (bool adv = true) {
       if (ipos == BUF) {
           fread (inbuf, sizeof (char), BUF, in);
           ipos = 0;
       }
       return inbuf [adv ? ipos++ : ipos];
   }

   inline void read (int &num) {
       while (nextc (false) != '-' && (nextc (false) < '0' || nextc (false) > '9')) {
           ipos++;
       }

       bool neg = false;
       if (nextc (false) == '-') {
           neg = true;
           ipos++;
       }

       for (num = 0; nextc (false) >= '0' && nextc (false) <= '9';) {
           num = num * 10 + nextc () - '0';
       }

       if (neg) num = -num;
   }
}


int main() {

  return 0;
}

