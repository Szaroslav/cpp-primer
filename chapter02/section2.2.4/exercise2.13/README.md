# Section 2.2.4 _Scope of a name_

## Exercise 2.13

> What is the value of `j` in the following program?
>
> ```cpp
> int i = 42;
> int main()
> {
>   int i = 100;
>   int j = i;
> }
> ```

`j` is equal $100$, because local scope hides global scope equivalents.
