/* program to find the largest integer given */
#include <iostream>
/* NOTE: #include just copy pastes file contents into our file! */
using namespace std;
/* NOTE: "cin" actually has a last name as well: "std".  So the "full name"
 * of cin would be "std::cin".  The "using namespace std;" line lets us call
 * everything with last name "std" by first name only. */
/* Where does the program actually begin??  We have to call out the
 * beginning explicitly.  (In general, programs might be spread across
 * many files).  Here's how: we define "main":  */
/* It is safe to not understand the syntax for the moment -- in 2 weeks it
 * will make sense. */
int main()
{
	/* THIS is the first thing our program will do. */
	/* how to we allocate the pieces of paper? */
	int blue; /* this gives space to write an integer. */
	/* NOTE: the "int" is the DATATYPE.  The "blue" is the name.
	 * The names can be (almost) whatever you want. */
	int green; /* another space to write an integer. */
	/* now we've got our two pieces of paper. */

	/* how to listen for numbers?  We'll use "cin", which actually
	 * comes from a library.  More on that later. */
	cin >> blue; /* listen, write what you hear to blue. */
	/* this completes step 1.  On to the rest... */

	while (true) {
		/* step 2: listen and write on green */
		cin >> green; /* listen, write what you hear to green. */
		/* NOTE: green is sort of implicitly "erased" when you do this. */
		/* let's check and make sure that we actually heard a number: */
		if (!cin.good()) {
			break; /* this will end the loop */
		}
		/* step 3: compare green and blue; if green is larger, erase
		 * what's on blue and write what's on green in its place. */
		if (green > blue) {
			/* erase blue; copy green to blue */
			blue = green; /* this is an "assignment statement" */
		}
	}
	/* once the "break" happens, we'll continue here... report the answer: */
	cout << blue;
	/* where "cin" is listen, "cout" is speak. */
}
