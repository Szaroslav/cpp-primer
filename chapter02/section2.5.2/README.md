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



## Exercise 2.34

> Write a program containing the variables and assignments from the previous exercise. Print the variables before and after the assignments to check whether your predictions in the previous exercise were correct. If not, study the examples until you can convince yourself you know what led you to the wrong conclusion

`main.cpp`
```cpp
int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;

    // Exercise assignments
    a = 42; // valid, int
    b = 42; // valid, int
    c = 42; // valid, int
    d = 42; // invalid, d is a pointer to int
    e = 42; // invalid, e is a pointer to const int
    g = 42; // invalid, g is a reference type

    return 0;
}
```



## Exercise 2.35

> Determine the types deduced in each of the following definitions. Once you’ve figured out the types, write a program to see whether you were correct.
> ```cpp
> const int i = 42;
> auto j = i; const auto &k = i; auto *p = &i;
> const auto j2 = i, &k2 = i;
> ```

```cpp
auto j         = i;  // int
const auto &k  = i;  // const int &
auto *p        = &i; // const int *
const auto j2  = i,  // const int
           &k2 = i;  // const int &
```

`main.cpp`
```cpp
int main()
{
    const int i    = 42;
    auto j         = i;  // int
    const auto &k  = i;  // const int &
    auto *p        = &i; // const int *
    const auto j2  = i,  // const int
               &k2 = i;  // const int &

    return 0;
}
```

