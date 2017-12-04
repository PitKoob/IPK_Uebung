#include <iostream>



bool isPrime (int number)
{
	bool done;
	done = true;
	if (number < 2)
		return false;
	if (number == 2)
		return true;

	for  (int i = 2; i < (number/2+1); i++)
	{
		if (number % i == 0)
			return false;
		
	}
	return true;
	
}

void printPrimes (int upto)
{
	for (int i = 2; i <= upto; i++)
	{
		if (isPrime(i))
		{
			std::cout << i << std::endl;
		}
	}
}

int main()
{
	std::cout << "Enter an integer up to which you want to determine the prime numbers: ";
	int n;
	std::cin >> n;
	(printPrimes(n));
	// std::cout << n << " is a prime number";
	// else 
	// std::cout << n << " is a not prime number";
	return 0;
}
