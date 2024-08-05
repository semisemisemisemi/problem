'로 구분)
아래는 정답 코드입니다.
```cpp
#include<iostream>
#include<string>
using namespace std;

string countTen(const string& str) {
    int sum = 0;
    string result = "";
    for(const auto& c : str) {
        int num = c - '0';
        sum += num;
        result += c;
        if(sum >= 10) break;
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string of numbers: ";
    cin >> input;
    cout << "The string up to the count of 10 is: " << countTen(input) << endl;
    return 0;
}
```

4. 테스트 케이스
```cpp
#include <iostream>
#include <cassert>
#include <string>
using namespace std;

string countTen(const string& str);

void test_countTen() {
    assert(countTen("12345678") == "1234");
    assert(countTen("11111111111") == "1111111111");
    assert(countTen("789") == "789");
    assert(countTen("0000000000") == "");
    assert(countTen("555555") == "5555");
    cout << "All test cases passed!" << endl;
}

int main() {
    test_countTen();
    return 0;
}
```