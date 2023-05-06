# Section 1.3 _A word about comments_

## Exercise 1.08

> Indicate which, if any, of the following output statements are legal:
> ```
> std::cout << "/*";
> std::cout << "*/";
> std::cout << /* "*/" */;
> std::cout << /* "*/" /* "/*" */;
> ```
> After you’ve predicted what will happen, test your answers by compiling a program with each of these statements. Correct any errors you encounter.

```
std::cout << "/*";                  // correct
std::cout << "*/";                  // correct
std::cout << /* "*/" */;            // incorrect
std::cout << /* "*/" /* "/*" */;    // correct
```
