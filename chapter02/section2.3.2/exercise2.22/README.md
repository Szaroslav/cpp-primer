# Section 2.3.2 _Pointers_

## Exercise 2.22

> Assuming `p` is a pointer to `int`, explain the following code:
>
> ```cpp
> if (p) // ...
> if (*p) // ...
> ```

The first line checks, whether the pointer is initialized or/and different from `0` (`nullptr`, `NULL`).  
The second line checks, whether the pointer value of pointing object is different from `0`.
