How to build the c program:
cc -std=c99 -Wall hello_world.c -o hello_world
How to run said program
./hello_world

C programs consist of functions definitions and structure definitions. Eg it is a list of functions and types. The functions can call themselves of other functions
Layers of complexity are built in C by calling functions in other libraries or by using their data types. C programs always start the main(). Variables are named data items. Function manipulate Variables. All C variables have an explicit type which is either built into the language or built by the programmer.

Pointers are a slightly different verrsion of a normal type that is declared by adding as asterisk like so: int* some_int; . Book says not to worry about what they are right now but they are useful for strings or lists. For example strings in C are declared by the pointer type char* which is a list of characters (A string, duh). Strings can also be declared litterally with "double qutoes".

Conditionals in C are like so:
if (x > 10 && y < 4){
  // Do stuff
} else {
  // Do other stuff
}

Loops are simple in that they work until some counter runs through or until a condition becomes false.

int i = 10;
while (i > 0){
  puts("In the Loop");
  i -= 1;
}

Also there are for loops like this:

for (int i = 0, i < 10; i++){
  puts("in the loop");
}
