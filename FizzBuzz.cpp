#include <iostream>
using namespace std;

int main()
{
	for (unsigned char c = 1; c < 101; ++c)
	{
		if (c % 15 == 0) cout << "FizzBuzz" << endl;
		else if (c % 3 == 0) cout << "Fizz" << endl;
		else if (c % 5 == 0) cout << "Buzz" << endl;
		else cout << +c << endl;
	}
	return 0;
}