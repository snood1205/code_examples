#include <stdio.h>


int main()
{
        int i;
        for (i = 0; i <= 100; i++)
                if (i % 15 == 0)
                        puts("FizzBuzz");
                else if (i % 5 == 0)
                        puts("Fizz");
                else if (i % 3 == 0)
                        puts("Buzz");
                else
                        printf("%d\n", i);
}
