'로 구분)
아래는 정답 코드입니다.
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        nums[i] *= nums[i];
    }
    sort(nums.begin(), nums.end());
    return nums;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    nums = sortedSquares(nums);
    cout << "Squared and sorted array is: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
```

4. 테스트 케이스
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

vector<int> sortedSquares(vector<int>& nums);

void test_sortedSquares() {
    vector<int> nums1 = {-4, -2, 0, 3, 10};
    vector<int> result1 = {0, 4, 9, 16, 100};
    assert(sortedSquares(nums1) == result1);

    vector<int> nums2 = {-7, -3, 2, 3, 11};
    vector<int> result2 = {4, 9, 9, 49, 121};
    assert(sortedSquares(nums2) == result2);

    cout << "All test cases passed!" << endl;
}

int main() {
    test_sortedSquares();
    return 0;
}
```