

<h2>2.4 Declarations </h2>
- All variables must be declared before use
- A variable can be initialized in its declaration
- External & Static variables are initialized to 0
- Automatic variables without explicit initializer have undefined values

<h2>Type conversion</h2>
- Automatic conversions - convert from `narrower` to `wider` type without losing information
- `char` is just small integer => freely used in arithmetic operations
- `atoi` convert string digit into numeric equivalent
- library `<ctype.h>` defines a family of fucntions providing conversions that are independet of character set

- `char` is "signed" or "unsigned" depends on machine (on some, leftmost bit 1 would convert it to negative integer; while on the other it would be padded with 0 on the leftmost, then always result in positive integer) !Specify "signed" or "unsigned" when use `char` to store non-character variables

- Implicit arithmetic operations would convert narrower type into wider type if two operands has different types
- Conversion rule is complicated when having `unsigned` operands
- Conversion takes place in "assignment" operation
- Long integers converted to shorter ones by dropping excess high-order bits
- double -> float, either "rounded" or "truncated" is machine-dependent
- type conversion when arguments are passed to functions
- explicit conversion using `cast`

                                                  
<h2>2.9 Bitwise Operators</h2>
- `&` used to mask off some set of bits 
    n = n & 0177 set all to zero except low-order 7 bits of n (0177 is octal value with binary value of 000|001|111|111)<br>
    x = x & ~077 set the last 6 bits to 0 (077 is octal value of 000|111|111)

<h2> 2.10 Assignment operators & expression</h2>
- assignment operation return the value assigned (e.g. (c = getchar()) return the value of input char)

<h2> 2.11 Conditional Expression</h2>
x = (n > 0) ? f: n; if f is float and n is integer, x is float no matter whether n > 0 or not

<h2> Precedence and Order of Operations</h2>

- C doesn't sepcify order of evaluation of operands (x = f() + g(); either f or g maybe evaluated first)
```
printf("%d %d\n", ++n, power(2,n));
```
The above code can print out differently on different compilers

Function calls, nested assignment statements, increment, decrement operators cause "side effects" (variables changed as by-product of evaluation of an expression)
=> Writing code depending on order of evaluation is bad programming practice



