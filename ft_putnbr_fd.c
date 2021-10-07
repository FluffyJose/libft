#include <stdio.h>
#include <unistd.h>
#include <fcntl.h> 

void    print_char(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        print_char('-', fd);
        print_char('2', fd);
        ft_putnbr_fd(147483648, fd);
    }
    else if (n < 0)
    {
        print_char('-', fd);
        ft_putnbr_fd(-n, fd);
    }
    else {
        if (n / 10) 
            ft_putnbr_fd(n / 10, fd);
        print_char(n % 10 + '0', fd);
    }
}

// int main(void)
// {
//     int fd;

//     fd = open ("test", O_WRONLY | O_RDONLY);
//     ft_putnbr_fd(100, fd);
// }