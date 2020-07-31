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
    TRUE = 1,
    FALSE = 0,
    YES = 1,
    NO = 0,
} return_values_t;

typedef	unsigned int uint;

unsigned int my_strlen(char const *str);
int my_atoi(char const *str);
char *my_strdup(char const *src);
char *my_revstr(char *str);
char *my_itoa(int nb);
char itoc(int const i);

#endif
