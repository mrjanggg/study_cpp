#include <iostream>

using namespace std;
int val1 = 1;

void SimpleFunc(void)
{
    int val1 = 7;
    val1 += 3;

    ::val1 += 99;               //여기서 ::을 앞에 붙힌건, 전역변수 val1을 참조하기 위해서이다.
    
    cout<<"SimpleFunc의 내부변수 val1의 값은? : "<<val1<<endl;
    cout<<"전역변수 val1의 값은? : "<<::val1<<endl;
}

int main(void)
{
    SimpleFunc();

    return 0;
}