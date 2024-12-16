2. 문제 코드
아래는 프로그램의 대략적인 구조를 보여주는 기본 코드입니다.
```cpp
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    // 여기에 코드를 작성하세요.
}

int main() {
    string input;
    cout << "Enter a word: ";
    cin >> input;
    cout << "The word is " << (isPalindrome(input) ? "" : "not ") << "a palindrome." << endl;
    return 0;
}
```