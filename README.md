This is an attempt to collect + run codes of various approaches
for solving spars, reasonably conditioned, systems of linear equations.

The class of matrices that motivated this is n-by-n random
0/1/-1 matrices with about O(logn) non-zeros per row.

Data is not stored together with this due to file sizes.
You should run the following data generators to get all the data:
* GenRandMatrices.sh

Note that matrices (.A.in) and vectors (.b.in) are stored separately

(TODO: write a gener that creates a vector b and its solution x?)

Methods we include are:
* Conjugate Gradient
* Dixon 2-adic 

Method we'd like to include are:
* Incomplete Cholesky (iChol)
* GMRES (iterative methods for asymmetric matrices)
* low factor width representations of p-adic inverses (EGGSV)
* Dixon p-adic for larger values of p
* Multigrid
