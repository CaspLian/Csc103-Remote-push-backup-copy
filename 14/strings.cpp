// #define _GLIBCXX_DEBUG 1
/* above will enable bounds checks if you want them */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "abc";
	string s2 = "def";
	cout << s1+s2 << "\n";
	cout << s2+s1 << "\n";
	string s = "hello class.";
	cout << s.find("llo") << "\n";
	cout << s.find("asdfasdf") << "\n";
	cout << "abc" + s1 << "\n";
	cout << s1 + "abc" << "\n";
	/* NOTE: "abc" is not a C++ string!  You can't add them
	 * together, for example: */
	// cout << "abc" + "def" << "\n";
}

// vim:foldlevel=3
