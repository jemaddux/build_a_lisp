Polish notation is where the operator comes the operands. Like so:

+ 1 2 6            instead of  1 + 2 + 6
+ 6 (* 2 9)        instead of  6 + (2 * 9)
/ (* 10 2) (+ 4 2) instead of  (10 * 2) / (4 + 2)

In Polish notation the operator always comes before all the expressions.

Some Regular expressions in C:
.         Any character is required
a         The character a is required
[abcdef]  Any character in the set abcdef is required
[a-f]     Any character in the range a to f is required
a?        The character a is optional
a+        One or moore of the character a are required
a*        Zero or more of the cahracter a are required
^         The start of input is required
$         The end of input is required



cc -std=c99 -Wall parsing.c mpc.c -ledit -lm -o parsing

