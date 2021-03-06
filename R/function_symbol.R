
#' @include classes.R
NULL

#' Create a FunctionSymbol
#' 
#' \code{FunctionSymbol} creates a Basic object with type \code{FunctionSymbol}.
#' \code{Function} returns a generator.
#' 
#' @param name Name of the function symbol
#' @param args Dependent symbols
#' 
#' @rdname FunctionSymbol
#' 
#' @return \code{FunctionSymbol} returns a \code{Basic}. \code{Function} returns
#'   a function that will return a \code{Basic}
#' 
#' @seealso \code{\link{S}}
#' @export
#' @examples 
#' f <- Function("f")
#' a <- Symbol("a")
#' b <- Symbol("b")
#' f(a, b)
#' e <- f(a, f(a + b))
#' D(e, a)
#' FunctionSymbol("f", c(a,b))
Function <- function(name) {
    new("FunctionSymbolGenerator", name = name)
}

#' @rdname FunctionSymbol
#' @export
FunctionSymbol <- function(name, args) {
    if (!is.character(name) || length(name) != 1L)
        stop("name argument must be a length-one character vector")
    args <- Vector(args)
    s4basic_function(name, args)
}

setMethod("show", c("FunctionSymbolGenerator"),
    function(object) {
        str <- sprintf("FunctionSymbolGenerator\t%s\n", object@name)
        cat(str)
    }
)


