/*
1.  이미 선언된 변수의 앞에 '&'연산자가 오면 주소 값의 반환을 명령하는 뜻이 되지만, 
    새로 선언되는 변수의 이름 앞에 등장하면 이는 참조자의 선언을 뜻하는 게 된다.

EX)
    int * ptr = &num1;  //변수 num1의 주소 값을 반환해서 포인터 ptr에 저장해라!
    int &num2 = num1;   //변수 num1에 대한 참조자 num2를 선언해라!

    위 예시에서 2번째 문장이 실행되면 num1과 num2가 같은 주소를 바라보게 된다.
    num1 = 2010이였는데, 위 예시처럼 된다면
    num2도 2010이 되며, num2 = 3048; 을 한다면, num1도 3048로 바뀌게된다. 즉, 참조자는 기존 변수의 이름을 하나 더 같는 또 다른 이름이 되는것이다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int num1 = 1020;
    int &num2 = num1;

    num2= 3047;

    cout<<"VAL: "<<num1<<endl;
    cout<<"REF: "<<num2<<endl;

    cout<<"VAL: "<<&num1<<endl;
    cout<<"REF: "<<&num2<<endl;
    
    return 0;
}