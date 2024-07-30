//
// Created by Andy Li on 30/7/2024.
//

#ifndef MAP_FREQUENCYCOUNTING_H
#define MAP_FREQUENCYCOUNTING_H

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class FrequencyCounting {
/*
 * Question: Given an array of integers, count the frequency of each integer.
 */

map<int,int> solution(vector<int>& v);
public:
    void test();
};


#endif //MAP_FREQUENCYCOUNTING_H
