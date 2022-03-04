//
// Created by sky on 2022/2/28.
//
/*
 * author : sky ubuntu
 *
 */
#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size(); // ????target????????????????????[left, right)
        while (left < right) { // ???left == right???????[left, right)????Ч???????????
            int middle = left + ((right - left) >> 1);
            if (nums[middle] > target) {
                right = middle; // target ??????????[left, middle)??
            } else if (nums[middle] < target) {
                left = middle + 1; // target ??????????[middle + 1, right)??
            } else { // nums[middle] == target
                return middle; // ??????????????????????±?
            }
        }
        // δ???????
        return -1;
    }
};
int main() {

    int a[10]={1,2,3,4,5,6,7,8,9,10};
    vector<int> array={1,2,3,4,5,6,7,8,9};
    Solution solution;
    cout << &array[0]<< endl;
    cout << &array << endl;
    cout << "target=2 if output is 1 the answer is 爱你 correct" << solution.search(array,-1)<<endl;
    return 0;

};