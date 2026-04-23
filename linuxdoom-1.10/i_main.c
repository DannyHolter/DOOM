// DESCRIPTION:
//	Main program, simply calls D_DoomMain high level loop.
//-----------------------------------------------------------------------------

#include "doomdef.h"
#include "m_argv.h"
#include "d_main.h"

int main(int argc, char **argv) 
{ 
    myargc = argc; 
    myargv = argv; 

    D_DoomMain(); 

    return 0;
} 
