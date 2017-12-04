#include <iostream>



void collatz (int number)
{

	bool done;
	if (number == 1 || number == 0 || number == -1 || number == -5 || number == -17)
		done = true;
	else 
		done = false;

	while (done == false)
	{
		if (number % 2 == 0)
			number = number / 2;
		else
			number = number*3 +1;

		if (number == 1 || number == 0 || number == -1 || number == -5 || number == -17)
			done = true;

		std::cout << number
		<< std::endl;

	}
}

int main()
{

	int n;
	std::cin >> n;
	collatz(n);
	std::cout << sqrt(n);
	return 0;
}
