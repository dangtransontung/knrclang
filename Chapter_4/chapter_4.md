
<h2> Basics of Functions</h2>

- If return type is omitted, `int` is assumed
- The functions can occur in any order in the source file, source program can be split into multiple files
- If different functions are stored in different files `*.c`. then `cc *.c` compiles all files, placing the resulting object code in files `*.o`, then load them all into executable file of `a.out`
- Call routine when calling a function must know that the called function returns a non-int value. We can do this by explicitly declaring the function in calling routine

<h2> External Variable </h2>
- A C program consists of a set of external objects, either variables or functions
- automatic variables are internal to function, only come to exist when function is called and disappear when it left; external variables retains their values between calls.

<h2> Scope </h2>
- The scope of a name is the part of the program within which the name can be used.
- The scope of external variable or a function last from it's declared to the end of the file being compiled
- If external variable is to be referred before it's defined, must use `extern` declaration
- `Declaration` is different from `Definition`

```
// Definition
int sp;
double val[MAXVAL]
```
they define external variables `sp` and `val`, cause storage  to be set aside for them

```
// Declaration
extern int sp;
extern double val[];
```
These lines are to declare to the rest of the source file but they do not create varaibles or reserve storage for them
- There may be many declarations but ONLY one definition is allowed

<h2> Static variables</h2>
- `static` declaration - limit the scope of that object to the rest of the source file being compiled
```
// getch.c
static char buf[BUFSIZE];
static int bufp = 0;

int getch(void) {}

void ungetch(int c) {}
```
In this code, no other routine will be able to access `buf` and `bufp`.
- Same logic applied to static functions
- `internal static` variable is only visible inside the function. But it DOES NOT disappear when the function returns its value. It works as a storage for the function

<h2> Register Variables</h2>
- `register` declaration advides compiler that the variable is heavily used so that it may place the variable in machine registers (compiler may ignore the advice)
- can only be applied to automatic variables and formal parameters of function
- it's not possible to take address of register variable (`&` operator), regardless whether the compiler putting it in register or not

<h2> Block structure </h2>
- Automatic variables, including formal parameters would hide external variables and functions of the same name (shadowing)

<h2> Initialization </h2>
- Without explicit initialization, external & static variables are guaranteed to be 0; automatic and register variables are undefined
- External and static variables, initializer must be constant expression, done once, conceptually before execution of program
- Automatic variables not restricted to constant initialization

<h2> 4.11 C Preprocessor</h2>


