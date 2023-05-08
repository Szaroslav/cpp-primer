# Section 2.2.4 _Scope of a name_

## Exercise 2.14

> Is the following program legal? If so, what values are printed?
>
> ```cpp
> int i = 100, sum = 0;
> for (int i = 0; i != 10; ++i)
>   sum += i;
> std::cout << i << " " << sum << std::endl;
> ```

The above program is correct and legal. It prints:
```
100 45
```
