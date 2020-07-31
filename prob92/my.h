/*
** EPITECH PROJECT, 2018
** CPool_Day09_2018
** File description:
** my library headers
*/

#ifndef MY_H_
#define MY_H_

typedef enum {
    SUCCESS = 0,
    FAILURE = 84,
} return_values_t;

typedef	unsigned int uint;

unsigned int my_compute_power_rec(int nb, int p);
char *my_itoa(int nb);
int ctoi(char const c);

#endif
