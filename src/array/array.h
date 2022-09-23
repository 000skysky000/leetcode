//
// Created by ASUS on 2022/9/17.
//

#ifndef LEETCODE_ARRAY_H
#define LEETCODE_ARRAY_H


class array {
};

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j = 0;
        int i = 0;
        int sum = 0;
        int length = INT32_MAX;
        while (j < nums.size()){
            while (sum < target && j < nums.size()){ //边界不加等号
                sum += nums[j++];
            }
            while (sum >= target && i < nums.size()){ //边界加等号
                sum -= nums[i++];
            }
            length = length > j-i+1 ? j-i+1 : length;
        }

        if( i == 0 ){
            return 0;
        }

        return length;
    }
};

#endif //LEETCODE_ARRAY_H
