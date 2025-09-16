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
== Chapter 8: Reading input == <br>
== Chapter 9: Math == <br>
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
