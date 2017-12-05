/*Zachary Stockman COP2000 6:35-9:00 08-30-17
Description: Homework 1A
This Program will have and input of how many pies you want then outputs what ingredients is needed.
*/

#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
	//recipe for 6 pies so we can use this to then calculate how much 1 pie is equal too.
	const float flour = 15.0;//cups
	const float sugar = 8.0;//tablespoons
	const float salt = 3.0;//tablespoons
	const float butter = 5.25;//cups
	const float eggs = 6.0;//large eggs

	//below is variable holders
	float flour_needed;
	float sugar_needed;
	float salt_needed;
	float butter_needed;
	float eggs_needed;

	cout << "How many pies do you wish to make?" << '\n';

	float pie_amount;//setting variable holder for input
	cin >> pie_amount;//input for pies

	cout << '\n' <<//kinda self explanitory here but its basically text below
		"Malachi's Pie Shop - Pie Crust Recipe" << '\n' <<
		"-------------------------------------" << '\n';

	
	float flour1, sugar1, salt1, butter1, eggs1;//creating placeholder
	//below i am calculating the recipe needed for one pie
	flour1 = flour / 6,
		sugar1 = sugar / 6,
		salt1 = salt / 6,
		butter1 = butter / 6,
		eggs1 = eggs / 6;

	//calculations for however amount of pies the user wishes to create
	flour_needed = pie_amount * flour1,
	sugar_needed = pie_amount * sugar1,
	salt_needed = pie_amount * salt1,
	butter_needed = pie_amount * butter1,
	eggs_needed = pie_amount * eggs1;

	//output
	cout << "To make " << pie_amount << " pies you will need..." << '\n';
	cout << fixed << setprecision(2); //creates the double zero place holder after the numbers on the outputted recipe
	cout << '\n' <<//creates blank line
		//below is the output of the recipe
		"Flour"<< '\t' << flour_needed << setw(5) << left << setw(11) << " cups" << '\n' <<
		"Sugar" << '\t' << sugar_needed << setw(5) << left << setw(11) << " tablespoons" << '\n' <<
		"Salt" << '\t' << salt_needed << setw(5) << left << setw(11) << " tablespoons" << '\n' <<
		"Butter" << '\t' << butter_needed << setw(5) << left << setw(11) << " cups" << '\n' <<
		"Eggs" << '\t' << eggs_needed << setw(5) << left << setw(11) << " large eggs" << '\n' << '\n';
	system("PAUSE");// adds the press any key to contine (ends the program)

	return 0;
}