//
// Created by ASUS on 2022/2/18.
//977有序数组的平方
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int k = A.size() - 1;
        vector<int> result(A.size(), 0);
        for (int i = 0, j = A.size() - 1; i <= j;) { // 注意这里要i <= j，因为最后要处理两个元素
            if (A[i] * A[i] < A[j] * A[j])  {
                result[k--] = A[j] * A[j];
                j--;
            }
            else {
                result[k--] = A[i] * A[i];
                i++;
            }
        }
        return result;
    }
};
int main() {
    vector<int> array={-4,-3,0,1,2,10};
    Solution solution;

    for (auto i:solution.sortedSquares(array))
        cout << i <<" ";
    cout<<endl;
    return 0;
}