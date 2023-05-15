# Section 2.3.2 _Understanding compound type declarations_

## Exercise 2.25

> Determine the types and values of each of the following variables.
>
> (a)
> ```cpp
> int* ip, i, &r = i;
> ```
> (b)
> ```cpp
> int i, *ip = 0;
> ```
> (c)
> ```cpp
> int* ip, ip2;
> ```

Order from left to right.
(a) `int *`, undefined; `int`, undefined; `int &`, undefined.  
(b) `int`, undefined; `int *`, `nullptr`.  
(c) `int *`, undefined; `int`, undefined.
