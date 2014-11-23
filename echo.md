A REPL lets us interact with our programming language dynamically so that we can test it and play around with it without compiling the code each time. This is also known as an interactive prompt. To start we are building something that echos any imput the user inputs.

The line:
static char input[2048];
is declaring an array of 2048 character. This sounds like a global variable to me comign from Ruby as it is described in the book as "a reserved block of data we can access anywhere from our program". However "the static keyword makes this variable local to this file". So maybe not global?

while(1) is an infinity loop. Simple

fputs is slightly different than puts as it doesn't add a newline character.
fgets gets the input from the user command line. stdin and stdout are the 'file' that the fptus and fgets are writing / reading to/from and come from the <stdio.h>.

Now we are going to add some stuff so that the repl doesn't make the ^[[D characters when we hit the arrow buttons.
Also this behavior is different on Mac and Linux than it is on Windows so we are doing different things for each machine. The library we are using is called editline which gives us the functions readline and add_history.

