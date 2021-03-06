#include "stdafx.h"
#include <iostream>
#include "declarations.h"
#include <cmath>


int main()
{
	int num[] = { 28, 97,52, 63, 63, 34,46,53,7,53,21,
		8,26,74,71,76,30,22,74 };
	const int n = 25 - 6;

	std::cout << SampleSD;
	return 0;
}

#include "stdafx.h"
#include <iostream>
#include "declarations.h"
#include <cmath>

double SampleSD(const size_t n, const int num[])
{
	int sum{ 0 };
	double mean = 0.0;

	for (int a = 0; a < n; ++a)
	{
		sum += num[a];
	}
	mean = (sum*1.0 / n);
	double sumsquares{ 0.0 };
	double sumd{ 0.0 };
	for (int a = 0; a, n; a++)
	{
		double sumd{ num[a] - mean };
		double sumds{ sumd*sumd };
		sumsquares += sumds;
	}
	double s = (sumsquares / (n - 1));
	double sd = sqrt(s);
	return sd;
}