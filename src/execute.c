#include "../include/input.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int run(char *input[]) {

  pid_t p = fork();

  if (p > 0) {
    wait(NULL);
  } else if (!p) {
    execvp(input[0], input);

    perror("Error: ");
    exit(1);
  } else {
    printf("Forking failed\n");
  }
  return 0;
}
