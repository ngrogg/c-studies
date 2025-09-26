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

Mind your order!

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
== Chapter 21: Arrays == <br>
== Chapter 22: Searching Arrays == <br>
== Chapter 23: Alphabetizing and arranging data == <br>
== Chapter 24: Pointers == <br>
== Chapter 25: Arrays and Pointers == <br>
== Chapter 26: Maximizing memory == <br>
== Chapter 27: Structures == <br>
== Chapter 28: Saving Sequential files == <br>
== Chapter 29: Saving Random files == <br>
== Chapter 30: Functions == <br>
== Chapter 31: Passing variables to functions == <br>
== Chapter 32: Returning data from functions == <br>
