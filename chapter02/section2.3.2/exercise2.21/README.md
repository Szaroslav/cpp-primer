# Section 2.3.2 _Pointers_

## Exercise 2.21

> Explain each of the following definitions. Indicate whether any are illegal and, if so, why.
>
> ```cpp
> int i = 0;
> ```
> (a)
> ```cpp
> double* dp = &i;
> ```
> (b)
> ```cpp
> int *ip = i;
> ```
> (c)
> ```cpp
> int *p = &i;
> ```

(a) Valid, initializating `dp` pointer with address different from `double` type.  
(b) Invalid, initializing `ip` pointer with value of `i`.  
(c) Valid, initializating `p` pointer with address of `i`.
