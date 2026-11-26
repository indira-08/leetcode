
#include <stdio.h>
#include <stdlib.h>

char** fizzBuzz(int n, int* returnSize)
{
    char **ans = malloc(n * sizeof(char*));

    for(int i = 1; i <= n; i++)
    {
        ans[i-1] = malloc(12 * sizeof(char));

        if(i % 3 == 0 && i % 5 == 0)
            sprintf(ans[i-1], "FizzBuzz");

        else if(i % 3 == 0)
            sprintf(ans[i-1], "Fizz");

        else if(i % 5 == 0)
            sprintf(ans[i-1], "Buzz");

        else
            sprintf(ans[i-1], "%d", i);
    }

    *returnSize = n;
    return ans;
}
    
