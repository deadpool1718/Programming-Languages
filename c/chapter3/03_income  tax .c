# include<stdio.h>

int main(){
    float tax = 0, income;
    printf("Enter your income\n");
    scanf("%f", &income);

    if(income>=250000 && income < 500000)
    {
        tax = tax + 0.05*(income - 250000);
    }

    if(income>=500000 && income < 1000000)
    {
        tax = tax + 0.20*(income - 5000000);
    }

    if(income>=1000000 )
    {
        tax = tax + 0.30*(income - 1000000);
    }
    printf("Your net tax is to be paid by 26th of this month is %f\n", tax);
    
    return 0;
}