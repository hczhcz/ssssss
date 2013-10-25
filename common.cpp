// Homework Common Library
// License :    WTFPL 2.0
// Build :      linux, gcc/g++

// Header

#include "common.hpp"

void FlushCIN(void) {
    // fflush(stdin);
    cin.clear();
    cin.sync();
    // Clear input buffer
    cin.ignore(std::numeric_limits <streamsize>::max(), '\n');
}

void FlushCOUT(void) {
    // fflush(stdout);
    cout.clear();
    cout.flush();
}

void FlushCIO(void) {
    FlushCIN();
    FlushCOUT();
}

void Error(string Info) {
    throw runtime_error(Info);
}

void Assert(bool Logic, string Info) {
    if (!Logic) {
        throw runtime_error(Info);
    }
}

void Pause(void) {
    char PauseChar;
    cin.get(PauseChar);
}

// Add something here
