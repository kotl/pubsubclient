#ifndef trace_h
#define trace_h
#include <iostream>

#include <stdlib.h>

#define LOG(x) {std::cout << x << std::flush; }
#define TRACE(x) {std::cout << x << "\n" << std::flush; }

#endif
