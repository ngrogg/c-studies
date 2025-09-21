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
== Chapter 11: If statements == <br>
== Chapter 12: Logical operators == <br>
== Chapter 13: Operators == <br>
== Chapter 14: Loops == <br>
== Chapter 15: More loops == <br>
== Chapter 16: Breaking out of a loop == <br>
== Chapter 17: Switch statements == <br>
== Chapter 18: More input and output statements == <br>
== Chapter 19: More string work == <br>
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
