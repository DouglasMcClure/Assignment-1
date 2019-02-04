/***********************************************
* Name: Douglas McClure
* Email: mcclur36@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates area of circle
***********************************************/

#include <iostream>
#include <string>

using namespace std;

const  double PI = 3.14159;

double mile, kilometer, meter, centimeter, millimeter, radius, circumference, celsius, fahrenheit, age, year, month, day, hour, minute, second;

string first;

struct letter {
	string lines[5];
}
A = {
	"..*..",
	".*.*.",
	".***.",
	".*.*.",
	".*.*."
};

letter B = {
	".**..",
	".*.*.",
	".***.",
	".*.*.",
	".**.."
};

letter C = {
	"..***",
	".*...",
	".*...",
	".*...",
	"..***"
};

letter D = {
	".***.",
	".*..*",
	".*..*",
	".*..*",
	".***."
};

letter E = {
	".****",
	".*...",
	".****",
	".*...",
	".****"
};

letter F = {
	".****",
	".*...",
	".***.",
	".*...",
	".*..."
};

letter G = {
	"..***",
	".*...",
	".*.**",
	".*..*",
	"..***"
};

letter H = {
	".*..*",
	".*..*",
	".****",
	".*..*",
	".*..*"
};

letter I = {
	".***.",
	"..*..",
	"..*..",
	"..*..",
	".***."
};

letter J = {
	"...*.",
	"...*.",
	"...*.",
	"*..*.",
	".**.."
};

letter K = {
	"*..*.",
	"*.*..",
	"**...",
	"*.*..",
	"*..*."
};

letter L = {
	".*...",
	".*...",
	".*...",
	".*...",
	".****"
};

letter M = {
	"*...*",
	"**.**",
	"*.*.*",
	"*...*",
	"*...*"
};

letter N = {
	"*...*",
	"**..*",
	"*.*.*",
	"*...*",
	"*...*"

};

letter O = {
	".....",
	".*.*.",
	"*...*",
	".*.*.",
	"....."
};

letter P = {
	".***.",
	".*..*",
	".***.",
	".*...",
	".*..."
};

letter Q = {
	".....",
	".*.*.",
	"*...*",
	".*.*.",
	"....*"
};

letter R = {
	".***.",
	".*..*",
	".***.",
	".*.*.",
	".*..*"
};

letter S = {
	".***.",
	"*....",
	".***.",
	"....*",
	".***."
};

letter T = {
	"*****",
	"..*..",
	"..*..",
	"..*..",
	"..*.."
};

letter U = {
	"*...*",
	"*...*",
	"*...*",
	"*...*",
	".***."
};

letter V = {
	"*...*",
	"*...*",
	"*...*",
	".*.*.",
	"..*.."
};

letter W = {
	"*...*",
	"*...*",
	"*.*.*",
	"*.*.*",
	".***."
};

letter X = {
	"*...*",
	".*.*.",
	"..*..",
	".*.*.",
	"*...*"
};

letter Y = {
	"*...*",
	".*.*.",
	"..*..",
	"..*..",
	"..*.."
};

letter Z = {
	"*****",
	"...*.",
	"..*..",
	".*...",
	"*****"
};

int main()
{
	

	//Displays the purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program converts miles to kilometers" << endl;
	cout << " ******************************************\n\n";



	//Get amount of miles
	cout << "enter the amount of miles: ";
	cin >> mile;


	//Converts miles to kilometers
	kilometer = mile * 1.6;

	//Converts Everything
	meter = kilometer * 1000;
	centimeter = meter * 100;
	millimeter = meter * 1000;

	//Displays the distance 
	cout << " The distance in kilometers = " << kilometer << endl;
	cout << " The distance in meters = " << meter << endl;
	cout << " The distance in centimeters = " << centimeter << endl;
	cout << " The distance in millimeters = " << millimeter << endl;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in radius to compute the circumference of a circle" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input the radius: ";
	cin >> radius;

	//Compute Circumference to 2πr
	circumference = 2 * PI* radius;

	//Displays the circumference
	cout << " The circumference is = " << circumference << endl;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in Celsius and converts it to Fahrenheit" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input the Celsius: ";
	cin >> celsius;

	//Converts Celsius to Fahrenheit
	fahrenheit = (9 / 5) * celsius + 32;

	//Displays the Fehrenheit
	cout << " The Fahrenheit is: " << fahrenheit << endl;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes your age and tells you how old you are in months, days, hours, minutes, and seconds" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input your age: ";
	cin >> age;

	//Convert the age into months, days, hours, minutes, and seconds
	year = age * 1;
	month = year * 12;
	day = year * 365;
	hour =  day * 24;
	minute =  hour * 60;
	second =  minute * 60;

	//Displays the age in months, days, hours, minutes, and seconds
	cout << "Months: " << month <<endl;
	cout << "Days: " << day << endl;
	cout << "Hours: " << hour << endl;
	cout << "Minutes: " << minute << endl;
	cout << "Seconds: " << second << endl;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program dispays your first initial in asterisks" << endl;
	cout << " ******************************************\n\n";

	

	char firstChar;  // first character of each name

	// array of letter
	letter array[26] = { A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z };

	//Get users First Initial
	cout << "Please input your First Initial: ";
	cin >> first;

	// force case - could use lower case instead.
	firstChar = toupper(first[0]);

	cout << "Your initials are " << firstChar << "." << endl << endl;
	cin.get();

	// convert characters into their ordinals - a to z
	firstChar -= 'A';

	for (int i = 0; i < 5; i++)
		cout << array[firstChar].lines[i] << "  " << endl;

	cin.get();

	return 0;

}