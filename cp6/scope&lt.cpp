#include <iostream>

void trackProgress(int increment) {      // 'increment' is a Parameter: allows the caller to pass data
    static int totalCount = 0;           // 'totalCount' is a Static Local: remembers state between calls
    int currentStep = totalCount;        // 'currentStep' is a Local Variable: temporary helper for logic
    
    totalCount += increment;
    std::cout << "Step: " << currentStep << " | New Total: " << totalCount << std::endl;
}

int main() {
    int rounds = 10, increment = 1;
    while (rounds > 0) {
        trackProgress(increment);
        --rounds;
    }
    return 0;
}