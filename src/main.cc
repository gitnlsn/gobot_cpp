using namespace std;

#include <iostream>
#include <string>
#include "../headers/userInterface.h"
#include "../headers/commands.h"

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
      cout << ARGV_PROG_NAME << "running in TestMode" << endl;
      int command;
      do{
         command = get_command();
         cout << command << endl;
      } while(command!=CMD_EXIT);
   }// if TestMode : MODE_TEST
   
   return 0;
}// end - main