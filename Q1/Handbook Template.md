<h1>Handbook on Programming in C++</h1>

**AP Computer Science Principles 2023-2024**

Tristan Chan

<!-- This is a comment (which will not be displayed in the live file);
replace all "???" with your own text. -->




___





<h1>Table of Contents</h1>

- [1. Compiling and Running](#1-compiling-and-running)
- [2. Data Types](#2-data-types)
- [3. Console I/O](#3-console-io)
- [4. Arithmetic Operations](#4-arithmetic-operations)
- [5. Assignment Operations](#5-assignment-operations)
- [6. Comments](#6-comments)
- [7. Decision Structures](#7-decision-structures)
- [8. Conditional Operators](#8-conditional-operators)
- [9. Logic Operators](#9-logic-operators)
- [10. Bitwise Operators](#10-bitwise-operators)
- [11. Advanced Decision Structures](#11-advanced-decision-structures)
- [12. String Methods](#12-string-methods)
- [13. Random Generation](#13-random-generation)
- [14. Looping Structures](#14-looping-structures)
- [15. Functions/Methods](#15-functionsmethods)
- [16. Elementary Data Structures](#16-elementary-data-structures)
  - [16.1 Arrays/Lists](#161-arrayslists)
  - [16.2 Matrices](#162-matrices)
  - [16.3 Vectors](#163-vectors)
- [References](#references)

<!-- 
- [17. Major Keywords](#17-major-keywords)
- [18. Error Handling](#18-error-handling)
- [19. Working with Files](#19-working-with-files)
- [20. Major Language Features](#20-major-language-features)
  - [20.1 Classes](#191-classes)
  - [20.2 Inheritance](#202-inheritance)
  - [20.3 Generic Typing (Templates)](#203-generic-typing-templates)
  - [20.4 Pointers](#194-pointers)
- [21. Importing Local Libraries](#21-importing-local-libraries)
- [22. Working with Time](#22-working-with-time)
- [23. Importing Libaries from Package managers](#23-importing-libaries-from-package-managers)
- [24. Bitwise Operators](#24-bitwise-operators)
- [25. Common Data Structures](#25-common-data-structures)
- [26. Advanced Language Features](#26-advanced-language-features)
-->
___
# 1. Compiling and Running

To run a C++ program, you would need to do compile it first.

Ex:

```c++
$ g++ -o </insert-name/>.java
```

After compiling the file, you can now run it.

Ex:

```c++
$ ./</insert-name/>
```

Replace </insert-name/> with the file name
___
# 2. Data Types

There are seven basic C++ data types that are often used while coding.

* `bool` (Boolean) - either `True` (1) or `False` (0)
* `char` (Character) - A single keyboard character that can take 256 values corresponding to the ASCII table (1 byte)
* `int` (Integer) - A whole number from -2^31 to 2^31-1 (4 bytes)
* `float` (Floating point) - A number with a decimal from 1.175494351E-38 to 3.402823466E+38 (4 bytes)
* `double` (Double floating point) - A number with a decimal from 2.2250738585072014E-308 to 7976931348623158E+308 (8 bytes)
* `void` (Valueless) - No value or a memory address holder, usually to name a function that doesnt return anything (0 - 8 bytes)
* `wchar_t` (Wide character) - A single keyboard character that can take 65536 values corresponding to the ASCII table (2/4 bytes)

C++ also include type modifiers which can limit or expand types (usually ints) to certain parameters.

* `signed` - The type can be negative or positive
* `unsigned` - The type can never be negative
* `short` - Uses half the bytes but also shortens the parameters by a lot
* `long` - Uses double the bytes and greatly expands the parameters
* `const` - Prevents the programmer from modifying the variable and stays the same

```C++
long int low = -9223372036854775808
long int high = 9223372036854775807
// The lowest and highest you can go in a long int 
```
___
# 3. Console I/O

There are two seperate functions for console input and output.

* `printf(...)` - Normal function to print to the console
* `scanf("</FormatSpecifier/>", </VariableName/>)` - Normal function to take input from the console and turn it into a variable

Note that to do both, you would have to include <stdio.h> into your code from C.

Otherwise, you can use the normal C++ functions that look a bit weird to use but can be used without including any packages.

* `std::cout << ...` - Normal function to print to the console in C++
* `std::cout << ... << endl` - Normal function to print with a line break to the console in C++
___
# 4. Arithmetic Operations

* `+` - Add
* `-` - Subtract
* `*` - Multiply
* `/` - Divide
* `%` - Modulus (Remainder from long division)

## 4.1 Type Casting
There are two type of ways to change a type from one to another in C++.

* Implicit - The compiler does it automatically when it is possible
* Explicit - Done manually by using five types of cast operators
  * static_cast - A compile-time casting operator usually used for a variety of conversions
  
  Ex: 
  ```C++
  double doubleVariable = static_cast<double>(intVariable);
  ```

  * dynamic_cast - Used for downcasting polymorphic base classes
  * const_cast - Used to remove the const type from variables

  Ex:
  ```C++
  int& notConstValue = const_cast<int&>(constValue);
  ```
  * reinterpret_cast - A very unsafe way to convert a pointer or memory address of one type to the same pointer of another type
  * C-style type casting - A traditional method from C to convert data types

  Ex:
  ```C++
  int intValue = (int)doubleValue;
  ```
___
# 5. Assignment Operations

* `x = y` - Set x equal to y
* `x += y` - Add y to x (`x = x + y`)
* `x -= y` - Subtract y from x (`x = x - y`)
* `x *= y` - Multiply y and x (`x = x * y`)
* `x /= y` - Divide x with y (`x = x + y`)
* `x %= y` - Mod x with y (`x = x % y`)
___
# 6. Comments

* `// ...` - A single line comment
* `/* ... */` - A multi-line comment

```C++
// line comment

/* block
comment
across
multiple lines
*/

/* Properly
 * formatted
 * block
 * comment
 * usually for metadata (author, date, etc.)
 */
```
___
# 7. Decision Structures

* if statements
* if...else statements

These statements can also be nested within each other or use more than one after another condition

```C++
if (condition1) {
  if (condition) { // nested 

  }
} else if (condition2) { // if condition 1 is false, check condition 2

} else {
  
}
```
___
# 8. Conditional Operators

* `==` - Equal to
* `!=` - Not equal to
* `>` - Greater than
* `<` - Less than
* `>=` - Greater than or equal to
* `<=` - Less than or equal to
___

# 9. Logic Operators

* `&&` - Both are true
* `||` - Either is true
* `!` - Reverses result

```C++
if (3 == 5 && 4 == 4) return false;
else return true;

// returns true because 3 does not equal 5
```
___
# 10. Bitwise Operators

* `&` - Bitwise AND
* `|` - Bitwise OR
* `^` - Bitwise XOR
* `~` - Bitwise NOT
* `<<` - Bitwise shift left
* `>>` - Bitwise shift right
___
# 11. Advanced Decision Structures

* ``switch``
* ``?:`` - Ternary operator (condition ? statement1 : statement 2)
___
# 12. String Methods

* ``length() or size()`` - Returns the length of the string
* ``at()`` - Accesses a character at an index
* ``append()`` - Adds one string to the end of another
* ``compare()`` - Returns an integer valur based on the result of comparison
* ``substr()`` - Takes a substring from a string
* ``find()`` - Returns the position of the first occurrence of a substring
* ``replace()`` - Replaces a substring of a string with another substring
* ``insert()`` - Adds a substring at a specified position
* ``erase()`` - Removes a substring in a string
* ``c_str()`` - Grabs a C-style string from an std::string


___





# 13. Random Generation

* `rand()` - Generates a pseudo-random number from 0 through RAND_MAX (At least 32767)
* `srand()` - Seeds the random number generator and sets its initial state

Note that you will have to include the C standard library to use the both random functions.

```C++
#include <cstdlib>
```

___

# 14. Looping Structures

* `while (condition)` - while condition is true (checks at the start of each iteration);
* `for (initialization; testcondition; updateExpression)` - for loop that initializes a variable that will update after every iteration until the condition is false
* `for (x : y)` - a for each loop that takes a variable from an array or vector until it reaches the last element
* `do {...} while (condition)` - executes the body and then checks the condition, if true, then repeat
___
# 15. Functions/Methods

Functions in C++ requires a type, name, and body. They are defined outside a class.

Ex:
```C++
void myFunction() { // declaration (requires a return type & name)
// definition (body to be executed)
}
```

Methods are the exact same thing, except they are associated with an object or class, just different names.

Some functions/methods have parameters they take in that they use to do something with it, such as return it or print something.

Ex:
```C++
int myFunction2(int x) { 
    return x*2;
}
```

If you have methods in a class, they can access that private variable without needing to take it in as a parameter.
___





# 16. Elementary Data Structures

Elementary Data Structues are a really simple list of values that are stored in the memory, either allocated by the position they are added in or allocated randomly.

There are many data structures in C++ such as tuples, stacks, queues, linked lists, and heaps. However, the easiest ones to use are:



## 16.1 Arrays/Lists

* `Arrays` - A fixed size that declare a set type and can be stored.

To declare an array, add brackets after the name.

Ex:
```C++
int myArr[5]; // declaration
int myArr2[5] = {1, 2, 3, 4, 5}; // declaration with values inserted
```



## 16.2 Matrices

* `Matrices` - Essentially a two-dimensional array (Array inside arrays) but instead of being only linear, it goes in both directions.

To declare an array, add two sets of brackets after the name.

Ex:
```C++
int myArr[3][5]; // declaration
int myArr2[3][5] = {
  {1, 2, 3, 4, 5},
  {6, 7, 8, 9, 10},
  {11, 12, 13, 14, 15}
}; // declaration with values inserted
```

More dimensions can be added but at most, only 2 will suffice.
## 16.3 Vectors


* `Vectors` - Like arrays, but are dynamic and can be resized.

To use an array, vector would have to be imported from the library

Ex:
```C++
#include <vector> // import from library

vector<int> myVector; // declaration
vector<int> myVector2 = {1, 2, 3, 4, 5}; // declaration with values inserted
```
Note that the size will not have to be declared unlike arrays as it is resizable.
___





<!-- 
EVERYTHING BELOW IS OPTIONAL; 
UNCOMMENT BY REMOVING THE ARROW TAGS SURROUNDING
(i.e., delete the "< !--" and "-- >" tags)

CHANGE THE SECTION NUMBERS AS DESIRED
-->

<!-- # 17. Major Keywords

???





___ -->





<!-- # 18. Error Handling

???





___ -->





<!-- # 19. Working with Files

???





___ -->





<!-- # 20. Major Language Features

???







## 20.1 Classes

???





## 20.2 Inheritance

???





## 20.3 Generic Typing (Templates)

???





## 20.4 Pointers

???





___ -->





<!-- # 21. Importing Local Libraries

???





___ -->





<!-- # 22. Working with Time

???





___ -->





<!-- # 23. Importing Libaries from Package managers

???





___ -->





<!-- # 24. Bitwise Operators

???





___ -->





<!-- # 25. Common Data Structures

???





___ -->





<!-- # 26. Advanced Language Features

???





___ -->





# References

* [Markdown Cheatsheet](https://gist.github.com/jonschlinkert/5854601)
* [description](http://example.com)
