#include <iostream>
using namespace std;

int main(void)
{
    int num=12;                     
    int *ptr=&num;
    int **dptr=&ptr;            //포인터에 대한 포인터(=이중 포인터)는 '**'

    int &ref=num;
    int *(&pref)=ptr;           //포인터에 대한 별명은 *(&asdf)형태로
    int **(&dpref)=dptr;        //이중 포인터에 대한 별명은 **(&asdf)형태로

    cout<<ref<<endl;
    cout<<*pref<<endl;          //*pref = *ptr
    cout<<**dpref<<endl;        //**dpref = **dptr

    return 0;
}
