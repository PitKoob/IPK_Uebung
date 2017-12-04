#include <iostream>
#include <cmath>
	using namespace std;


double pow_iterative(double base, int n)
{	
	double result = 1;
	for (int i = 0; i<n; ++i)
	{
	result = result*base;
	}
	return result;
}


double root_iterative(double q, int n, int steps)
{
	double a = 1;
	for (int i = 0; i<steps; ++i)
	{
		a = a +(1.0/n)*(q/pow_iterative(a,n-1)-a);
	}
	return a;
	
}

void test_root(double q, int n, int steps)
{	
	double approx,ApproxPowN;
	approx = root_iterative(q,n,steps);
	ApproxPowN = pow_iterative(approx,n);
	cout << "q = " << q << endl;
	cout << "n = " << n << endl;
	cout << "Wurzel = " << approx << endl;
	cout << "Wurzel^n = " << ApproxPowN << endl;
	cout << "Abweichung = " << q-ApproxPowN<< endl;
}

int main()
{	
	bool fail;
	double Q;
	int N,steps;
	steps = 500;
	std::cout << "Calculating the n-th root of a number q" << std::endl;

	fail = true;
	do
	{	
		fail = false;		
		std::cout << "Enter a positive float q = " ;
	    std::cin >> Q;
	    if (Q < 0.0 || std::cin.fail()) 
	    {	
	    	fail = true;
			cin.clear();
			cin.ignore();
		}
		
	}while(fail);
	
	fail = true;
	do
	{	
		fail = false;		
		std::cout << "Enter a positive integer n = " ;
	    std::cin >> N;
	    if (N < 0 || std::cin.fail()) 
	    {	
	    	fail = true;
			cin.clear();
			cin.ignore();
		}
		
	}while(fail);
	
	
	
	
	test_root(Q,N,steps);
	return 0;
	
}
