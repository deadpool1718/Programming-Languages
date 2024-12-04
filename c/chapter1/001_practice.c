# include<stdio.h>

int main(){
    int base, hieght;
    printf("What is the base of the triangle\n");
    scanf("%d", &base);
    printf("What is the hieght of the triangle\n");
    scanf("%d", &hieght);
    printf("The area of your triangle is %d", (base*hieght)/2);
    return 0;
}