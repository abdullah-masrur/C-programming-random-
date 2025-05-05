#include <string.h>

#define MAX_TASKS 5

int main() {
    int i, ch;
    char tasks[MAX_TASKS][80];

    initscr(); // Initialize ncurses
    noecho(); // Disable echoing of characters
    cbreak(); // Disable line buffering

    // Clear the screen and move the cursor to the top-left corner
    clear();
    mvprintw(0, 0, "To Do");

    // Create input boxes
    for (i = 0; i < MAX_TASKS; i++) {
        mvprintw(i + 2, 2, "Task %d: ", i + 1);
        getstr(tasks[i]);
    }

    // Print the entered tasks
    mvprintw(MAX_TASKS + 3, 2, "Your tasks:");
    for (i = 0; i < MAX_TASKS; i++) {
        mvprintw(i + MAX_TASKS + 4, 2, "%s", tasks[i]);
    }

    getch(); // Wait for a key press
    endwin(); // End ncurses mode

    return 0;
}
