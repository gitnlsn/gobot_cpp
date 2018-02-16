#include <iostream>
#include <string>
#include "communicationInterface.h"

using namespace std;

#define CMD_NONE  0
#define CMD_EXIT  1
#define CMD_MOVE  2
#define CMD_BOARD 3
#define CMD_UNDO  4
#define CMD_STAT  5

#define ERROR_NONE   0
#define ERROR_FOUND  1

int get_command(char* args);
int read_input(string input);
int indentify_command(string input);
int read_Position(int position[]);

//jfkalkjfdsalçjfdskaldfjçsaljfçaskljfkkasdçlfddsa

int get_command(char* args){
   
   // declarations
   int      error    = ERROR_NONE;
   int      command  = CMD_NONE;
   string   input;
   
   // processement
   error    = read_input(input);
   command  = indentify_command(input);
   
}// end - get_input

int read_input(string input){
   cin >> input;
   return 0;
}// end - read_input

int indentify_command(string input){
   if (input == "m") return CMD_MOVE;
   if (input == "s") return CMD_STAT;
   if (input == "u") return CMD_UNDO;
   if (input == "b") return CMD_BOARD;
   if (input == "q") return CMD_EXIT;
   return CMD_NONE;
}// end indentify_command

int read_Position(int position[]){
   int pos_x, pos_y;
   cin >> pos_x;
   cin >> pos_y;
   return ERROR_NONE;
}// end - get_args