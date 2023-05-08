# Section 2.1.3 _Literals_

## Exercise 2.6

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
