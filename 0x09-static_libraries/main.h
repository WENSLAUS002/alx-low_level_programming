#!/bin/bash
#ifndef MY_H_
# define MY_H_

# include "my_macro.h"
# include "my_typedef.h"

char*get_next_line(int const fd);
intmatch(char *str1, char *str2);
floatmy_atof(const char *str);
intmy_atoi(const char *str);
intmy_char_isalpha(const char letter);
intmy_char_islower(const char letter);
intmy_char_isnum(const char letter);
intmy_char_isprintable(const char letter);
intmy_char_isupper(const char letter);
intmy_cmp(const char *str1, const char *str2);
intmy_dprintf(int fd, const char *format, ...);
char**my_envcpy(char **environ);
char*my_epur_str(char *str);
voidmy_exit(int exit_code, const char *format, ...);
intmy_find_prime_sup(int nbr);
voidmy_free_2d_tab(char **tab);
char*my_getenv(char **env, const char *to_find);
intmy_is_prime(const int nbr);
char*my_itoa(int nbr);
intmy_max_int_tab(const int *tab, const t_uint size);
intmy_min_int_tab(const int *tab, const t_uint size);
intmy_power(const int nbr, int power);
voidmy_printenv(char **env, char separator);
intmy_printf(const char *format, ...);
char*my_realloc(char *str, int to_add);
char*my_revstr(char *str);
voidmy_setenv(char ***env, char *to_change, char *new_value);
voidmy_sort_int_tab(int *tab, int size);
intmy_square_root(const int nbr);
char*my_strcapitalize(char *str);
intmy_strcmp(const char *str1, const char *str2);
char*my_strdup(const char *src);
intmy_str_isalpha(const char *str);
intmy_str_islower(const char *str);
intmy_str_isnum(const char *str);
intmy_str_isprintable(const char *str);
intmy_str_isupper(const char *str);
intmy_strlen(const char *str);
char*my_strlowcase(char *str);
char*my_strncat(char *dest, const char *src, int nbr);
intmy_strncmp(const char *str1, const char *str2, t_uint nbr);
char*my_strncpy(char *dest, const char *src, t_uint nbr);
char*my_strstr(char *str, const char *to_find);
char**my_str_to_wordtab(char *clean_str);
char*my_strupcase(char *str);
voidmy_swap(int *ptr_a, int *ptr_b);
char*my_uitoa(t_uint nbr);
voidmy_unsetenv(char ***env, char *to_unset);
intnmatch(char *str1, char *str2);

#endif /* !MY_H_ */
