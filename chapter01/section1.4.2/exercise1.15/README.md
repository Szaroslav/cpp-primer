# Section 1.4.2 _The_ `for` _statement_

## Exercise 1.15

> Write programs that contain the common errors discussed in the box on page 16. Familiarize yourself with the messages the compiler generates.

Used compiler: `g++ (GCC) 12.2.1 20230201`.

### Syntax errors

`main1.cpp`
```cpp
#include <iostream>

// error: missing ) in parameter list for main
int main ( {
    // error: used colon, not a semicolon, after endl
    std::cout << "Read each file." << std::endl:
    // error: missing quotes around string literal
    std::cout << Update master. << std::endl;
    // error: second output operator is missing
    std::cout << "Write new master." std::endl;
    // error: missing ; on return statement
    return 0
}
```

```
main1.cpp:4:5: error: cannot declare ‘::main’ to be a global variable
    4 | int main ( {
      |     ^~~~
main1.cpp:6:48: error: found ‘:’ in nested-name-specifier, expected ‘::’
    6 |     std::cout << "Read each file." << std::endl:
      |                                                ^
      |                                                ::
main1.cpp:6:44: error: ‘std::endl’ is not a class, namespace, or enumeration
    6 |     std::cout << "Read each file." << std::endl:
      |                                            ^~~~
main1.cpp:8:18: error: ‘Update’ was not declared in this scope
    8 |     std::cout << Update master. << std::endl;
      |                  ^~~~~~
main1.cpp:8:25: error: expected ‘}’ before ‘master’
    8 |     std::cout << Update master. << std::endl;
      |                         ^~~~~~
main1.cpp:4:12: note: to match this ‘{’
    4 | int main ( {
      |            ^
main1.cpp:8:24: error: expected ‘)’ before ‘master’
    8 |     std::cout << Update master. << std::endl;
      |                        ^~~~~~~
      |                        )
main1.cpp:4:10: note: to match this ‘(’
    4 | int main ( {
      |          ^
main1.cpp:10:10: error: ‘cout’ in namespace ‘std’ does not name a type
   10 |     std::cout << "Write new master." std::endl;
      |          ^~~~
In file included from main1.cpp:1:
/usr/include/c++/12.2.1/iostream:61:18: note: ‘std::cout’ declared here
   61 |   extern ostream cout;          /// Linked to standard output
      |                  ^~~~
main1.cpp:12:5: error: expected unqualified-id before ‘return’
   12 |     return 0
      |     ^~~~~~
main1.cpp:13:1: error: expected declaration before ‘}’ token
   13 | }
      | ^
```

### Type errors

`main2.cpp`
```cpp
#include <iostream>

int main() {
    std::cout << "Sum of numbers from 50 to 100 is ";

    int sum = 0;
    // Single statement block, curly brackets are not necessary
    for (int i = "C++"; i <= 100; i++)
        sum += i;

    std::cout << sum << "." << std::endl;

    return 0;
}
```

```
main2.cpp: In function ‘int main()’:
main2.cpp:8:18: error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]
    8 |     for (int i = "C++"; i <= 100; i++)
      |                  ^~~~~
      |                  |
      |                  const char*
```

### Declaration errors

`main3.cpp`
```cpp
#include <iostream>

int main() {
    int v1 = 0, v2 = 0;
    std::cin >> v >> v2; // error: uses "v" not "v1"
    // error: cout not defined; should be std::cout
    cout << v1 + v2 << std::endl;

    return 0;
}
```

```
main3.cpp: In function ‘int main()’:
main3.cpp:5:17: error: ‘v’ was not declared in this scope; did you mean ‘v2’?
    5 |     std::cin >> v >> v2; // error: uses "v" not "v1"
      |                 ^
      |                 v2
main3.cpp:7:5: error: ‘cout’ was not declared in this scope; did you mean ‘std::cout’?
    7 |     cout << v1 + v2 << std::endl;
      |     ^~~~
      |     std::cout
In file included from main3.cpp:1:
/usr/include/c++/12.2.1/iostream:61:18: note: ‘std::cout’ declared here
   61 |   extern ostream cout;          /// Linked to standard output
      |   
```