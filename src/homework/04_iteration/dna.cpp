#include "dna.h" 
#include <string>
#include <iostream>
using std::string; using std:: cout;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string dna)
{

    double dna_strLength = dna.size();

	int GC_total = 0;

	for(int i=0; i < dna_strLength; i++)
	{
		if(dna[i] == 'C' || dna[i] == 'G')
		{
			GC_total++;

		}


	}


	double calc_GC_Total = GC_total;

    double GC_content = calc_GC_Total / dna_strLength;

    
    return GC_content;
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
{

	int j = dna.length() - 1;

	char temp;

	for (int i = 0; i < j; i++, j--)
	{
		temp = dna[i];
		dna[i] = dna [j];
		dna[j] = temp;

	}    
    return dna;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna)
{
	string dna_complement = get_reverse_string(dna);


	for(int i=0; i < dna_complement.size(); i++)
	{
		switch (dna_complement[i]){
			case ('A'):
			dna_complement[i] = 'T';
			break;
		
			case ('T'):
			dna_complement[i] = 'A';
			break;

			case ('C'):
			dna_complement[i] = 'G';
			break;	

			case ('G'):
			dna_complement[i] = 'C';
			break;

			default:
			cout << "invalid";
		}	
	}

    return dna_complement;
}