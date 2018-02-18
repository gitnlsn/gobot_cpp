using namespace std;

#include <iostream>
#include <string>

#include "headers/commands.h"
#include "headers/userInterface.h"
#include "headers/errors.h"
#include "headers/gameStorage.h"

#define MOVE_NONE  0
#define MOVE_BLACK 1
#define MOVE_WHITE 2

// 1) get_command
int get_command(){
   
   cout << "Enter command." << endl;
   //declaration
   int      error    = ERROR_NONE;
   string   input;
   
   // processing
   error = read_input(input);
   return indentify_command(input);
   
}// end - get_input

// 2) read_input
int read_input(string &input){
// TODO: command invalid
   cin >> input;
   return 0;
}// end - read_input

// 3) indentify_command
int indentify_command(string input){
   
   cout << "Identifiying command." << endl;
   // cout << input << endl;
   if (input == "m") {
      cout << "Command read: CMD_MOVE." << endl;
      return CMD_MOVE;
   } // end - if
   if (input == "s") {
      cout << "Command read: CMD_STAT" << endl;
      return CMD_STAT;
   } // end - if
   if (input == "u") {
      cout << "Command read: CMD_UNDO" << endl;
      return CMD_UNDO;
   } // end - if
   if (input == "b") {
      cout << "Command read: CMD_BOARD" << endl;
      return CMD_BOARD;
   } // end - if
   if (input == "q") {
      cout << "Command read: CMD_EXIT" << endl;
      return CMD_EXIT;
   } // end - if
   cout << "Command read: CMD_NONE" << endl;
   return CMD_NONE;
}// end indentify_command

// 4) read_Position
// TODO: resolve error for non integer format
int read_position(int &pos_x, int &pos_y){
   cout << "Enter x,y position." << endl;
   cin >> pos_x;
   cin >> pos_y;
   cout << "Position entered: " << pos_x << "," << pos_y << endl;
   return ERROR_NONE;
}// end - get_args

// 5) print_board
// int print_board(int board[BOARD_SIZE][BOARD_SIZE]){
//    cout << "Printing board position." << endl;
//    for (int i=0; i<BOARD_SIZE; i++){
//       for (int j=0; j<BOARD_SIZE; j++){
//          if (board[i][j] == MOVE_BLACK) {
//             cout << "B";
//             continue;
//          }
//          if (board[i][j] == MOVE_WHITE) {
//             cout << "W";
//             continue;
//          }
//          cout << ".";
//          // if (board[i][j] == MOVE_NONE ) cout << ".";
//       } // end - for horizontal
//       cout << endl;
//    } // end -  for vertical
//    cout << endl;
// }// end - print_board

// TODO: misses output interfaces