#include <string>

namespace
{
	void test()
	{
		auto s1 = std::string();
		auto s2 = std::move(s1);
		s1.append("a");
	}
}