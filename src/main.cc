using namespace std;

#include <iostream>
#include <string>

// components includes
#include "headers/userInterface.h"
#include "headers/gameStorage.h"

// other includes
#include "headers/commands.h"

// TODO: create proper input header if necessary
#define ARGV_PROG_NAME  argv[0]
#define ARGV_ARG_1      argv[1]

// TODO: create proper mode header
#define MODE_NONE       0
#define MODE_TEST       1

int get_runMode(string mode){
   if (mode=="t"){
      return MODE_TEST;
   }
   return MODE_NONE;
}// end - get_runMode

int main (int argc, char *argv[]){
   
   // simple implementation of controller for initial debug
   int run_mode = MODE_NONE;

   if (argc==1){
      cout << "Usage ./gobot t" << endl;
      cout << "  for test mode" << endl;
      return 0;
   } // check input lenght

   run_mode = get_runMode( ARGV_ARG_1 );
   if ( run_mode==MODE_TEST ){
      cout << ARGV_PROG_NAME << ": TestMode" << endl;
      int command;
      int error;
      Game game;
      // int board[BOARD_SIZE][BOARD_SIZE];
      // game.get_board( board );
      int pos_x, pos_y;
      do{
         command = get_command();
         // cout << ARGV_PROG_NAME << ": Command: " << command << endl;
         if (command == CMD_MOVE){
            error = read_position(pos_x, pos_y);
            game.move_make(pos_x, pos_y);
         }
         if (command == CMD_BOARD){
            // game.get_board(board);
            game.print_board();
         }
      } while(command!=CMD_EXIT);
   }// if TestMode : MODE_TEST
   
   return 0;

}// end - main

#define CMD_NONE  0     // no command read
#define CMD_EXIT  1     // user wants to exit program
#define CMD_MOVE  2     // user wants to chose a move
#define CMD_BOARD 3     // user wants to see the board
#define CMD_UNDO  4     // user wants to undo a move
#define CMD_STAT  5     // user wants to see game status