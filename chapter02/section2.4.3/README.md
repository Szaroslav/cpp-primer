# Section 2.4.3 _Top-level_ `const`

## Exercise 2.30

> For each of the following declarations indicate whether the object being declared has top-level or low-level `const`.
>
> ```cpp
> const int v2 = 0; int v1 = v2;
> int *p1 = &v1, &r1 = v1;
> const int *p2 = &v2, *const p3 = &i, &r2 = v2;
> ```

- `v2` has top-level `const`;  
- `p2` has low-level `const`;
- `p3` has both top- and low-level `const`s;
- `r2` has low-level `const`.



## Exercise 2.31

> Given the declarations in the previous exercise determine whether the following assignments are legal. Explain how the top-level or low-level `const` applies in each case.
>
> ```cpp
> r1 = v2;
> p1 = p2; p2 = p1;
> p1 = p3; p2 = p3;
> ```

- `r1 = v2;`, illegal, `v2` is type of `const int`.
- `p1 = p2;`, illegal, the low-level `const` to `noconst` assignment.
- `p2 = p1;`, legal, p2 has the low-level `const`.
- `p1 = p3;`, legal, a top-level `const` is ignored.
- `p2 = p3;`, legal, a top-level `const` is ignored, both variables have the low-level one.

