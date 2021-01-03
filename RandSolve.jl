using LinearAlgebra;
using SparseArrays;
using IterativeSolvers;

A_n = 5000;
A_nnz = 20 * A_n;

A_i = rand(1:A_n, A_nnz);
A_j = rand(1:A_n, A_nnz);
A_val = randn(A_nnz);

A = sparse(A_i, A_j, A_val);

############some stats
M = Matrix(A' * A);
M_lambda = sort(eigvals(M));
println("min eig = ", M_lambda[1]);
println("max eig = ", M_lambda[A_n]);

#generate RHS randomly
println("=====trials where RHS is generated randomly");
bbar = randn(A_n, 1);

println("---backslash");
@time x = A \ bbar;
println("RHS error: ", norm(A * x - bbar));

println("---IterativeMethods::GMRES");
@time x = gmres(A, bbar, tol = 1e-9, maxiter = 20000);
println("RHS error: ", norm(A * x - bbar));

println("---IterativeMethods::CG with symmetrization");
@time x = cg(A' * A, A' * bbar, tol = 1e-9, maxiter = 20000);
println("RHS error: ", norm(A * x - bbar));

#generate LHS solution randomly
println("=====trials where LHS is generated randomly");
xbar = randn(A_n, 1);
bbar = A * xbar;size

println("---backslash");
@time x = A \ bbar;
println("LHS error: ", norm(x - xbar));
println("RHS error: ", norm(A * x - bbar));

println("---IterativeMethods::GMRES");
@time x = gmres(A, bbar, tol = 1e-9, maxiter = 20000);
println("LHS error: ", norm(x - xbar));
println("RHS error: ", norm(A * x - bbar));

println("---IterativeMethods::CG with symmetrization");
@time x = cg(A' * A, A' * bbar, tol = 1e-9, maxiter = 20000);
println("LHS error: ", norm(x - xbar));
println("RHS error: ", norm(A * x - bbar));
