#include <iostream>
#include "FrequencyCounting.h"
#include "TheTwoSum.h"
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
    // time start
    auto start = high_resolution_clock::now();

    TheTwoSum theTwoSum;
    theTwoSum.test();

    // time stop
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
    return 0;
}
