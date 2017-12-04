#include <iostream>
#include <string>
#include <random>
#include "statistics.hh"
#include <algorithm>
#include <cmath>

using std::cout;
using std::cin;
using std::vector;
using std::endl;

void showVect(vector<double> v)
{
	for (int i = 0; i < v.size();i++)
	{
	cout << i << " : " << v[i] << endl;
	}
}

double mean(const vector<double>& v)
{
	double meanVect = 0.0;
	for (int i = 0; i < v.size();i++)
	{
		meanVect += v[i];
	}
	meanVect /= v.size();
	cout << "Mean vector value = " << meanVect << endl;
	return meanVect;
}


double median(const vector<double>&v)
{	
	vector <double> vect = v;
	int mindex;
	for (int count = 0; count < vect.size(); count++)
	{
		double min = 2^31;
		for (int i = count; i < vect.size();i++)
		{
			if (min > vect[i])
			{
				min = vect[i];
				mindex = i;
			}	
		}
		vect[mindex] = vect[count];
		vect[count] = min;
	}
	double medianVect;
	
	if (vect.size() % 2)
		medianVect = vect[(vect.size() - 1)*0.5];
	else
		medianVect = 0.5* (vect[0.5*vect.size()-1] + vect[0.5*vect.size()]);
	
	cout << "Median vector value = " << medianVect << endl;
	return medianVect;
}

double moment(const vector<double>& v, int k)
{
	double vectMom = 0.0;
	for (int i = 0; i < v.size();i++)
	{
		vectMom += pow(v[i],k);
	}
	vectMom /= v.size();
	cout << k << " th statistical moment = " << vectMom << endl;
}

//double standard_deviation(const vector<double>& v)


