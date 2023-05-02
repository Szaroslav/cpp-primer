# 1.4.2 The `for` statement

## Exercise 1.14

> Compare and contrast the loops that used a `for` with those using a `while`. Are there advantages or disadvantages to using either form?

The `for` loops header contains 3 parts: an init-statement, a condition and an expression, the `while` loops have only a condition part. 

### `for`
The best case of use is, when you'd like to do something within some range, e.g. print all numbers from 0 to 100. The `for` loop is able to emulate the `while` loop:
```cpp
for (; condition;) {
    // do something
}
```

### `while`
The best case of use is, when you'd like to do something without the need for a auxiliary variable, e.g. call a function until the condition flag is `true`.