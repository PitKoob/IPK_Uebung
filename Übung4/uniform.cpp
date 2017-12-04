#include <vector> // vector in Ihrem Programm verfügbar machen
#include <iostream>
#include "io.cc"

using std::cout;
using std::cin;
using std::vector;
using std::endl;

void showvect(vector<double> v)
{
	for (int i = 0; i < v.size();i++)
	{
	cout << i << " : " << v[i] << endl;
	}
}

int main()
{
	double min,max;
	int seed,N;
	cout << "Enter the lenght of the vector : ";
	cin >> N;
	cout << "Enter a seed integer : ";
	cin >> seed;
	cout << "Enter minimum value: ";
	cin >> min;
	cout << "Enter maximum value : ";
	cin >> max;
	vector<double> vect;
	vect = uniform_distribution(seed,N,min,max)	;
	
	showvect(vect);
	mean(vect);
	median(vect);
	moment(vect, 2);
	return 0;
}
