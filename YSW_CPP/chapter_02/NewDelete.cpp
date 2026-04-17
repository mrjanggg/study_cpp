#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char* MakeStrAdr(int len)
{
    //char* str = (char*)malloc(sizeof(char) * len);
    char* str = new char[len];
    return str;
}

int main(void)
{
    char* str = MakeStrAdr(20);
    strcpy(str, "I am so happy~");
    cout<<str<<endl;

    //free(str);
    delete []str;           //new 생성자가 []였다면 반드시 delete도 '[]'를 명시적으로 변수앞에 적어야한다.
    return 0;
}