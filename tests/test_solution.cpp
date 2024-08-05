4. 테스트 케이스
```cpp
#include <iostream>
#include <cassert>
using namespace std;

string checkNumber(int number);

void test_checkNumber() {
    assert(checkNumber(1) == "positive");
    assert(checkNumber(-3) == "negative");
    assert(checkNumber(0) == "zero");
    cout << "All test cases passed!" << endl;
}

int main() {
    test_checkNumber();
    return 0;
}
```