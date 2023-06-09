# Section 2.2.1 _Variable definitions_

## Exercise 2.09

> Explain the following definitions. For those that are illegal, explain what’s wrong and how to correct it.
>
> <ol type="a">
>   <li><code>std::cin >> int input_value;</code></li>
>   <li><code>int i = { 3.14 };</code></li>
>   <li><code>double salary = wage = 9999.99;</code></li>
>   <li><code>int i = 3.14;</code></li>
> </ol>

<ol type="a">
    <li>
        Illegal, cannot initilize variable using streams. Fixed code:<br>
        <code>int input_value; std::cin >> input_value;</code>
    </li>
    <li>
        Illegal, cannot initialize using <code>{ }</code>, due to the loss of information. Fixed code (<i>subsection d</i>):<br>
        <code>int i = 3.14;</code>
    </li>
    <li>
        Illegal, cannot initialize list of variables using <code>=</code> operator. Fixed code:<br>
        <code>double salary, wage = 9999.99;</code>
    </li>
    <li>
        Correct.
    </li>
</ol>



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

