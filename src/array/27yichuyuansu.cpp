//
// Created by ASUS on 2022/2/17.
//
//27---移除数组元素

#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    //解法1：暴力法
    int removeElement(vector<int>& nums, int val) {
        int count=nums.size();
        for(int i=0;i<count;i++){
            if(nums[i]==val){
                for (int j = i; j < (count-1); j++) {
                    nums[j] = nums[j+1];
                }
                count-- ;
            }
        }
        return count;
    }

    //解法2：快慢指针！！！
    int removeElement2(vector<int>& nums, int val) {
        int fastptr = 0, slowptr = 0;
        for (; fastptr < nums.size(); ) {
            if(nums[fastptr]==val){
                fastptr++;
                continue;
            }
            cout<< slowptr<<endl;
            cout<< fastptr<<endl;
            nums[slowptr]=nums[fastptr];
            slowptr++;
            fastptr++;

        }
        return slowptr;
    }
};

int main(){

    vector<int> array={1,2,3,1,2,3,4};
    Solution solution;
    int a=solution.removeElement2(array,3);
    std::cout<<a<<endl;
    for (auto i:array)
        cout << i <<"";
    cout<<endl;
    return 0;
};