#include <iostream>
using namespace std;
#include <string>
#include "RangeArray.h"
#include "Array.h"
#include<stdio.h>
RangeArray::RangeArray() {}
RangeArray::RangeArray(int num1, int num2)
{
	if (num1 < num2)
	{
		high = num2;
		low = num1;
	}
	else if (num1> num2)
	{
		high = num1;
		low = num2;
	}
	
	len = high - low + 1;
	data = new int[len];
	
}
RangeArray::~RangeArray()
{
	delete[] data;
}
int RangeArray::baseValue()
{
	return low;
}
int RangeArray::endValue()
{
	return high;
}
int& RangeArray::operator[](int i)
{
	static int tmp;

	if (i >=  low && i <= high)
		return data[i];
	else;
	{
		cout << "Array bound error!" << endl;
		return tmp;
	}
		
}
int RangeArray::operator[](int i) const
{
	if (i < low || i >= high)
	{
		cout << "Array bound error!" << endl;
	}

	else if (i >= low && i < high)
	{
		return data[i];
	}
	
		return 0;
}

void RangeArray::print()
{
	int q;
	printf("[");
	for (q = low; q <= high; q++)
	{
		printf(" ");
		printf("%d", data[q]);
	}
	printf(" ]\n");
}


