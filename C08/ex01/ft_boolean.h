#include <unistd.h>

#define SUCCESS 0
#define TRUE 1
#define FALSE 0

#define t_bool int
#define EVEN(x) (x % 2 == 0 ? TRUE : FALSE)

#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"