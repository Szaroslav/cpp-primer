# Section 2.4.3 _Top-level_ `const`

## Exercise 2.30

> For each of the following declarations indicate whether the object being declared has top-level or low-level `const`.
>
> ```cpp
> const int v2 = 0; int v1 = v2;
> int *p1 = &v1, &r1 = v1;
> const int *p2 = &v2, *const p3 = &i, &r2 = v2;
> ```

- `v2` has low-level `const`;  
- `p2` has low-level `const`;
- `p3` has both top- and low-level `const`s;
- `r2` has low-level `const`.

