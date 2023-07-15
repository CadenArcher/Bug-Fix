/*
Caden Archer
7/14/2023
Name: Githug bug fixes 
Discription: I made a clone of my prof code and fixed any errors and made it easier to know what is what by changing the names to be clear-er
*/

#include <iostream>
#include <iomanip>
using namespace std;

float Average(int Int1, int Int2, int Int3) //Function to use three inputed numbers by the user to find the average
{
	return (Int1 + Int2 + Int3) / 3;//fixed this so it adds the numbers before diving it by 3
}

int main()
{
	int IntputInt, InputInt2, InputInt3; 
	cout << "This program calculates the average of three numbers.\n";
	cout << "First number: "; cin >> IntputInt;
	cout << "Second number: "; cin >> InputInt2;
	cout << "Third number: "; cin >> InputInt3;//changed the input int to three as it was set to two messing it up

	float AverageOfThreeNumbers = Average(IntputInt, InputInt2, InputInt3); //Float to grab the average number from the function

	cout << setprecision(1) << fixed << "The average is " << AverageOfThreeNumbers << endl;

	return 0;
}