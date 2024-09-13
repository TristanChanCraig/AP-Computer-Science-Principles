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
- [10. Advanced Decision Structures](#10-advanced-decision-structures)
- [11. String Methods](#11-string-methods)
- [12. Random Generation](#12-random-generation)
- [13. Looping Structures](#13-looping-structures)
- [14. Functions/Methods](#14-functionsmethods)
- [15. Elementary Data Structures](#15-elementary-data-structures)
  - [15.1 Arrays/Lists](#151-arrayslists)
  - [15.2 Matrices](#152-matrices)
- [References](#references)

<!-- 
- [16. Major Keywords](#16-major-keywords)
- [17. Error Handling](#17-error-handling)
- [18. Working with Files](#18-working-with-files)
- [19. Major Language Features](#19-major-language-features)
  - [19.1 Classes](#191-classes)
  - [19.2 Inheritance](#192-inheritance)
  - [19.3 Generic Typing (Templates)](#193-generic-typing-templates)
  - [19.4 Pointers](#194-pointers)
- [20. Importing Local Libraries](#20-importing-local-libraries)
- [21. Working with Time](#21-working-with-time)
- [22. Importing Libaries from Package managers](#22-importing-libaries-from-package-managers)
- [23. Bitwise Operators](#23-bitwise-operators)
- [24. Common Data Structures](#24-common-data-structures)
- [25. Advanced Language Features](#25-advanced-language-features)
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
___
# 7. Decision Structures

* if statements
* if...else statements

These statements can also be nested within each other or use more than one within another.
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
___
# 10. Advanced Decision Structures

* switch statements
* ternary statements
___





# 11. String Methods

???





___





# 12. Random Generation

???





___





# 13. Looping Structures

???





___





# 14. Functions/Methods

???





___





# 15. Elementary Data Structures

???





## 15.1 Arrays/Lists

???






## 15.2 Matrices

???





___





<!-- 
EVERYTHING BELOW IS OPTIONAL; 
UNCOMMENT BY REMOVING THE ARROW TAGS SURROUNDING
(i.e., delete the "< !--" and "-- >" tags)

CHANGE THE SECTION NUMBERS AS DESIRED
-->

<!-- # 16. Major Keywords

???





___ -->





<!-- # 17. Error Handling

???





___ -->





<!-- # 18. Working with Files

???





___ -->





<!-- # 19. Major Language Features

???







## 19.1 Classes

???





## 19.2 Inheritance

???





## 19.3 Generic Typing (Templates)

???





## 19.4 Pointers

???





___ -->





<!-- # 20. Importing Local Libraries

???





___ -->





<!-- # 21. Working with Time

???





___ -->





<!-- # 22. Importing Libaries from Package managers

???





___ -->





<!-- # 23. Bitwise Operators

???





___ -->





<!-- # 24. Common Data Structures

???





___ -->





<!-- # 25. Advanced Language Features

???





___ -->





# References

* [Markdown Cheatsheet](https://gist.github.com/jonschlinkert/5854601)
* [description](http://example.com)
