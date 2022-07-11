#include <iostream>
#include <memory>
namespace
{
	struct S
	{
		void DoSomething() const noexcept
		{
		}
	};

	class Holder
	{
	public:
		explicit Holder(const S& s) noexcept
			: m_s{ s }
		{
		}

		void DoSomethingWithS() noexcept
		{
			m_s.DoSomething();
		}

	private:
		const S& m_s;
	};

	void test()
	{
		auto p = std::make_unique<S>();
		p.reset();
		p->DoSomething();

	}

	void test2() noexcept
	{
		auto holder = Holder(S());
		holder.DoSomethingWithS();
	}
}