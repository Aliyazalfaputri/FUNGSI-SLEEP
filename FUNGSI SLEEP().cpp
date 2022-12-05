#include <curses.h>
#include <unistd.h>
using namespace std;

int main(){
	initscr();
	\
	mvprintw(2,2, "Hello");
	refresh();
	sleep(2); // Delay 2 detik
	mvprintw(3,2, "World");
	refresh();
	getch();
	endwin();
	
	return 0;
}
