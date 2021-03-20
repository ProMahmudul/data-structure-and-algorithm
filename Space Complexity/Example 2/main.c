#include <stdio.h>
#include <stdlib.h>

/*Space complexity = O(n)*/

int main()
{
    int i, n, even[101];

    for(i = 0; i < 101; i++){
        even[i] = 0;
    }

    for(i = 0; i < 101; i += 2){
        even[i] = 1;
    }

    scanf("%d", &n);

    if(even[n]){
        printf("%d is an even number. \n", n);
    } else {
        printf("%d is an odd number. \n", n);
    }

    return 0;
}
