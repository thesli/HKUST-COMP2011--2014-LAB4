
/**
 * print_dec_in_hex.cpp
 */

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <vector>
#include <iomanip>

using namespace std;

/**
*function@ Given decimal number, calculate bit k of its corresponding hexadecimal
*function@ return value 0-15
*/
int bit_k(int num, int k){		
	return (num % ((int)pow(16,k+1))/pow(16,k));
}

/**
*function@ Given 0 to 15, print 0 - 9 and A - F accordingly, e.g. print_hex_bit(13) prints D.
*/
void print_hex_bit(int bit){
	cout << setfill('0') << setw(8) << hex << uppercase << bit;
}

/**
*function@ Given decimal number, print its corresponding hexadecimal
*/
void print_dec_in_hex(int num){
	cout << setfill('0') << setw(8) << hex << uppercase << num;
}

/**
*function@ update the decimal value by adding a random number in range 1 to 128
*/
void update_value(int &num){
	num = rand()%128 + 1;
}

/**
*function@ main program
*/
int main(){			
	int decimal;
	int guess;

	srand(time(0));

	int option=0;
	cout<<"----------Hexadecimal Game-----------------"<<endl;
	do{
		cout<<"Please input a decimal number: " << endl;
		cin>>decimal;

		cout<<"The corresponding hexadecimal number is: ";
		print_dec_in_hex(decimal);
		cout<<endl;

		cout << "Now the hexadecimal number is increased by an amount of 1-128." << endl;
		cout << "Can you guess the decimal value of the hexadecimal number below? " << endl;
		update_value(decimal);
		print_dec_in_hex(decimal);

		cin >> guess;
		cout << endl;

		if (guess == decimal)
			cout << "Correct!" << endl;
		else
			cout << "Wrong!" << endl;

		cout<<"----------Continue playing or quit?-----------"<<endl;
		cout<<"0--quit"<<endl;
		cout<<"1--continue"<<endl;
		cin>>option;
	}while(option);
	return 0;
}


