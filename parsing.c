#include <stdio.h>
#include <stdlib.h>
#include "mpc.h"

#include <editline/readline.h>
// #include <editline/history.h>

int main(int argc, char** argv){
  // Print Version and Exit information
  puts("Lispy Version 0.0.0.0.1");
  puts("Press Ctrl-c to Exit\n");

  // Never ending loop
  while (1){
    // Output our prompt
    char* input = readline("lispy> ");
    // Ad input to history
    add_history(input);
    // Echo input back to user
    printf("No you're a %s\n", input);
    // free retrieved input
    free(input);
  }

  return 0;
}
