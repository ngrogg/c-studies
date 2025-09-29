= C Programming: Absolute Beginners Guide =

== Chapter 3: Comments == <br>
Single line comment <br>
`// Comment` <br>

Comment block  <br>
`/*` <br>
`    Comment` <br>
`*/` <br>

== Chapter 4: Printing to screen == <br>
printf form <br>
`printf("string", data);` <br>

Not all statements have data <br>
`printf("simple string");` <br>

Is totally valid <br>

Escape sequences <br>
* `\n`, newline
* `\a`, alarm (computer bell)
* `\b`, backspace
* `\t`, tab
* `\\`, backslash
* `\'`, single quote
* `\"`, double quote

Conversion characteres (data for printf) <br>
* `%d`, integer
* `%f`, Foating-point
* `%c`, Character
* `%s`, String

== Chapter 5: Variables ==


Common C variable types <br>
* `char`, Holds character data such as 'x' and '^'
* `int`, Holds integers such as 1, or -2
* `float`, Holds floating point data such as 3.14 or 69.420
* `double`, Holds very large or small floating point values

Variable names shouldn't begin with numbers or underscores and cannot contain spaces <br>
Ex. <br>
* `int _myVariable;`
* `char 90Var;`

== Chapter 6: Strings, chars and line terminators == <br>
String terminator other names: <br>
* Null zero
* Binary zero
* String terminator
* ASCII 0
* \0

Character Array, list of characters: <br>
`char month[10];`

Must include `\0` as last character. <br>
Ex. <br>
`month[0] = 'M';` <br>
`month[1] = 'a';` <br>
`month[2] = 'r';` <br>
`month[3] = 'c';` <br>
`month[4] = 'h';` <br>
`month[5] = '\0';` <br>

Use `strcpy()` to copy new string to array: <br>
`srcpy(month, "April");` <br>

== Chapter 7: Importing libraries and headers == <br>
Preprocessor directives. <br>
Always begin with `#` <br>

Common preprocessors: <br>
* `#include`
* `#define`

Can include files such as `#include "myFile.txt"` or a header file such as `#include <stdio.h>`.

Define can include variables such as `#define PI 3.14159`

== Chapter 8: Reading input == <br>
`scanf()` gets user input.

Format: <br>
`scanf(controlString [,data]);` <br>
`scanf(" %c", &charVariable);` <br>

Do not need to input escape sequences like `\n`, `\t`, or `\a`.

Can have problems if unexpected data is used. Such as a char in a float variable.

Don't need `&` for arrays and pointers.

To use words with spaces use two scanf statements.

== Chapter 9: Math == <br>
Math operators work as expected: <br>
* `+`, addition
* `-`, subraction
* `*`, multiplication
* `/`, division

Put math in printf statements: <br>
`printf("In 3 years , I'll be %d years old.\n", age+3);` <br>

`%`, modulus operator. Remainder after integer division. <br>
Only use for integer data types! <br>

Default order of operators
Level, Operator, Associativity
1, ()[]., Left to right
2, -(negative) `++(increment)` --(decrement) &(address-of) `*`(pointer indirection) sizeof() !(the not operator), Right to left
3, `*` (multiplication) `/` (division) %(modulus), Left to right
4, + (addition) - (subtraction), Left to right
5, `< <= > >=`, Left to right
6, `== !=`, Left to right
7, &&, Left to right
8, || , Left to right
9, ?: (conditional operator), Right to left
10, `= *= /= %= -=` assignment operators, Right to left
11,,(comma operator), Left to right

Override rules as needed with parentheses.

== Chapter 10: Assignments and expressions == <br>
type variable = value; <br>
int intVar = 1; <br>

Compound assignment, variable = variable +- value; etc.

Use either `variable = variable + value;` OR `variable += value;`

Mind order!

`total *= 2+3;` is actually `total = total * (2+3)'`

Use typecast  to temporarily change a value for a calculation.

Never use it on a line by itself.

Ex. `salaryBonus = salary * (float)age / 150.0;`

== Chapter 11: If statements == <br>

`if (value1 operator value2) { do stuff }`

Relational operators: <br>
* `==` , Equal to
* `>` , Greater than
* `<` , Less than
* `>=` , Greater than or equal to
* `<=` , Less than or equal to
* `!=` , Not equal to

else is catch all

`if (condition) {do stuff}`
`else if (condition) {do stuff}`
`else {do stuff}`

== Chapter 12: Logical operators == <br>
Logical Operators: <br>
* `&&`, And
* `||`, Or
* `!`, Not

`if (condition && condition) {do stuff}`

Mind order, `&&` has precendence over `||`.

== Chapter 13: Operators == <br>

Conditional Operator `? :`

? asks a question, if true do first thing if not do the second thing

Ex. For a given number numPick check if it's divisible 2: <br>
`printf("%d %s divisible by 2.", numPick, (numPick %s ==0) ? ("is") : ("is not"));`

Small-change operators `++` and `--`

`count++`

`count--`

`++count`

`--count`

Do not use on constants: `--14`

prefix and postfix affect order of operations when used with other operators.
On their own they act the same.
If it's a prefix C computes it before anything else on the line.
If it's a postfix C computes it after everything else on the line.

`sizeof()` finds the number of memory locations need to store a data type.

Use on it's own, `i = sizeof(int);`

Or in a print statement<br>
`printf("the size of i is %s.\n", sizeof(i));`

Default is usually "4" bits but this will vary depending on compiler.
A size of an array will include the null zero.

== Chapter 14: Loops == <br>
While loop
`while (condition) { do stuff }`

Do While loop
`do` <br>
`{ do stuff }` <br>
`while (condition)` <br>

C cannot check the condition until after it executes.

== Chapter 15: More loops == <br>
For loops

`for (startExpression; testExpression; countExpression) { do stuff }`

Ex.

`for(count=1;count<10;count++) {` <br>
`printf("count = %d\n",ctr);` <br>
`}` <br>

== Chapter 16: Breaking out of a loop == <br>
Break statements are usually used with if statements to break out of a loop early.

To use the previous for loop.

`for(count=1;count<10;count++) {` <br>
`printf("count = %d\n",ctr);` <br>
`if (count == 4){`<br>
`break;`<br>
`}`<br>
`}`<br>

Continue forces a loop to continue early. Also typically used with an if statement.

To use the previous for loop
`for(count=1;count<10;count++) {` <br>
`printf("count = %d\n",ctr);` <br>
`if ((count%2) == 1){`<br>
`printf("I'm rather odd...");` <br>
`continue;`<br>
`}`<br>
`}` <br>

== Chapter 17: Switch statements == <br>
If an if/else becomes too complicated it's time for a switch statement.

`switch (expression) {` <br>
`case (expression1): { do stuff; }` <br>
`case (expression2): { do stuff; }` <br>
`// Goes on as needed` <br>
`default: { do stuff; }` <br>

Personally I make the default a failstate.

Use break statements to ensure only one case executes.

Case statements don't have to be in order, including default.

Place more common options towards top for efficiency, program won't have to read as far.

Use int as float and double can't be match properly

== Chapter 18: More input and output statements == <br>
`getchar()` and `putchar()`

Leaves a newline variable that needs cleared with a blank `getchar()`

Use `getch()` instead. Will not output to screen however, need to use `putch()` with it.

== Chapter 19: More string work == <br>
Character testing functions

Use `ctype.h` header.
`isalpha()`, returns true if variable is a character from a to z.

`isdigit()`, returns true if variable is a number from 0 to 9.

`isupper()` returns true if variable is an upper case letter.

`islower()` returns true if a variable is a lower case letter.

Case changing functions
`toupper()`, returns argument as uppercase.

`tolower()`, returns argument as lowercase.

String functions
`strcat()`, STRing ConcATenation. Joins two string arrays.

`puts()`, sends a string to the screen. Automatically puts a newline, don't need to add "\n".

`gets()`, gets a string from the keyboard.

== Chapter 20: Advanced Math == <br>
Requires `math.h` header.

`floor()` and `ceil()` functions round up and down to nearest integer.

Use on floats, doesn't cast so output with `%f`

`fabs()` floating point absolute value.

`pow()` function raises a value to it's power.

`sqrt()` function returns the square root of a value.

Trig functions

* `cos(x)`, Returns the cosine of the angle x
* `sin(x)`, Returns the sine of the angle x
* `tan(x)`, Returns the tangent of the angle x
* `acos(x)`, Returns the arc cosine of the angle x
* `asin(x)`, Returns the arc sine of the angle x
* `atan(x)`, Returns the arc tangent of the angle x

Log functions

* `e^xp(x)`, Returns e, the base of the natural logarithm raise to a power specified by `x(e^x)`.
* `log(x)`, Returns the natural logarithm of the argument x, mathematically written as `ln(x)`. X must be positive.
* `log10(x)`, Returns the Base10 logarith of the argument x, mathemtatically written as `log10(x)`. X must be positive.

`rand()` Returns a number from 0 to 32767. Requires the `stdlib.h` header.

To narrow random numbers use the modulus operator `%`.

`dice = (rand() % 5) + 1; // From 1 to 6`

For true random use `srand()` to seed the number generator. Uses the `time.h` header.

`#include <time.h>` <br>
`time_t t;` <br>
`srand(time(&t));` <br>

== Chapter 21: Arrays == <br>
When declaring a C Array leave room for null.

Ex. `char name[6] = "Italy";`

Predefined array of ints: `int vals[5] = {10, 40, 70, 90, 120};`

No null zero needed, null zeroes terminate only strings in character arrays.

Zero out arrays with 0.0:

`float amount[100] = {0.0};`

Use a for loop to enter data into an array.

`int ages[3];` <br>
`for (int count = 0; count < 3; count++) {` <br>
`printf("What is the age of child #%d ", count+1);` <br>
`scanf(" %d", &ages[count]);` <br>
`}` <br>

== Chapter 22: Searching Arrays == <br>
Use for loops with if statements and bool variables to find values.

Use if statements to check for values or to compare to an existing value when looking for a max value.

Iterating through an array is a sequential search.

== Chapter 23: Alphabetizing and arranging data == <br>
Bubble Sort.

Create + populate array with random numbers, iterate through and sort them with a temp variable to swap them.

Nested for loops for bubble sorts.

Logic of swap:

`temp = number[inner];` <br>
`number[inner] = number[outer];` <br>
`number[outer] = temp;` <br>

Sorting is useful for a sequential search, as some items will be faster

== Chapter 24: Pointers == <br>
Defining Pointer Variables
`&`, Address-of operator <br>
`*`, Dereferencing operator <br>

`int age = 19; // Stores a 19 in int variable age` <br>
`int * pAge = &age; // Links up to pointer` <br>

Never set the address of one type of variables to a pointer variable of a different type.

== Chapter 25: Arrays and Pointers == <br>
An array name is a pointer to the first element in that array.

Pointer constants.

`int vals[5] = {10, 20, 30, 40, 50};`

Equivalent code: <br>
`printf("The first value is %d.\n", vals[0]);` <br>
`printf("The first value is %d.\n", *vals);` <br>
`printf("The first value is %d.\n", *(vals+0));` <br>

An array being a fixed constant pointer is why it cannot be on the left size of an equals sign. Can't change a constant.

Pointers are a way around that without using strcpy.

`char name[] = "Andrew B. Mayfair";`

`char * pName = "Andrew B Mayfair";`

`pName = "Theodore M. Brooks";`

Catch there is to be mindful of the length.

Do not do this:

`main(){`

`char * name = "Tom Roberts"; `

`// Program `

`gets(name); // Not safe`

One way is to reserve space and then ensure user cannot enter more than reserved space:

`char input[81]; // Holds a string as long as 80 characters`

`char *iptr = input; // Also could have done char *iptr = &input[0]`

`gets(iptr); // Makes sure that iptr points th the string typed by the user`

`fgets(iptr, 81, stdin); // Gets up to 80 characters and adds a null zero`

Over 80 characters only takes the first 80.

Can also assign the pointer string literals using the assignment like this:

`iptr = "Mary Jayne Norman";`

Can create arrays of pointers:

`int * ipara[25]; // 25 pointers to integers`

`char * cpara[25]; // 25 pointers to characters`

== Chapter 26: Maximizing memory == <br>
Heap is unused memory

Allocating/Deallocating heap memory as program runs.

Two basic functions for heap: <br>
* `malloc()` to allocate heap memory
* `free()` to deallocate heap memory

`int * temps; // Will point to the first heap value`

`temps = (int *) malloc(10 * sizeof(int)); // Allocate memory for 10 integers on the heap using malloc()`

malloc only requires a single value: the number of bytes to allocate.

`malloc(10); // Allocate 10 bytes`

Always performs the following two steps if enough heap exists: <br>
1) Allocates the number of requested bytes and makes sure no other program can overwrite memory until program frees it
2) Assigns pointer the first allocated value

Allocated values can be treated like an array, i.e. `temps[1]`.

`(int *)` is a typecast, pointer typecast as malloc returns a character pointer.

malloc can also be used to check if enough memory is available.

`temps = (int *) malloc(10 * sizeof(int));`<br>
`if (temps == 0) {}`<br>
`    printf("Oops! Not Enough Memory!\n);`<br>
`    exit(1);`<br>
`}`<br>

0 is an invalid address, no memory address begins with 0. The not (!) operator also could have been used.

`if (!temps)`

Free takes the variable to free as an argumement.

`free(temps); // Gives memory back to the heap`

Be sure not to reuse variable after it's freed, that may overwrite memory and lock up the machine.

== Chapter 27: Structures == <br>
Structs

`struct [structure tag] {` <br>
`member definition;` <br>
`...` <br>
`member definition;` <br>
`};` <br>

Example:

`struct invStruct {` <br>
`char manuf[255]; // Manufacturer name` <br>
`char model[15]; // Model code` <br>
`int diskSpace; // Disk space in GB` <br>
`int memSpace; // RAM in GB` <br>
`int ports; // Number of USB ports` <br>
`int quantity; // Number in inventory` <br>
`float cost; // Cost of computer` <br>
`float price; // Retail price of computer` <br>
`};` <br>

Can be defined in a header file and included via `#include "/path/to/header`

Or included before main like a class definition:

`struct invStruct {` <br>
`// struct definition` <br>
`}` <br>
` ` <br>
`main() {` <br>
`struct invStruct items[500];` <br>
`// Rest of program` <br>
`}` <br>

Can use pointers instead of structure variables.

`struct invStruct *item1, *item2, *item3;`

Set size w/ malloc.

`item1 = (struct invStruct *)malloc(sizeof(invStruct));`
`item2 = (struct invStruct *)malloc(sizeof(invStruct));`
`item3 = (struct invStruct *)malloc(sizeof(invStruct));`

Populate with dot operator.

`structureVariableName.memberName`

Example.

`struct bookInfo books[3]; // Assume struct defined elsewhere` <br>
`for (int count = 0; count < 3; count++) {` <br>
`gets(book[count].title);`<br>
`scanf(" $%f", &books[count].price);`<br>
`getchar(); // Clear newline for next loop`
`}` <br>

Slightly different syntax for pointers, uses `->` operator.

`struct bookInfo * books[3]; // Assume struct defined elsewhere` <br>
`for (int count = 0; count < 3; count++) {` <br>
`boots[count] = (struct bookInfo*)malloc(sizeof(struct bookInfo));`
`gets(book[count]->title);`<br>
`scanf(" $%f", &books[count]->price);`<br>
`getchar(); // Clear newline for next loop`
`}` <br>

== Chapter 28: Saving Sequential files == <br>
Two types of files: Sequential-access files and random-access files

Use `fopen()` to open a file. Included in stdio.h.

Close file with `fclose()`, always close files you've opened

Uses a file pointer.

`FILE * fptr; // Defines a file pointer name fptr`

Mind your scope, FILE before main is global!

`#include <stdio.h>`<br>
`FILE *fptr;`<br>
`main() {`<br>
`fptr = fopen("/path/to/file", "w")`<br>
`// Rest of program`<br>
`fclose(fptr);`<br>
`}`<br>

fopen arguements are "w" for write, "r" for read, and "a" for append.

Note, "w" WILL truncate a file!

`fgets()` reads from a file.

`fputs()` writes to a file.

`feof()` Returns true if reading the last line of a file.

`fprintf()` file pointer goes at the beginning of the file.

`fgets()` file pointer goes at the end.

== Chapter 29: Saving Random files == <br>
Random-Access `fopen()` Modes: <br>
* "r+", opens an existing file for reading and writing.
* "w+", opens a new file for writing and reading.
* "a+", opens a file in append mode (pointer at end of file) but lets you move back through the file.

Use `fseek()` to move around in a file.

`fseek(filePtr, longVal, origin);`

`filePtr` is the file pointer used in the `fopen()` function.

`longVal` is a longint variable or literal that can be positive or negative. Used to skip forwards or backwards in file.

`origin` is the command that tells `fseek()` to start seeking.

Origin values: <br>
* `SEEK_SET`, Beginning of file
* `SEEK_CUR`, Current position in file
* `SEEK_END`, End of file

Fseek only works in random-access files.

`fputc()` outputs individual characters to a file.

`fgetc()` reads individual characters from a file.


== Chapter 30: Functions == <br>
== Chapter 31: Passing variables to functions == <br>
== Chapter 32: Returning data from functions == <br>
