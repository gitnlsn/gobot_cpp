#GOBOT

## Description
GOBOT is meant to be a Go game program written in C++ language, which can play go with human. No cmake was used yet.

## Usage
Usage was not defined yet.

## Components

1. Game Storage (STO)
   - Stores the game history
   - Presents an interface to manipulate the game.

2. Communication Interface (COM)
   - CLI: command line interface

3. Main Controller (MC)
   - Receives the communication interface commands
   - Process the commands
   - Manipulates all componenst

4. Computer Artificial Intelligence (CAI)
   - Guess a move, which is supposed to be good.
   - Estimates score
   - 

## MVC Architeture
- Model: STO
- View: COM
- Controller: MC and CAI

We separate CAI from MC so that CAI can be given special attention.

## State Machine

Since the program is run, it waits in iddle mode, where it waits the user to input a command.
Main commands are supposed to be:

1. show game status
2. choose move / undo
3. estimate score
4. load / save game
5. help
6. exit
