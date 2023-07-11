# Section 2.5.2 _The_ `auto` _type specifier_

## Exercise 2.33

> Using the variable definitions from this section, determine what happens in each of these assignments
> ```cpp
> a = 42; b = 42; c = 42;
> d = 42; e = 42; g = 42
> ```

`p` is pointer to `int`, then instead of `null`'s value must be its address using address-of operator `&`:
```cpp
a = 42; // valid, int
b = 42; // valid, int
c = 42; // valid, int
d = 42; // invalid, d is a pointer to int
e = 42; // invalid, e is a pointer to const int
g = 42; // invalid, g is a reference type
```
