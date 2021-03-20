#include <stdio.h>
#include <stdlib.h>


/*Time complexity = O(1)*/

int main()
{
    int n, result;
    scanf("%d", &n);
    result = n * (n + 1) / 2;
    printf("result = %d\n", result);
    return 0;
}
