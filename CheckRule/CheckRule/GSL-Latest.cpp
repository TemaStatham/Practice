#include <gsl/gsl>

namespace
{
	class gsltest
	{
		int test() {
			int x = 5;
			gsl::owner<int*>p = &x;
			return 0;
		}
	};
}