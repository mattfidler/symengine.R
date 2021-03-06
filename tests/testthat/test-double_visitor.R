context("Double Visitor")

test_that("LambdaDoubleVisitor for Basic", {
    expr <- S("x - y")
    f <- DoubleVisitor(expr, args = Vector("x", "y"), llvm_opt_level = -1L)
    expect_true(class(f) == "LambdaDoubleVisitor")
    res <- f(y = 1:10, x = 1)
    expect_identical(res, as.numeric(0:-9))
    
})

test_that("LambdaDoubleVisitor for VecBasic", {
    expr <- V("x + y", "x - y")
    f <- DoubleVisitor(expr, llvm_opt_level = -1L)
    expect_true(class(f) == "LambdaDoubleVisitor")
    res <- f(x = c(1,2,3,4), y = c(4,3,2,1))
    expect_true(is.matrix(res))
    expect_identical(dim(res), c(4L, 2L))
    expect_identical(res[, 1], rep(5, 4))
})

test_that("LLVMDoubleVisitor for Basic", {
    skip_if_not(symengine_have_component("llvm"))
    
    expr <- S("x - y")
    f <- DoubleVisitor(expr, args = Vector("x", "y"), llvm_opt_level = 1L)
    expect_true(class(f) == "LLVMDoubleVisitor")
    res <- f(y = 1:10, x = 1)
    expect_identical(res, as.numeric(0:-9))
    
})

test_that("LLVMDoubleVisitor for VecBasic", {
    skip_if_not(symengine_have_component("llvm"))
    
    expr <- V("x + y", "x - y")
    f <- DoubleVisitor(expr, llvm_opt_level = 1L)
    expect_true(class(f) == "LLVMDoubleVisitor")
    res <- f(x = c(1,2,3,4), y = c(4,3,2,1))
    expect_true(is.matrix(res))
    expect_identical(dim(res), c(4L, 2L))
    expect_identical(res[, 1], rep(5, 4))
})
