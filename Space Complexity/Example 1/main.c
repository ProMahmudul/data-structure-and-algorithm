#include <stdio.h>
#include <stdlib.h>

/*Space complexity = O(1)*/

int main()
{
    int n;

    scanf("%d", &n);

    if(n % 2 == 0){
        printf("%d is an even number. \n", n);
    } else {
        printf("%d is an odd number. \n", n);
    }

    return 0;
}
