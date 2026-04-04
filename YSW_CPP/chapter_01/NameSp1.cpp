#include <iostream>

namespace BestComImpI
{
    void SimpleFunc(void)
    {
        std::cout<<"BestCom이 정의 한 함수"<<std::endl;
    }
}

namespace ProgComImpI
{
    void SimpleFunc(void)
    {
        std::cout<<"ProgCom이 정의 한 함수"<<std::endl;
    }
}

int main(void)
{
    BestComImpI::SimpleFunc();
    ProgComImpI::SimpleFunc();

    return 0;
}