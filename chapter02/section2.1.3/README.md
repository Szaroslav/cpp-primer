# Section 2.1.3 _Literals_

## Exercise 2.05

> Determine the type of each of the following literals. Explain the differences among the literals in each of the four examples:
>
> <ol type="a">
>   <li><code>’a’</code>, <code>L’a’</code>, <code>"a"</code>, <code>L"a"</code></li>
>   <li><code>10</code>, <code>10u</code>, <code>10L</code>, <code>10uL</code>, <code>012</code>, <code>0xC</code></li>
>   <li><code>3.14</code>, <code>3.14f</code>, <code>3.14L</code></li>
>   <li><code>10</code>, <code>10u</code>, <code>10.</code>, <code>10e-2</code></li>
> </ol>

`[]` _symbol means array type_

<ol type="a">
    <li>
        <br>
        <code>’a’</code> - <code>char</code>,<br>
        <code>L’a’</code> - <code>wchar_t</code>,<br>
        <code>"a"</code> - <code>string</code> or <code>char[]</code>,<br>
        <code>L"a"</code> - <code>wchar_t[]</code><br>
        Different character coding.
    </li>
    <li>
        <br>
        <code>10</code> - <code>int</code>,<br>
        <code>10u</code> - <code>unsigned int</code>,<br>
        <code>10L</code> - <code>long</code>,<br>
        <code>10uL</code> - <code>unsigned long</code>,<br>
        <code>012</code> - <code>int</code> (octal notation),<br>
        <code>0xC</code> - <code>int</code> (hexadecimal notation)<br>
        Integral types but with different types or notations.
    </li>
    <li>
        <br>
        <code>3.14</code> - <code>double</code>,<br>
        <code>3.14f</code> - <code>float</code>,<br>
        <code>3.14L</code> - <code>long double</code><br>
        Different floating-point types.
    </li>
    <li>
        <br>
        <code>10</code> - <code>int</code>,<br>
        <code>10u</code> - <code>unsigned int</code>,<br>
        <code>10.</code> - <code>double</code>,<br>
        <code>10e-2</code> - <code>double</code><br>
        Number types, the first two are integer, the next two are floating-point ones. <code>10e-2</code> uses scientific notation.
    </li>
</ol>



## Exercise 2.06

> What, if any, are the differences between the following definitions:
> ```cpp
> int month = 9, day = 7;
> int month = 09, day = 07;
> ```

The first line uses default decimal notation, thus it represents September 7th.
The second line uses octal notation, thus:
$$
09 = 9 \cdot 8^0 = 9 \\
07 = 7 \cdot 8^0 = 7
$$,
it represents the same date as above (September 7th), but mistakenly could be different date, e.g. 
```cpp
int month = 010;
```
$$
010 = 0 \cdot 8^0 + 1 \cdot 8^1 = 8 \neq 10
$$



## Exercise 2.07

> What values do these literals represent? What type does each have?
>
> <ol type="a">
>   <li><code>"Who goes with F\145rgus?\012"</code></li>
>   <li><code>3.14e1L</code></li>
>   <li><code>1024f</code></li>
>   <li><code>3.14L</code></li>
> </ol>

`[]` _symbol means array type_

<ol type="a">
    <li>
        <code>"Who goes with F\145rgus?\012"</code> - <code>string</code> or <code>char[]</code><br>
        Who goes with Fergus?(<i>new line</i>)
    </li>
    <li>
        <br>
        <code>3.14e1L</code> - <code>long double</code><br>
        31.4
    </li>
    <li>
        <br>
        <code>1024f</code> - <code>float</code><br>
        1024.0
    </li>
    <li>
        <br>
        <code>3.14L</code> - <code>long double</code><br>
        3.14
    </li>
</ol>



## Exercise 2.08

> Using escape sequences, write a program to print `2M` followed by a newline. Modify the program to print `2`, then a tab, then an `M`, followed by a newline.

Used [Wikipedia ASCII](https://en.wikipedia.org/wiki/ASCII#Printable_characters) article to get octal values of characters.

`main.cpp`
```cpp
#include <iostream>

int main()
{
    std::cout << "\62\115\n";   // 2M
    std::cout << "\62\t\115\n"; // 2    M

    return 0;
}
```

