# Section 2.1.3 _Literals_

## Exercise 2.5

> Determine the type of each of the following literals. Explain the differences among the literals in each of the four examples:
>
> <ol type="a">
>   <li><code>’a’</code>, <code>L’a’</code>, <code>"a"</code>, <code>L"a"</code></li>
>   <li><code>10</code>, <code>10u</code>, <code>10L</code>, <code>10uL</code>, <code>012</code>, <code>0xC</code></li>
>   <li><code>3.14</code>, <code>3.14f</code>, <code>3.14L</code></li>
>   <li><code>10</code>, <code>10u</code>, <code>10.</code>, <code>10e-2</code></li>
> </ol>

`[]` _symbol means array type_

<ol type="a">
    <li>
        <br>
        <code>’a’</code> - <code>char</code>,<br>
        <code>L’a’</code> - <code>wchar_t</code>,<br>
        <code>"a"</code> - <code>string</code> or <code>char[]</code>,<br>
        <code>L"a"</code> - <code>wchar_t[]</code><br>
        Different character coding.
    </li>
    <li>
        <br>
        <code>10</code> - <code>int</code>,<br>
        <code>10u</code> - <code>unsigned int</code>,<br>
        <code>10L</code> - <code>long</code>,<br>
        <code>10uL</code> - <code>unsigned long</code>,<br>
        <code>012</code> - <code>int</code> (octal notation),<br>
        <code>0xC</code> - <code>int</code> (hexadecimal notation)<br>
        Integral types but with different types or notations.
    </li>
    <li>
        <br>
        <code>3.14</code> - <code>double</code>,<br>
        <code>3.14f</code> - <code>float</code>,<br>
        <code>3.14L</code> - <code>long double</code><br>
        Different floating-point types.
    </li>
    <li>
        <br>
        <code>10</code> - <code>int</code>,<br>
        <code>10u</code> - <code>unsigned int</code>,<br>
        <code>10.</code> - <code>double</code>,<br>
        <code>10e-2</code> - <code>double</code><br>
        Number types, the first two are integer, the next two are floating-point ones. <code>10e-2</code> uses scientific notation.
    </li>
</ol>
