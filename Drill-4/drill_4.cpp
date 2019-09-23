#include <iostream>
#include <cmath>
#include <float.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	/* 1-3.

	int value;
	int value2;
	while(cin >> value >> value2)
	{
		if(value == value2)
			cout << "The numbers are equal." << endl;
		else
			cout << "The smaller value is: " << (value < value2 ? value : value2) << " The larger value is: " << (value > value2 ? value : value2) << endl;

	}

	 */
	 /* 5.
	 double value;
	 double value2;

	 while(cin >> value >> value2)
	 {
		 double difference = abs(value - value2);
		 cout << "The smaller value is: " << (value < value2 ? value : value2) << " The larger value is: " << (value > value2 ? value : value2) << endl;
		 if(difference < (1.0 / 100))
			 cout << "The numbers are almost equal. " << endl;

	 }
	 return 0;
	  */
	  /* 6.
	   double input;
	   double smallest = DBL_MAX;
	   double largest = DBL_MIN;

	   string unit;
	   while(cin >> input)
	   {
		   cout << "Enter a unit ( cm, in, ft, m )" << endl;
		   cin >> unit;
		   if(unit)

		   cout << "Value entered: " << input;
		   if(input < smallest)
		   {
		   cout << ", smallest so far" << endl;
		   smallest = input;
		   }
		   if( input > largest)
		   {
		   cout << ", largest so far" << endl;
		   largest = input;
		   }
		   else
		   cout << "" << endl;
	   }

	   */

	string unit;

	double input;
	double sum = 0.0; // meters
	double smallest = DBL_MAX;
	double largest = DBL_MIN;

	vector<double> values;

	while (!cin.fail())
	{
		cout << "Enter a number" << endl;
		cin >> input;
		cout << "Enter a unit ( cm, in, ft, m )" << endl;
		cin >> unit;

		double inMeters;

		if (unit == "cm")
		{
			inMeters = (input / 100.0);
			sum += inMeters;
		}
		else if (unit == "in")
		{
			inMeters = (input / 100.0) * 2.54;
			sum += inMeters;
		}
		else if (unit == "ft")
		{
			inMeters = (input / 100.0) * 2.54 * 12;
			sum += inMeters;
		}
		else if (unit == "m")
		{
			inMeters = input;
			sum += inMeters;
		}
		else
		{
			cout << "Invalid unit" << endl;
			unit = "";
			continue;
		}

		if (input < smallest)
		{
			smallest = input;
		}
		if (input > largest)
		{
			largest = input;
		}

		values.push_back(inMeters);

	}
	cout << "Smallest value: " << smallest << "\nLargest value: " << largest << "\nNumber of values: " << values.size() << "\nSum: " << sum << endl;

	sort(values.begin(), values.end());

	cout << "Sorted values: " << endl;

	for (int i = 0; i < values.size(); i++)
	{
		cout << values.at(i);
		if (i != values.size() - 1)
			cout << " ";
	}
	cout << "\n";
}
