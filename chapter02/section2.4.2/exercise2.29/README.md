# Section 2.4.2 _Pointers and_ `const`

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
