#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv)
{
    int fd, f_size, i = o, num_lett = 1024;
    char *buff = NULL, **cmd_lines = NULL, **w_spaces = NULL;
    unsigned int j = 0;
    stack_t **stack;

    buff = malloc(num_lett * sizeof(char));
    if(!buff)
    {
        perror("Error: malloc failed");
        return(EXIT_FAILURE);
    }   
    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        perror("Error: Can't open file");
        return(EXIT_FAILURE);
    }
    f_size = read(fd, buff, num_lett)
    buff[size] = 00;
    cmd_lines = tokenizer

}
