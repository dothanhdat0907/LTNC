#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long a, r, res, d, n;
	cin>>a >>n >>d;

	res = 1;
	r = a % d;

	// Sơ đồ nhân Ai Cập
	while (n > 0)
	{
		if(n % 2 == 1) res = (res * r) % d;
		r = (r * r) %d;
		n = n/2;
	}

	cout << res;

	return 0;
}
