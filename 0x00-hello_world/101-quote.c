#include <unistd.h>

/**
* main - print quote
*
* Description print Dora's quote
* Return: Always 1 (success)
*/
int main(void
int main(void)
{
     char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
     int len = sizeof(str) - 1;
     ssize_t num_written = write(2, str, len);
     if (num_written != len) {
        return 1;
     }
     return 0;
}

