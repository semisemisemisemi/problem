2. 문제 코드
아래는 프로그램의 대략적인 구조를 보여주는 기본 코드입니다.
```cpp
#include <iostream>
using namespace std;

void damageHealth(int* arr, int size) {
    // 여기에 코드를 작성하세요.
}

int main() {
    int health[5] = {10, 20, 30, 40, 50};
    damageHealth(health, 5);

    for(int i=0; i<5; i++)
        cout << health[i] << " ";
    cout << endl;
    return 0;
}
```