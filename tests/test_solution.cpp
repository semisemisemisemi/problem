4. 테스트 케이스
```cpp
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

int mostFrequentNum(const vector<int>& nums);

void test_mostFrequentNum() {
    assert(mostFrequentNum({1, 3, 2, 1, 4, 1}) == 1);
    assert(mostFrequentNum({2, 2, 3, 3, 1}) == 2);
    assert(mostFrequentNum({5, 5, 5, 2, 2, 2, 6, 6, 6}) == 2);
    assert(mostFrequentNum({1}) == 1);
    assert(mostFrequentNum({4, 4, 4, 3, 3}) == 3);
    cout << "All test cases passed!" << endl;
}

int main() {
    test_mostFrequentNum();
    return 0;
}
```