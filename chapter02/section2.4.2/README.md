# Section 2.4.2 _Pointers and_ `const`

## Exercise 2.27

> Which of the following initializations are legal? Explain why.
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
> (f)
> ```cpp
> const int &const r2;
> ```
> (g)
> ```cpp
> const int i2 = i, &r = i;
> ```

(a) Illegal, reference to a literal.  
(b) Legal, `const` pointer, must be initilized.  
(c) Illegal, same as (a).  
(d) Legal, same as (b), it points to `const int` instead.  
(e) Legal, pointer to `const int`.  
(f) Illegal, `const` reference is not allowed.  
(g) Legal, it's valid to assign `nonconst` to `const` object, to reference either.



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

