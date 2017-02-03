/**
 * hexpress - a simple tool to see the value, in hexadecimal, of any character input
 *
 *  gcc hexpress.c -o hexpress -lncurses
 */

#include <stdio.h>
#include <ncurses.h>

int main(int argc, char **argv)
{
    int c;
    
    initscr();
    noecho();
    
    printw("-- ctrl+c to exit --\n\n");
    
    while(1)
    {
        c = getch();
        printw("%.2x ", c);
    }
    
    return 0;
}
