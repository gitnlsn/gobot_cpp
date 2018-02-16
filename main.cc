#include <iostream>
#include <string>
using namespace std;


#define ARGV_PROG_NAME  argv[0]
#define ARGV_ARG_1      argv[1]

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
      cout << ARGV_PROG_NAME << "Usage ./gobot t" << endl;
      cout << ARGV_PROG_NAME << "   for test mode" << endl;
      return 0;
   } // check input lenght

   run_mode = get_runMode( ARGV_ARG_1 );
   if ( run_mode==MODE_TEST ){
      cout << ARGV_PROG_NAME << "running in TestMode" << endl;
      do{
         
      } while();
   }// if TestMode : MODE_TEST
   
   return 0;
}// end - main