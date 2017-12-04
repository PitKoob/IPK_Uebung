#include <vector> // vector in Ihrem Programm verfügbar machen
#include <iostream>
#include <cmath>


void reverse3(std::vector<int> &v)
{
	for (int i = 0; i < v.size()/2;i++)
	{
		std::swap(v[i],v[v.size()-1-i]);
	}
}

void reverse2(std::vector<int> &v)
{	
	std::vector<int> v_out(v.size());
	for (int i = v.size()-1; i>=0; --i)
		v_out[i] = v[v.size()-1-i];
	for (int i = 0; i < v.size();i++)
		v[i] = v_out[i];
}
std::vector<int> reverse1(std::vector<int> v)
{	
	std::vector<int> v_out(v.size());
	for (int i = v.size()-1; i>=0; --i)
		v_out[i] = v[v.size()-1-i];
		
	return v_out;		
	
}


std::vector<double> round(std::vector<double> v)
{
	std::vector<double> v_out(v.size());
	for (int i = 0; i < v.size();i++)
	{
		v_out[i]=round(v[i]);
	}
	return v_out;
}

void showvect(std::vector<int> v)
{
	for (int i = 0; i < v.size();i++)
	{
	std::cout << i << " : " << v[i] << std::endl;
	}
}

void minmax(std::vector<int> v)
{
	int max, min;
	min = 2^31;
	max = 0;
	
	for (int i = 0; i < v.size();i++)
	{
		if (max < v[i])
			max = v[i];
		else if (min > v[i])
			min = v[i];
	}
	
	std::cout << "Biggest integer in vector: " << max << std::endl;
	std::cout << "Smallest integer in vector: " << min << std::endl;
}


int main()
{
	std::vector<int> victor = {{ 3, -4, 7, 103, 102, 2 }};
	showvect(victor);
	std::vector<double>vectdouble = {{ 0.1, 3.443, 6.643 }};
	// minmax(victor);
	reverse3(victor);
	showvect(victor);
	vectdouble = round(vectdouble);
	
	
	return 0;
}
