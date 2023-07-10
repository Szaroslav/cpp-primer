# Section 2.4.4 `constexpr` and constant expressions

## Exercise 2.32

> Is the following code legal or not? If not, how might you make it legal?
>
> ```cpp
> int null = 0, *p = null;
> ```

`p` is pointer to `int`, then instead of `null`'s value must be its address using address-of operator `&`:
```cpp
int null = 0, *p = &null;
```
