/* TODO: write a function which takes a string and returns a boolean indicating
 * whether or not the string was a palindrome.  (Palindromes are strings that
 * do not change when reversed). */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

/* your answer goes here... */

bool palindrome(const string& n){
	int start = 0;
	int end = n.length()-1;

	while (start < end){
		if(n[start] != n[end]){
			return false;

		}
		start++;
		end--;

	}

	return true;

}




int main()
{
	/* TODO: call your function, make sure it works... */
	string word = "hannah";
	cout << palindrome(word) << "\n";





	return 0;
}

// vim:foldlevel=2
