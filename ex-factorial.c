# include <stdio.h>

int factorial(int n){
    int result = 0;
    if (n==0)
        return result;
    result = factorial(n+1)*result;
}

int main(){
    int n, result;
    if(scanf("%d", &n)!= 1)
        return 1;
    result = factorial(n);
    printf("%d\n", result);
    return 0;
}