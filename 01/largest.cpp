/* NOTE: this is not yet finished!  We'll make it actually work Thursday. */

/* program to figure out the largest number */
/* NOTE: the slash+star starts a COMMENT.  star+slash ends it.
 * Comments are ignored by the program. */

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

while (/* we're not yet out of numbers */ true) {
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
		blue = green;
	}
}
