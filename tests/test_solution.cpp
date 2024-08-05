4. 테스트 케이스
```cpp
#include <iostream>
#include <sstream>
#include <cassert>
using namespace std;

void generatePointStruct(int N);

void test_generatePointStruct() {
    stringstream output;
    generatePointStruct(1);
    stringstream expectedOutput1;
    expectedOutput1 << "struct Point1D {" << "int x0;" << "};";
    assert(output.str() == expectedOutput1.str());

    output.str(""); // clear the output
    generatePointStruct(2);
    stringstream expectedOutput2;
    expectedOutput2 << "struct Point2D {" << "int x0;" << "int x1;" << "};";
    assert(output.str() == expectedOutput2.str());

    cout << "All test cases passed!" << endl;
}

int main() {
    test_generatePointStruct();
    return 0;
}
```