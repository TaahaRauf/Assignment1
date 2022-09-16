//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include <iomanip>
//using namespace std;
//int main() {
//	float annualrate;
//	int  numberOfPayments;
//	int loan;
//	float monthlypayments;
//	double Amountpaid;
//	float interestPaid;
//	cout << "Enter the amount of Loan ";
//	cin >> loan;
//	cout << "Enter the annual interest rate ";
//	cin >> annualrate;
//	float monthlyrate = annualrate / 12;
//	cout << "Enter the number of payments ";
//	cin >> numberOfPayments;
//	cout << "Enter the amount paid back ";
//	cin >> Amountpaid;
//	interestPaid = Amountpaid - loan;
//	monthlypayments = (((monthlyrate) * (pow(1 + monthlyrate, numberOfPayments))) / (pow(1 + monthlyrate, numberOfPayments) - 1)) * loan;
//	cout << "Loan Amount : " << setw(10) << "$ " <<  loan << endl; 
//	cout << "Monthly interest Rate : " << setw(10) << "$ " << monthlyrate << endl;
//	cout << "Number of Payments " << setw(10) << numberOfPayments << endl;
//	cout << "Monthly Payments : " << setw(10) << "$ " << monthlypayments << endl;
//	cout << "Amount Paid Back :" << setw(10) << "$ " << Amountpaid << endl;
//	cout << "Interest Paid : " << setw(10) << "$ " << interestPaid << endl;
//
//
//
//
//
//	
//	return 0;
//}