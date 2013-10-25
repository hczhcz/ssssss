// Homework Common Library Header
// License :    WTFPL 2.0
// Build :      linux, gcc/g++

// Only include once

#ifndef __H_COMMONLIB_INCLUDED__
#define __H_COMMONLIB_INCLUDED__

// Header

#include <stdexcept>
#include <iostream>
#include <ios>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <vector>
#include <complex>
#include <algorithm>
#include <limits>
#include <cstdlib>
#include <cmath>
#include <climits>

// Use std by default

using namespace std;

// Flush standard input
// Do not continuously call this function
void FlushCIN(void);

// Flush standard output
void FlushCOUT(void);

// Flush standard IO
void FlushCIO(void);

// Raise runtime error
void Error(string Info);

// Assert and raise runtime error if failed
void Assert(bool Logic, string Info);

// Read a char to pause the program
void Pause(void);

// Add something here

// ...

// Only include once

#endif
