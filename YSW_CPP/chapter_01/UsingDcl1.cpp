#include <iostream>

namespace Hybrid
{
    void HybFunc(void)
    {
        std::cout<<"So Simple Function!"<<std::endl;
        std::cout<<"Hello World!"<<std::endl;
    }
}

int main(void)
{
    using Hybrid::HybFunc;          //HybFunc()가 아님에 주의!
    HybFunc();
    
    return 0;
}