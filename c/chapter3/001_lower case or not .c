# include<stdio.h>

int main(){
    char ch;
    // 97-122 = a-z ASCII value
    printf("Enter the character\n");
    scanf("%d", &ch);
    if(ch>=97 && ch<=122){
        printf("It is lowercase\n");

    }
    else{
        printf("It is not lowercase");
    }
    return 0;
}