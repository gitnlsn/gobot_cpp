using namespace std;

#include <iostream>
#include <string>
#include "../headers/commands.h"
#include "../headers/userInterface.h"

// TODO: create proper errors header after listing all important errors
#define ERROR_NONE   0
#define ERROR_FOUND  1


// 1) get_command
int get_command(){

   //declaration
   int      error    = ERROR_NONE;
   string   input;
   
   // processing
   error    = read_input(input);
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
   // cout << input << endl;
   if (input == "m") return CMD_MOVE;
   if (input == "s") return CMD_STAT;
   if (input == "u") return CMD_UNDO;
   if (input == "b") return CMD_BOARD;
   if (input == "q") return CMD_EXIT;
   return CMD_NONE;
}// end indentify_command

// 4) read_Position
int read_Position(int position[]){
   int pos_x, pos_y;
   cin >> pos_x;
   cin >> pos_y;
   return ERROR_NONE;
}// end - get_args

// TODO: misses output interfaces