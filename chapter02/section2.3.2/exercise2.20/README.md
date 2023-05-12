# Section 2.3.2 _Pointers_

## Exercise 2.20

> What does the following program do?
>
> ```cpp
> int i = 42;
> int *p1 = &i;
> *p1 = *p1 * *p1;
> ```

Calculating square of the `i` ($42$).
