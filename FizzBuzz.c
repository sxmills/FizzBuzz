#include <stdio.h>

int main(int argc, char** argv)
{
	for (unsigned char c = 1; c < 101; ++c)
	{
		if (c % 15 == 0) printf("FizzBuzz\n");
		else if (c % 3 == 0) printf("Fizz\n");
		else if (c % 5 == 0) printf("Buzz\n");
		else printf("%u\n", c);
	}
	return 0;
}