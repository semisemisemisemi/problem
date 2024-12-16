4. 테스트 케이스
```cpp
#include <iostream>
#include <cassert>
#include <string>
using namespace std;

bool isPalindrome(const string& str);

void test_isPalindrome() {
    assert(isPalindrome("racecar") == true);
    assert(isPalindrome("Racecar") == false); // 대소문자 구분
    assert(isPalindrome("hello") == false);
    assert(isPalindrome("test") == false);
    assert(isPalindrome("Aba") == false);
    assert(isPalindrome("abcdedcba") == true);
    assert(isPalindrome(" A man a plan a canal Panama ") == false); // 공백 포함
    cout << "All test cases passed!" << endl;
}

int main() {
    test_isPalindrome();
    return 0;
}
```