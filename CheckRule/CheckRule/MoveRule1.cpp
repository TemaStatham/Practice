#include <ostream>

namespace 
{
    class ClassMove
    {
    public:
        void constexpr moveTest() noexcept
        {
            const int num = 5;
            const int refNum = std::move(num);
        }
    };
   
}