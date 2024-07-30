//
// Created by Andy Li on 30/7/2024.
//

#ifndef MAP_THETWOSUM_H
#define MAP_THETWOSUM_H

#include <vector>
#include <algorithm>
#include <unordered_map>
#include <utility> // for std::pair
#include <iostream>

using namespace std;

class TheTwoSum {
    std::vector<pair<int,int>> twoSum(const std::vector<int>& nums, int target);

public:
    void test();
};


#endif //MAP_THETWOSUM_H
