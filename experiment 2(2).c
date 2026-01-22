#include<stdio.h>
int main(){
    int leapYear;
    printf("Enter year: ");

    scanf("%d",&leapYear);



    if(leapYear%4 == 0){ 

        printf("year is leap year");
}   else{
        printf("year is not leap year");
}
} 

