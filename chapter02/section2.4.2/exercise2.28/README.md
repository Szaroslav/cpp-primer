# Section 2.4.2 _Pointers and_ `const`

## Exercise 2.28

> xplain the following definitions. Identify any that are illegal.
>
> (a)
> ```cpp
> int i = -1, &r = 0;
> ```
> (b)
> ```cpp
> int *const p2 = &i2;
> ```
> (c)
> ```cpp
> const int i = -1, &r = 0;
> ```
> (d)
> ```cpp
> const int *const p3 = &i2;
> ```
> (e)
> ```cpp
> const int *p1 = &i2;
> ```

(a) Legal, `int` and `const` pointer to `int`.  
(b) Illegal, pointer to `int` and `const` pointer to `int` (must be initilized).  
(c) Illegal, `const int` (must be initilized), reference to `const int`.  
(d) Illegal, `const` pointer to `const int` (must be initilized).  
(e) Legal, pointer to `const int`.  
