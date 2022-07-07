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
    void f() const noexcept override {}
};

}