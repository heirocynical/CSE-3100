#include <stdio.h>

int main(void){
    int sum = 0;
    int i = 2; // Start with the first positive even integer

    while (i < 200) {
        sum += i;
        i += 2; // Increase by 2 to reach the next even number
    }

    printf("Hello world!\n");
    return 0;
}
