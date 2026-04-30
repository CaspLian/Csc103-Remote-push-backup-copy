/* TODO: Write a function that takes a string parameter, and returns a boolean
 * value indicating whether or not *all* vowels (a,e,i,o,u) are present
 * somewhere in the string.  For example, if the input is "hello world", the
 * return value should be false, and on input "programming is super fun!" the
 * return value should be true.
 * NOTE: to simplify things, you can assume the input string is all lower case.
 * */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

/* your answer goes here... */

bool vowels(const string& n){
	int volcount = 0;
	string vowel = "aeiou";

	for(size_t i = 0; i < 5; i ++){
		for (size_t j =0; j < n.length(); j++){
			if(vowel[i] == n[j]){
				volcount++;
				break;
			}
		}
	}
	if(volcount == 5) return true;


	return false;


}



int main()
{
	/* TODO: call your function, make sure it works... */


	string word = "programming is super fun";
	cout << vowels(word) << "\n";



	return 0;
}

// vim:foldlevel=2
