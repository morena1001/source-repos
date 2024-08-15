//******************************************************************************
// Team # 05 CSCI 1370 Fall 2021 Homework # 2
// Josue Flores
// Jasmine Olivarez
// Using your own words, write here a description of what the program does.
//
//******************************************************************************

#include <iostream>				// to use cin and cout
#include <typeinfo>				// to be able to use operator typeid

// Include here the libraries that your program needs to compile
#include <cmath>
#include <iomanip>
#include <fstream>

using  namespace  std;

// Ignore this; it's a little function used for making tests
inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file;
	cerr << ", line " << line << "." << endl << endl;
}
// This goes along with the above function...don't worry about it
#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

// Insert here the prototypes of the functions
void getPoint(ifstream& iFile, double& X, double& Y);
double calcLength(double& x1, double& x2, double& y1, double& y2);
double semiPerimeter(double S1, double S2, double S3);
double calcArea(double S1, double S2, double S3);
void printDistance(ofstream& outFile, double X1, double X2, double Y1, double Y2, double S);
double square(double sq);
double round_off(double r, int d);

int main()
{
	//Declare input and output files
	ifstream inFile;
	ofstream outFile;
	//Open input and output files
	inFile.open("inputhw2.txt");
	outFile.open("outputhw2.txt");
	//Check if both files are open
	if (!static_cast<bool>(inFile))
	{
		cout << "Input file was not opened!" << endl;
		return 1;
	}

	if (!static_cast<bool>(outFile))
	{
		cout << "Output file was not opened!" << endl;
		return 1;
	}
	//declare variables S1, S2, S3, X1, X2, X3, Y1, Y2, and Y3 that hold double precision real numbers
	double S1, S2, S3, X1, X2, X3, Y1, Y2, Y3, Area;
	//Call getPoint() 3 times to get coordiantes from input file and store them in corresponding variables
	getPoint(inFile, X1, Y1);
	getPoint(inFile, X2, Y2);
	getPoint(inFile, X3, Y3);
	//Call calcLength() 3 times to calculate distance between the coordiantes
	S1 = calcLength(X1, X2, Y1, Y2);
	S2 = calcLength(X2, X3, Y2, Y3);
	S3 = calcLength(X1, X3, Y1, Y3);
	//Call printDistance() 3 times to send distance between points to output file
	printDistance(outFile, X1, X2, Y1, Y2, S1);
	printDistance(outFile, X2, X3, Y2, Y3, S2);
	printDistance(outFile, X1, X3, Y1, Y3, S1);
	//Call calcArea() to calculate the area of the three points
	Area = calcArea(S1, S2, S3);
	//Format the output so real numbers are printed in fixed format
	outFile << fixed << setprecision(2);
	//Output area of triangle to the output file
	outFile << "The area of this triangle is: " << Area;
	//Close input and output files
	inFile.close();
	outFile.close();


	// Do NOT remove or modify the following statements

	// To pause the execution of the program
	cout << "Press Enter to continue ...";
	cin.get();

	cout << endl << "Testing your solution" << endl << endl;

	test(fabs(round_off(calcLength(1.0, 1.2, 6.0, 6.1), 2) - 7.00) < .001);			// Incorrect calculation of length
	test(fabs(round_off(calcLength(6.0, 6.1, 3.2, 6.5), 2) - 2.83) < .001);			// Incorrect calculation of length
	test(fabs(round_off(calcLength(1.0, 1.2, 3.2, 6.5), 2) - 5.74) < .001);			// Incorrect calculation of length
	test(fabs(calcArea(calcLength(1.0, 1.2, 6.0, 6.1), calcLength(6.0, 6.1, 3.2, 6.5), calcLength(1.0, 1.2, 3.2, 6.5)) - 7.86) < .001);			// Incorrect calculation of area

	test(fabs(round_off(calcLength(1.2, 1.2, 7.6, 4.3), 2) - 7.11) < .001);			// Incorrect calculation of length
	test(fabs(round_off(calcLength(7.6, 4.3, 9.2, 3.4), 2) - 1.84) < .001);			// Incorrect calculation of length
	test(fabs(round_off(calcLength(1.2, 1.2, 9.2, 3.4), 2) - 8.30) < .001);			// Incorrect calculation of length
	test(fabs(calcArea(calcLength(1.2, 1.2, 7.6, 4.3), calcLength(7.6, 4.3, 9.2, 3.4), calcLength(1.2, 1.2, 9.2, 3.4)) - 5.36) < .001);			// Incorrect calculation of area

	test(fabs(round_off(calcLength(1.0, 1.0, 5.0, 5.0), 2) - 5.66) < .001);			// Incorrect calculation of length
	test(fabs(round_off(calcLength(5.0, 5.0, 9.0, 9.0), 2) - 5.66) < .001);			// Incorrect calculation of length
	test(fabs(round_off(calcLength(1.0, 1.0, 9.0, 9.0), 2) - 11.31) < .001);			// Incorrect calculation of length
	test(fabs(calcArea(calcLength(1.0, 1.0, 5.0, 5.0), calcLength(5.0, 5.0, 9.0, 9.0), calcLength(1.0, 1.0, 9.0, 9.0)) - 0.00) < .001);			// Incorrect calculation of area

	return 0;
}

//************************  Function definitions  *************************
// Read the handout carefully for detailed description of the functions that you have to implement

// Get the input file and read from the file the coordinates (x, y) corresponding to a single vertex of the triangle and return both of them rounded to a single decimal place to the caller.
void getPoint(ifstream& iFile, double& X, double& Y)
{
	iFile >> X >> Y;
	X = round_off(X, 1);
	Y = round_off(Y, 1);
}


// Recieve the coordinates of two points and return the distance between them rounded to ten decimal places.
double calcLength(double& X1, double& X2, double& Y1, double& Y2)
{
	double s = sqrt(square(X1 - X2) + square(Y1 + Y2));
	s = round_off(s, 10);
	return s;
}


// Receive three lengths and return the value of the semi perimeter rounded to ten decimal places. 
double semiPerimeter(double S1, double S2, double S3)
{
	double sP = (1. / 2.) * (S1 + S2 + S3);
	sP = round_off(sP, 10);
	return sP;
}


//Receives three lengths and returns the area of the triangle rounded to two decimal places.
double calcArea(double S1, double S2, double S3)
{
	double sP = semiPerimeter(S1, S2, S3);
	double Area = sqrt((sP * (sP - S1) * (sP - S2) * (sP - S3)));
}


//Receive the coordinates of two points and the distance between them and prints it out to the output file
void printDistance(ofstream& outFile, double X1, double X2, double Y1, double Y2, double S)
{
	outFile << "The distance between (" << X1 << "," << Y1 << ") and (" << X2 << "," << Y2 << ") is " << S;
}


// Calculates the square of the value received
double square(double sq)
{
	return sq * sq;
}


// Round the value received in the first parameter to the number of digits received in the second parameter
double round_off(double r, int d)
{
	d = static_cast<double>(d);
	return round(r * pow(10, d)) / pow(10, d);
}