/* TODO: write your own version of the "find" function, which takes two
 * strings, and searches for the second one in the first.  If a match is
 * found, you should return the index where the match begins in the first
 * string.  If no match is found, you can return the index -1 (which is
 * also known as string::npos). */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

/* your answer goes here... */

int find(const string& s1, const string& s2){

	size_t i, j;

	for( i = 0; i < s1.length() - s2.length(); i++){

		for( j = 0; j< s2.length(); j++){

			if(s1[j+i] != s2[j]){
				break;
			}
		}
			if (j == s2.length()){
				return i;
		}

	}
	return -1;

}





int main()
{
	/* TODO: call your function, make sure it works... */
	string big = "Hello World";
	string sub1 = "Wor";
	string sub2 = "ell";
	string sub3 = "wors";

	cout << find(big,sub1) << "\n";
	cout << find(big,sub2) << "\n";
	cout << find(big,sub3) << "\n";


	return 0;
}

// vim:foldlevel=2
