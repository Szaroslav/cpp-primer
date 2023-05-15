# Section 2.4 `const` _qualifier_

## Exercise 2.26

> Which of the following are legal? For those that are illegal, explain why.
>
> (a)
> ```cpp
> const int buf;
> ```
> (b)
> ```cpp
> int cnt = 0;
> ```
> (c)
> ```cpp
> const int sz = cnt;
> ```
> (d)
> ```cpp
> ++cnt; ++sz;
> ```

(a) Illegal, `const` object must be initilized  
(b) Legal, `nonconst`, doesn't matter whether is initilized or not.  
(c) Legal, initializing `const` by `nonconst`.  
(d) Illegal, `sz` is type of `const int`, cannot be changed.

