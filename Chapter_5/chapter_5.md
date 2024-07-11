<h2>Pointers & Addresses</h2>

<h2>Address Arithmetic</h2>
`alloc(n)` returns a pointer to n consecutive character positions

Pointer & Integer are NOT interchangable, except for 0. A pointer may be assigned a constant 0 or compared to 0, in which 0 is equivalent of `NULL`

Two pointers can be compared using < > given they're in the same array.

The address of the first element past the end of the array can be used in pointer arithmetic

`p + n` is valid where p is pointer, n is integer; point to the address of n_th object after the one p points to, so `n` here scale by the size of the object

`p - q` is valid where p and q are both pointers

`ptrdiff_t` is large enough to hold signed difference between two pointers

`size_t` is the unsigned integer type returned by `sizeof` operator

<h2>Char pointers & Functions</h2>
In below code, a variable is assigned a pointer to the character array
```C
char *pmessage;
pmessage = "now is the time";

char amessage[] = "now is the time"; // an array
char *pmessage = "now is the time"; // a pointer
```
C doesn't provide any operators for processing entire string as a single unit
`amessage` can be editted by changing some of the char in the array
`pmessage` points to a string constant, would result in undefined behavior if trying to modify string content

