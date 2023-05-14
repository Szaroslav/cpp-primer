# Section 2.3.2 _Pointers_

## Exercise 2.24

> Why is the initialization of `p` legal but that of `lp` illegal?
>
> ```cpp
> int i = 42;
> void *p = &i;
> long *lp = &i;
> ```

`p` is type of `void *`, so it may point to any type, instead of `lp`, which has concrete type (`long`).
