// Prob47_Distinct_primes_factors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	unsigned long long int n, temp, startsat, n1 = 0, n2 = 0, n3 = 0, n4 = 0;
	int primectr, i, ctr;
	for (n = 1; n <= 1000000; n++)
	{
		primectr = 0;
		temp = n;
		while (temp > 1)
		{
			i = 2;
			while (temp % i > 0) i++;
			primectr++;
			temp = temp / i;
			while (temp % i == 0)
				temp = temp / i;
		}
		if (primectr == 4)
		{
			n1 = n2; n2 = n3; n3 = n4; n4 = n;
			if (n1 + 1 == n2 && n2 + 1 == n3 && n3 + 1 == n4)
			{
				printf("\n%lld %lld %lld %lld", n1, n2, n3, n4);
			}

		}
	}
	printf("\nHello World!");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
