//write include statements
#include "dna.h"
#include <iostream>
#include <string>



//write using statements

using std::cin; using std::cout; using std::string;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long  as 
user enters a y or Y.
*/
int main() 
{


	int menu_Num;
	char repeat = 'Y';

	string dna;

	do
	{

		cout<<"\nEnter 1 for GC Content or 2 for DNA Complement: ";

		bool verify_value_parameter = false;

		while (verify_value_parameter == false)
		{
			cin>> menu_Num;
			if (menu_Num == 1 || menu_Num == 2)
			{
				verify_value_parameter = true;

				if (menu_Num == 1)
				{
					cout << " \nEnter the DNA string: ";
					cin >> dna;
					cout << "\nThe GC content of " << dna << " is: "<< get_gc_content(dna) <<'\n';
				}
				else 
				{
					cout << " \nEnter the DNA string: ";
					cin >> dna;
					cout << "\nThe DNA complement of " << dna << " is: "<< get_dna_complement(dna) <<'\n';

				}
			}
			else
			{
				cout<<"\n\n(ERROR) I'm afraid the number you entered does not match anything on the menu, please try aagin: ";
				
			}
		}


		cout<<"\n\nEnter 'Y' to repeat this program, otherwise enter anything else to stop: ";
		cin >> repeat;

	

	}while (repeat == 'Y' || repeat == 'y');
	
	return 0;
}