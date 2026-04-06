#include <iostream>

using namespace std;

void ShowMenu(void);

struct accountInfo
{
    int accountNum;
    char userName[100];
    int userMoney;

    int SaveMoney(int money)
    {
        userMoney += money;

        return userMoney;
    }

    int DrawMoney(int money)
    {
        userMoney -= money;

        return userMoney;        
    }
};



int main(void)
{
    int insertNumber;

    accountInfo userInfo[100];

    while(1)
    {
        ShowMenu();
        cin>>insertNumber;
        
        if(insertNumber == 5)
        {
            cout<<"프로그램을 종료합니다."<<endl;
            break;
        }
        else
        {
            cout<<insertNumber<<"를 선택하셨군요!"<<endl;
        }
    }

    return 0;
}

void ShowMenu(void)
{
    cout<<"-----MENU-----"<<endl;
    cout<<"1. 계좌개설"<<endl;
    cout<<"2. 입    금"<<endl;
    cout<<"3. 출    금"<<endl;
    cout<<"4. 계좌정보 전체 출력"<<endl;
    cout<<"5. 프로그램 종료"<<endl;
}