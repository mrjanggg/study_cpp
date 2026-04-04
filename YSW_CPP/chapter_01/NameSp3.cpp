#include <iostream>

namespace BestComImpI
{
    void SimpleFunc(void);
}

namespace BestComImpI
{
    void PrettyFunc(void);
}

namespace ProgComImpI
{
    void SimpleFunc(void);
}

int main(void)
{
    BestComImpI::SimpleFunc();
    return 0;
}

void BestComImpI::SimpleFunc(void)
{
    std::cout<<"BestCom이 정의한 함수"<<std::endl;
    PrettyFunc();                                       // 동일 이름공간
    ProgComImpI::SimpleFunc();                          // 다른 이름공간
}

void BestComImpI::PrettyFunc(void)
{
    std::cout<<"So Pretty!!!"<<std::endl;
}

void ProgComImpI::SimpleFunc(void)
{
    std::cout<<"ProgCom이 정의한 함수"<<std::endl;
}