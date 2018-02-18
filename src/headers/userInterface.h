#ifndef USERINT_H
#define USERINT_H

#define BOARD_SIZE 9

int get_command         ();
int read_input          (string &input                      );
int indentify_command   (string input                       );
int read_position       (int &pos_x, int &pos_y             );
int print_board         (int board[BOARD_SIZE][BOARD_SIZE]  );

#endif