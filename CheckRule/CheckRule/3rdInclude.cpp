#include <iostream>
#include <boost/optional.hpp>

namespace
{
	template <typename T>
	void use(T&&) noexcept
	{
	}

	void test() noexcept
	{
		boost::optional<int> n;
		use(n);
	}
}