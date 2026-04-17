#include <iostream>
using namespace std;


//반환형에 &가 붙으면 메모리로 접근하는것이고, 아니면 '복사본'을 만드는것임에 유의.

int& RefRetFuncOne(int &ref)
{
    ref++;
    return ref;
}

int main(void)
{
    int num1 = 1;
    int num2 = RefRetFuncOne(num1);

    num1 += 1;
    num2 += 100;

    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;

    return 0;
}