4. 테스트 케이스
```cpp
#include <iostream>
#include <cassert>
using namespace std;

void damageHealth(int* health, int size);

void test_damageHealth() {
    int health[5] = {10, 20, 30, 40, 50};
    damageHealth(health, 5);
    for(int i=0; i<5; i++)
        assert(health[i] == 10*i+9); // 모든 체력이 1씩 감소했는지 확인

    int health2[3] = {5, 6, 7};
    damageHealth(health2, 3);
    for(int i=0; i<3; i++)
        assert(health2[i] == 4+i); 

    cout << "All test cases passed!" << endl;
}

int main() {
    test_damageHealth();
    return 0;
}
```