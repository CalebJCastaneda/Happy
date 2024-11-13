#include <iostream>
#include <string>
using namespace std;
int main()
{
	//Declare and initialize variables
	int age = 0;
	int ft = 0;
	double in = 0;
	double weight = 0;
	double inches = 0;
	double bmi = 0;
	string name = " ";
	string gender = " ";
	string result = " ";

	//get user input 
	cout << "Enter your name: ";
	cin >> name;
	cout << endl;
	cout << "Enter your age: ";
	cin >> age;
	cout << endl;
	cout << "Enter your gender: ";
	cin >> gender;
	cout << endl;
	cout << "Enter your height in ft: ";
	cin >> ft;
	cout << endl;
	cout << "Enter your height in inches: ";
	cin >> in;
	cout << endl;
	cout << "Enter your weight(lbs): ";
	cin >> weight;
	cout << endl;
	

	//Convert height in ft and height in inches to inches
	inches = (ft) * 12 + in;
	
	//Calculate BMI
	bmi = 703 * weight / pow(inches, 2);

	//If / Else
	if (bmi < 16)
	{
		result = "Severe Thinness";
		
	}
	else if (bmi >= 16 && bmi < 17)
	{
		result = "Moderate Thinness";
	}
	else if (bmi >= 17 && bmi < 18.5)
	{
		result = "Mild Thinness";
	}
	else if (bmi >= 18.5 && bmi < 25)
	{
		result = "Normal";
	}
	else if (bmi >= 25 && bmi < 30)
	{
		result = "Overweight";
	}
	else if (bmi >= 30 && bmi < 35)
	{
		result = "Obese Class 1";
	}
	else if (bmi >= 35 && bmi < 40)
	{
		result = "Obese Class 2";
	}
	else if (bmi < 40)
	{
		result = "Obese Class 3";
	}

	
	cout << "Hello " << name << " you are a " << gender << ". You are " << age << " years old. Currently " << ft << "ft " << in << "in, weighing in at " << weight << " pounds. Your BMI is " << bmi << " which is " << result << "." << endl;






	return 0;
}