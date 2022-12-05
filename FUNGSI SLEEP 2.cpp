#include <curses.h>
#include <unistd.h>
using namespace std;

int main(){
	initscr();
	
	mvprintw(2,4, "D");
	refresh();
	sleep(500); // Delay 0,5 detik
	
	mvprintw(2,5, "D");
	refresh();
	sleep(500); // Delay 0,5 detik
	
	mvprintw(2,6, "P");
	refresh();
	sleep(500); // Delay 0,5 detik
	
	getch();
	endwin();
	
	return 0;
}
