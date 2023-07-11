# Section 2.5.2 _The_ `auto` _type specifier_

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
