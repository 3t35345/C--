//
// Created by Andy Li on 30/7/2024.
//

#include "TheTwoSum.h"

std::vector<pair<int,int>> TheTwoSum::twoSum(const vector<int> &nums, int target) {

    // Create a map to store the index of the number
    unordered_map<int, int> indexMap;
    vector<pair<int,int>> result;

    for (int i = 0; i < nums.size(); i++) {
        // Find the complement of the number
        int complement = target - nums[i];

        // find the complement in the map, if found, return the index of the complement and the current index
        if (indexMap.find(complement) != indexMap.end()) {
            result.emplace_back(indexMap[complement], i);
        }

        // If not found, store the index of the number in the map
        indexMap[nums[i]] = i;
    }

    return  result;
}

void printResult(const std::vector<std::pair<int, int>>& result) {
    for (const auto& p : result) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }
    std::cout << std::endl;
}

void TheTwoSum::test() {
    // Test case 1: Solution exists
    {
        std::vector<int> nums = {2, 7, 11, 15};
        int target = 9;
        std::vector<std::pair<int, int>> expected = {{0, 1}};
        std::vector<std::pair<int, int>> result = TheTwoSum::twoSum(nums, target);
        std::cout << "Test case 1 - Expected: ";
        printResult(expected);
        std::cout << "Result: ";
        printResult(result);
        std::cout << (result == expected ? "PASS" : "FAIL") << std::endl;
    }

    // Test case 2: No solution
    {
        std::vector<int> nums = {1, 2, 3, 4};
        int target = 8;
        std::vector<std::pair<int, int>> expected = {};
        std::vector<std::pair<int, int>> result = TheTwoSum::twoSum(nums, target);
        std::cout << "Test case 2 - Expected: ";
        printResult(expected);
        std::cout << "Result: ";
        printResult(result);
        std::cout << (result == expected ? "PASS" : "FAIL") << std::endl;
    }

    // Test case 3: Multiple solutions
    {
        std::vector<int> nums = {1, 3, 2, 4, 3};
        int target = 6;
        std::vector<std::pair<int, int>> expected = {{1, 3}, {2, 4}};
        std::vector<std::pair<int, int>> result = TheTwoSum::twoSum(nums, target);
        std::cout << "Test case 3 - Expected: ";
        printResult(expected);
        std::cout << "Result: ";
        printResult(result);
        std::cout << (result == expected ? "PASS" : "FAIL") << std::endl;
    }

    // Test case 4: Negative numbers
    {
        std::vector<int> nums = {-1, -2, -3, -4, -5};
        int target = -8;
        std::vector<std::pair<int, int>> expected = {{2, 4}};
        std::vector<std::pair<int, int>> result = TheTwoSum::twoSum(nums, target);
        std::cout << "Test case 4 - Expected: ";
        printResult(expected);
        std::cout << "Result: ";
        printResult(result);
        std::cout << (result == expected ? "PASS" : "FAIL") << std::endl;
    }

    // Test case 5: Contains zero
    {
        std::vector<int> nums = {0, 4, 3, 0};
        int target = 0;
        std::vector<std::pair<int, int>> expected = {{0, 3}};
        std::vector<std::pair<int, int>> result = TheTwoSum::twoSum(nums, target);
        std::cout << "Test case 5 - Expected: ";
        printResult(expected);
        std::cout << "Result: ";
        printResult(result);
        std::cout << (result == expected ? "PASS" : "FAIL") << std::endl;
    }
}