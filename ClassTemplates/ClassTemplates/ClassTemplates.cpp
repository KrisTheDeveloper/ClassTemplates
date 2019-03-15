// ClassTemplates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
#include <string>

using namespace std;

/*Write the class AddElements here*/
template <typename T>
class AddElements
{
	T a;
public:
	AddElements(T element)
	{
		a = element;
	}


	T add(T element2);
	T concatenate(T element2);
};

template <typename T>
T AddElements<T>::add(T element2)
{
	return (a + element2);
};

template <typename T>
T AddElements<T>::concatenate(T element2)
{
	return(a + element2);
};

int main() {
	int n, i;
	cin >> n;
	for (i = 0; i < n; i++) {
		string type;
		cin >> type;
		if (type == "float") {
			double element1, element2;
			cin >> element1 >> element2;
			AddElements<double> myfloat(element1);
			cout << myfloat.add(element2) << endl;
		}
		else if (type == "int") {
			int element1, element2;
			cin >> element1 >> element2;
			AddElements<int> myint(element1);
			cout << myint.add(element2) << endl;
		}
		else if (type == "string") {
			string element1, element2;
			cin >> element1 >> element2;
			AddElements<string> mystring(element1);
			cout << mystring.concatenate(element2) << endl;
		}
	}
	return 0;
}
