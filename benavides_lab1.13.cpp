// This program calculates the bimonthly and biweekly pay.
// Mario Benavides
// Lab 1.13 Completed


#include <iostream>
using namespace std;


int main()
{
	double salary, bimonthly, biweekly;
	salary = 39000;
	
	cout << "Annual gross salary: \t\t   $39000  " << endl; 		//Display the salary.
	
	bimonthly = salary / 24; 						//calculate the bi-monthly.
	
	biweekly = salary / 26; 						//calculate the bi-weekly.
	
	cout << "Gross pay per bi-monthly paycheck: $"  << bimonthly << endl;	 //Display the bi-monthly paycheck.
	
	cout << "Gross pay per bi-weekly paycheck:  $"  << biweekly << endl;	 //Display the bi-weekly paycheck.
	
	
	return 0;
}
