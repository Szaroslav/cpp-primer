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



## Exercise 2.29

> Using the variables in the previous exercise, which of the following assignments are legal? Explain why.
> (a)
> ```cpp
> i = ic;
> ```
> (b)
> ```cpp
> p1 = p3;
> ```
> (c)
> ```cpp
> p1 = &ic;
> ```
> (d)
> ```cpp
> p3 = &ic;
> ```
> (e)
> ```cpp
> p2 = p1;
> ```
> (f)
> ```cpp
> ic = *p3;
> ```

Assume that all variables was defined properly.

(a) Legal, `const int` to `int` assignment.  
(b) Illegal, cannot assign pointer to `const` to pointer to `nonconst`.  
(c) Illegal, cannot assign `const` variable to pointer to `nonconst`.  
(d) Illegal, cannot assign `const` pointer.  
(e) Illegal, cannot assign `const` pointer.  
(f) Illegal, cannot assign `const` variable.  

