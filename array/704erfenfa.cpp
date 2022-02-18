//二分查找
/*
 * author : sky
 */
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 版本一
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size(); // 定义target在左闭右开的区间里，即：[left, right)
        while (left < right) { // 因为left == right的时候，在[left, right)是无效的空间，所以使用
            int middle = left + ((right - left) >> 1);
            if (nums[middle] > target) {
                right = middle; // target 在左区间，在[left, middle)中
            } else if (nums[middle] < target) {
                left = middle + 1; // target 在右区间，在[middle + 1, right)中
            } else { // nums[middle] == target
                return middle; // 数组中找到目标值，直接返回下标
            }
        }
        // 未找到目标值
        return -1;
    }
};
int main() {
//数组的显示初始化使用{}而不是[]
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    vector<int> array={1,2,3,4,5,6,7,8,9};
    Solution solution;
    cout << &array[0]<< endl;
    cout << &array << endl;
    cout << "target=2 if output is 1 the answer is correct" << solution.search(array,-1)<<endl;
    return 0;

};