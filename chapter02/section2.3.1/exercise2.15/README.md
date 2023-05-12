# Section 2.3.1 _References_

## Exercise 2.15

> Which of the following definitions, if any, are invalid? Why?
>
> (a)
> ```cpp
> int ival = 1.01;
> ```
> (b)
> ```cpp
> int &rval1 = 1.01;
> ```
> (c)
> ```cpp
> int &rval2 = ival;
> ```
> (d)
> ```cpp
> int &rval3;
> ```


(a) Valid, integer definition.  
(b) Invalid, reference to a literal.  
(c) Valid, reference to another integer variable.  
(d) Invalid, reference must be defined with another variable.
