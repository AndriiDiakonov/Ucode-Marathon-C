#include "../inc/header.h"

void mx_matrix() {
    mx_color();
    
    int max_y = 0, max_x = 0;    
    getmaxyx(stdscr, max_y, max_x);
    int start_drop[max_x];
    int lenght[max_x];
    int temp[max_x];

    for (int i = 0; i < max_x; i++) {
        start_drop[i] = -1 * (rand() % 80);
        temp[i] = start_drop[i];
        lenght[i] = rand() % 50  - 1;
    }

    int speed = 100;
    int color = 1;
    for (;;) {
        for (int i = 0; i < max_x; i++) {  
            wchar_t random_char = (rand() % 93 + 33);
            if (i % 2 == 0) {
                random_char = ' ';
            }
            mvaddch(temp[i] + 1, i, random_char | COLOR_PAIR(2));      
            mvaddch(temp[i], i, random_char | COLOR_PAIR(color));
            mvaddch(temp[i] - lenght[i], i, ' ' | COLOR_PAIR(color));
            if (temp[i] - lenght[i] > max_y) {
                temp[i] = start_drop[i];
            }
            temp[i]++;
        }

        usleep(1000 * speed);
        nodelay(stdscr,TRUE);
        noecho();
        char ch = getch();
        if (ch == 'q') {
			clear();
			break;
		}
        switch (ch) {
            case '+':
                if (speed > 1) {
                    if (speed <= 11)
                        speed--;
                    else
                        speed -= 10;
                }
                break;
            case '-':
                if (speed < 300) {
                    if (speed <= 10)
                            speed++;
                        else
                            speed += 10;
                }
                break;
            case '0': color = 1; break;
            case '1': color = 2; break;
            case '2': color = 3; break;
            case '3': color = 4; break;
            case '4': color = 5; break;
            case '5': color = 6; break;
            case '6': color = 7; break;
        }
        refresh();
    }
}
