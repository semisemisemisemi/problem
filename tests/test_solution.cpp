테스트 케이스:
```cpp
#include <iostream>
#include <cassert>
#include <string>
using namespace std;

string addStrings(const string& num1, const string& num2);

void test_addStrings() {
    assert(addStrings("123", "456") == "579");
    assert(addStrings("789", "456") == "1245");
    assert(addStrings("9999", "8888") == "18887");
    assert(addStrings("10000", "20000") == "30000");
    assert(addStrings("12345", "67890") == "80235");
    cout << "All test cases passed!" << endl;
}

int main() {
    test_addStrings();
    return 0;
}
```