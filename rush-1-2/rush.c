/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-rush1-yacine.chlendi
** File description:
** rush-1-2
*/

void write_line1(int x)
{
    for (int i =1;i<= x;i++) {
        if (check_ligne(i, x) == 0) {
            my_putchar('\\');
            my_putchar('\n');
        }
        if (check_ligne(i, x) == 1) {
            my_putchar('/');
        }
        if (check_ligne(i, x) == 2) {
            my_putchar('*');
        }
    } 
}

void write_line2(int x)
{
    for (int i = 1; i <= x; i++) {
        if (check_ligne(i, x) == 0) {
            my_putchar('*');
            my_putchar('\n');
        }
        if (check_ligne(i, x) == 1) {
            my_putchar('*');
        }
        
        if (check_ligne(i, x) == 2) {
            my_putchar(' ');
        }
    }
}

void write_line3(int x){
    for (int i =1;i<= x;i++) {
        if (check_ligne(i, x) == 0) {
            my_putchar('/');
        }
        if (check_ligne(i, x) == 1) {
            my_putchar('\\');
        }
        if (check_ligne(i, x) == 2) {
            my_putchar('*');
        }
        
    }
}

void check_col(int y, int x)
{
    for (int j = 1; j < y; j++) {
        if (j == 1) {
            write_line1(x);
        }
        if (j == y-1) {
            write_line3(x);
        } else {
            write_line2(x);
        }
    }
}

void rush(int x, int y)
{
    if (x == 1) {
        for (int j = 1; j <= y; j++) {
           write_line2(1);
        }
        return;
    }
    if (y == 1) {
        for (int j = 1; j <= x; j++) {
           my_putchar('*');
        }
        return;
    }
    if (y == 1 && x == 1) {
        my_putchar('*');
        return;
    }
    check_col(x, y);
}
