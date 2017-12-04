#include <vector> // vector in Ihrem Programm verfügbar machen
#include <iostream>
#include "io.hh"
#include "statistics.hh"

using std::cout;
using std::cin;
using std::vector;
using std::endl;


int main()
{
double avg, StDev, avgCalc;
int seed,N;
cout << "Enter the lenght of the vector : ";
cin >> N;
cout << "Enter a seed integer : ";
cin >> seed;
cout << "Enter average value: ";
cin >> avg;
cout << "Enter standard deviation : ";
cin >> StDev;
vector<double> vect;
vect = normal_distribution(seed,N,avg,StDev);

showVect(vect);	
mean(vect);
median(vect);
moment(vect, 2);

return 0;
}
