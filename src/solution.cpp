2. 기본 코드
아래는 프로그램의 대략적인 구조를 보여주는 기본 코드입니다.
```cpp
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int mostFrequentNum(const vector<int>& nums) {
    // 여기에 코드를 작성하세요.
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << "The most frequent number is: " << mostFrequentNum(nums) << endl;
    return 0;
}
```