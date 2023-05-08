# Section 2.2.1 _Variable definitions_

## Exercise 2.10

> What are the initial values, if any, of each of the following variables?
>
> ```cpp
> std::string global_str;
> int global_int;
> int main()
> {
>   int local_int;
>   std::string local_str;
> }
>```

Global built-in variables are initilized with zero value, whereas local ones are undefined. Global or local `string`s are empty (contain only `\0` character).
