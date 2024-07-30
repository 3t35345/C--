//
// Created by Andy Li on 30/7/2024.
//

#include "FrequencyCounting.h"

map<int, int> FrequencyCounting::solution(vector<int>& v){
    map<int, int> frequency;
    for(int i : v){
        frequency[i]++;
    }
    return frequency;
}

void FrequencyCounting::test() {
    vector<pair<vector<int>, map<int, int>>> testCases = {
            {{}, {}},
            {{5}, {{5, 1}}},
            {{1, 2, 3, 4, 5}, {{1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}}},
            {{2, 2, 2, 2}, {{2, 4}}},
            {{1, 2, 2, 3, 3, 3}, {{1, 1}, {2, 2}, {3, 3}}},
            {{1, -1, 1, -1, 1, -1}, {{1, 3}, {-1, 3}}}
    };

    for (const auto& testCase : testCases) {
        vector<int> input = testCase.first;
        map<int, int> expected = testCase.second;
        map<int, int> result = solution(input);

        if (result == expected) {
            cout << "Test passed for input: ";
        } else {
            cout << "Test failed for input: ";
        }
        for (int num : input) {
            cout << num << " ";
        }
        cout << endl;
    }
}


