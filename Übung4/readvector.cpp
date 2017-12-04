#include <vector> // vector in Ihrem Programm verfügbar machen
#include <iostream>
#include <cmath>
#include "io.cc"
#include "statistics.cc"

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
vector<double> vect;
vect = read_vector();
	showvect(vect);
	mean(vect);
	median(vect);
	moment(vect, 2);
	return 0;
}
