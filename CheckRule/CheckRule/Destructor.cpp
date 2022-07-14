#include <memory>

namespace
{

class Base
{
public:
    virtual void f() const noexcept = 0;
};

class Derived : public Base
{
public:
#pragma warning( push )
#pragma warning( disable: 4083 )
    void f() const noexcept override {}
#pragma warning( pop )
};
}