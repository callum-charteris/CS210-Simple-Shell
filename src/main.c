/**
This is the SUSHI Shell - Strathclyde Unix-type SHell Implementation

⠀⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣤⣤⣤⣀⣀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⣠⣴⣾⣿⡿⠿⠛⠛⠛⠛⠛⠛⠛⠻⠿⢿⣿⣶⣤⣄⠀⠀
⢠⣾⡿⠛⠉⠀⠀⠀⠀⣀⣀⣀⣀⣀⣀⠀⠀⠀⠀⠉⠛⢿⣷⡀
⣿⣿⠀⠀⠀⠀⠀⢶⣿⣿⣿⣿⣿⣿⣿⣿⡶⠀⠀⠀⠀⠈⣿⣷
⣿⣿⣷⣄⡀⠀⠀⠀⠀⠉⠉⠉⠉⠉⠉⠀⠀⠀⠀⢀⣠⣾⣿⣿
⣿⣿⣿⣿⣿⣿⣶⣦⣤⣤⣤⣄⣠⣤⣤⣤⣴⣶⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⡿⠛⢿⣿⣿⣿⣿⡿⠛⢿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣦⣾⣿⣿⣿⣿⣷⣴⣿⣿⣿⣿⣿⣿⣿⣿
⢻⣿⣿⣿⣿⣿⣿⣏⠀⠉⠛⠛⠛⠛⠉⠀⣹⣿⣿⣿⣿⣿⣿⡟
⠀⠻⣿⣿⣿⣿⣿⣿⣿⣶⣦⣤⣤⣴⣶⣿⣿⣿⣿⣿⣿⣿⠟⠀
⠀⠀⠈⠙⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠋⠁⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠉⠉⠙⠛⠛⠛⠛⠋⠉⠉⠀⠀⠀⠀⠀⠀⠀
**/

#include "../include/execute.h"
#include "../include/externelRunner.h"
#include "../include/input.h"

int main(void) {
  char *input[INPUT_LEN];
  while (get_input(input)) {

    run(input);
    clear(input);
  }
}
