source("tmp.R")

.in <- suppressWarnings(readLines("src/Makevars.in"))
.in <- gsub("@@@PKG_LIBS@@@", PKG_LIBS_VALUE, .in)
.in <- gsub("@@@PKG_CPPFLAGS@@@", PKG_CPPFLAGS_VALUE, .in)
.in <- gsub("@@@DO_UPSTREAM@@@", DO_UPSTREAM, .in)

file.out <- file("src/Makevars", "wb")
writeLines(.in, file.out)
close(file.out)

