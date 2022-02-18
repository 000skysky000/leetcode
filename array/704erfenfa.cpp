//���ֲ���
/*
 * author : sky
 */
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// �汾һ
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size(); // ����target������ҿ������������[left, right)
        while (left < right) { // ��Ϊleft == right��ʱ����[left, right)����Ч�Ŀռ䣬����ʹ��
            int middle = left + ((right - left) >> 1);
            if (nums[middle] > target) {
                right = middle; // target �������䣬��[left, middle)��
            } else if (nums[middle] < target) {
                left = middle + 1; // target �������䣬��[middle + 1, right)��
            } else { // nums[middle] == target
                return middle; // �������ҵ�Ŀ��ֵ��ֱ�ӷ����±�
            }
        }
        // δ�ҵ�Ŀ��ֵ
        return -1;
    }
};
int main() {
//�������ʾ��ʼ��ʹ��{}������[]
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    vector<int> array={1,2,3,4,5,6,7,8,9};
    Solution solution;
    cout << &array[0]<< endl;
    cout << &array << endl;
    cout << "target=2 if output is 1 the answer is correct" << solution.search(array,-1)<<endl;
    return 0;

};