this is an attempt to collect + run codes of various approaches for solving spars, reasonably conditioned, systems of linear equations.

In particular, the benchmark that we will focus on is n-by-n random 0/1/-1 matrices with about O(logn) non-zeros per row.

Data generators are in
* GenRandMatrices.sh
Note that matrices (.A.in) and vectors (.b.in) are stored separately

Methods we include are:
* Conjugate Gradient
* Dixon p-adic

Method we'd like to include are:
* incomplete Cholesky (iChol)
* GMRES (iterative methods for asymmetric matrices)
* low factor width representations of p-adic inverses (EGGSV)
