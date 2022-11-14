#include <iostream>
#include <stdbool.h>


bool isLeapYear(int year){// function to check if the year is leap year
    if(year % 4 != 0) return false;
    else if(year % 100 != 0) return true;
    else if(year % 400 != 0 ) return false;
    else return true;
};

int numberOfDays(int month, int year){// Function to count the number of days in a month

       if(month==1 || month==3 || month==5|| month==7|| month==8 || month==10 || month==12){
            printf("Month %d of %d has 31 days!", month, year);
        }else if(month==4 || month==6 || month==9 || month==11){
            printf("Month %d of %d has 30 days!", month, year);
        }else{
            if(isLeapYear(year)){//calling the fuction if the year is leap year or nost. 
                printf("Month %d of %d has 29 days!", month, year);
            }else{
                printf("Month %d of %d has 28 days!", month, year);
            }
        }
};



int main(){
    int day, year;
    printf("Enter month number and year: ");
    scanf("%d  %d", &day,&year);
    numberOfDays(day,year);//calling the function to count the number of day in a month. 
}
