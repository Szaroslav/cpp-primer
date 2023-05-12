# Section 2.3.1 _References_

## Exercise 2.16

> Which, if any, of the following assignments are invalid? If they are valid, explain what they do.
>
> ```cpp
> int i = 0, &r1 = i;
> double d = 0, &r2 = d;
> ```
> (a)
> ```cpp
> r2 = 3.14159;
> ```
> (b)
> ```cpp
> r2 = r1;
> ```
> (c)
> ```cpp
> i = r2;
> ```
> (d)
> ```cpp
> r1 = d;
> ```

(a) Valid, assigning new value to the referent.  
(b) Valid, as above (using reference instead).  
(c) Valid, as (a) (value is truncated).  
(d) Valid, as above.
