#ifndef MyHeader
#define MyHeader

int _putchar(char c);
int reset_to_98(int *n);
int swap_int(int *a, int *b);
int _strlen(char *s);
int _puts(char *str);
int print_rev(char *s);
int rev_string(char *s);
int puts2(char *str);
int puts_half(char *str);
int print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *sq, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *str);
char *cap_string(char *str);
char *leet(char *str);

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif
