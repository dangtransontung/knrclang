
<h2> Statements & Blocks</h2>
- An expression becomes a statement when it's followed by a semicolon
- Braces { } are used to group `declarations` and `statements` together into a compound statement - "block" - syntactically equivalent to a single statement

<h2> If - Else </h2>
- Should use braces for nested if-else

<h2> 3.4 Switch </h2>
- If a case matches the expression value, execution START AT THAT CASE
- Cases serve just as labels, after code for one case is done, it falls through to the next unless taking explicit action to escape

<h2> 3.5 Loops </h2>
`for (expr1; expr2; expr3) statement`
is equivalent to
```
expr1
while (expr2) {
    statement
    expr3;
}
```
- `for (;;)` is an infinite loop

<h2>3.8 Goto labels</h2>
- `break` `continue` only work with the most inner loop
- `goto` can help with deep nested loop logic (e.g. break 3 loops at once)
- code with `goto` can always be written without one :D

