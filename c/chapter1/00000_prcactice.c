# include<stdio.h>

int main(){
    int principal, years;
    float rate;
    printf("What is the principal of the amount\n");
    scanf("%d", principal)
    printf("What is the years of the amount\n");
    scanf("%d", years);
    printf("What is the rate of the amount\n");
    scanf("%f", rate);
    printf("The simple Interset of your amount is %f", (principal * years * rate)/100);
    return 0;
}