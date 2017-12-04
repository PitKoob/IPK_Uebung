#ifndef STATISTICS_HH
#define STATISTICS_HH

#include <vector>

using std::cout;
using std::cin;
using std::vector;
using std::endl;

void showVect(vector<double> v);


double mean(const vector<double>& v);


double median(const vector<double>& v);


double moment(const vector<double>& v, int k);


double standard_deviation(const vector<double>& v);

#endif
