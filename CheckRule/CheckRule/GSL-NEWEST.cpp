#include <gsl/gsl>

namespace
{
	template <typename T>
	void use(T&&)
	{
	}

	int test() {
		int x = 5;
		gsl::owner<int*>p = &x;
		//use(p);
		return 0;
	}
}