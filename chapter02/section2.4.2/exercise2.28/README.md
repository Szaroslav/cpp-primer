# Section 2.4.2 _Pointers and_ `const`

## Exercise 2.28

> xplain the following definitions. Identify any that are illegal.
>
> (a)
> ```cpp
> int i, *const cp;
> ```
> (b)
> ```cpp
> int *p1, *const p2;
> ```
> (c)
> ```cpp
> const int ic, &r = ic;
> ```
> (d)
> ```cpp
> const int *const p3;
> ```
> (e)
> ```cpp
> const int *p;
> ```

(a) Legal, `int` and `const` pointer to `int`.  
(b) Illegal, pointer to `int` and `const` pointer to `int` (must be initilized).  
(c) Illegal, `const int` (must be initilized), reference to `const int`.  
(d) Illegal, `const` pointer to `const int` (must be initilized).  
(e) Legal, pointer to `const int`.  
