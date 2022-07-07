
#include <iostream>

namespace
{
    class ClassMove
    {
    public:
        void moveTest() noexcept
        {
            int num = 5;
            const int refNum = std::move(num);
            printf("%d %d", num, refNum);
        }
    };

}