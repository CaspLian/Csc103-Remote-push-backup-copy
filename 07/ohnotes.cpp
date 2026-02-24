#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

#if 0
int f(int x, double y, string s)
{
	/* string s can be communicated to this function from some other
	 * part of the program. */
	string s1;
	/* string s1 only makes sense in this function, and there is no
	 * way for someone else (some other part of the program) to tell
	 * us what it should be. */
	return /* something */;
}
#endif
/* datatype of f(x,y,s) will be int. */

/* think of void functions like "actions" rather than functions.
 * Some people call them "subroutines", or "proper procedures".
 * Here is one that prints a message n times. */
void printmessage(string s, int n)
{
	for (int i = 0; i < n; i++) {
		cout << s << "\n";
	}
}

void writefile(string fname, string contents)
{
	FILE* f = fopen(fname.c_str(),"wb");
	fwrite(contents.c_str(),contents.length(),1,f);
	fclose(f);
}

/* NOTE: strings might take a large amount of memory.
 * If we give them to a function like this, then we have
 * to make a COPY of the whole string every time we use
 * this function: */
int f(string s)
{
	/* do something with s... */
	s = "asdfasdf"; // won't affect original s.
	return 0;
}

/* this version will NOT make a copy, and thus saves
 * memory. */
int ff(string& s)
{
	/* do something with s... */
	s = "asdfasdfasdf";
	return 0;
}

/* like the above, but makes string s UNCHANGABLE from
 * this function: */
int fff(const string& s)
{
	/* do something with s... */
	return 0;
}
/* takeaway: you can use the combo of const and "&" to
 * get the normal behavior (working with copies), but
 * without the overhead of actually making copies.
 * That is, function fff is similar to f in *behavior*
 * but it does not require you to make a copy of s
 * each time you call fff(s). */

int main()
{
	string s = "asdfasdf";
	#if 0
	f(0,0.0,s);
	f(2,7.0,";lkljk;lj;k;kj");
	#endif
	#if 0
	int r = printmessage(s,10);
	// cout << printmessage(s,10);
	#endif
	printmessage(s,10); /* "go do printmessage(...).  I don't care about the result" */
	printmessage("hello",5);
	/* more useful: */
	writefile("testfile","asdfasdfasdfasdfasdfasdf");
	s = /* very very long string... */ "asdfasfasdfasdfasdf";
	f(s);  /* this requires making a copy of the whole string! */
	ff(s); /* this does not. */
	f("asdf");  /* OK */
	// ff("asdf"); /* NOT OK */
	// "asdf" = "asdfasdfasdf";
	fff("asdf"); /* again OK */
	return 0;
}
