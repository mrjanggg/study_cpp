#include <iostream>

namespace BestComImpI
{
    void SimpleFunc(void);
}

namespace ProgComImpI
{
    void SimpleFunc(void);
}

int main(void)
{
    BestComImpI::SimpleFunc();
    ProgComImpI::SimpleFunc();

    return 0;
}

void BestComImpI::SimpleFunc(void)
{
    std::cout<<"BestCom이 만든 함수!"<<std::endl;
}

void ProgComImpI::SimpleFunc(void)
{
    std::cout<<"ProgCom이 만든 함수!"<<std::endl;
}