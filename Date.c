#include <stdio.h>
int main(){
    int d,m,y;
    printf("Enter date (DD-MM-YYYY): ");
    scanf("%d-%d-%d",&d,&m,&y);
    int daysInMonth[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if((y%4==0 && y%100!=0)||(y%400==0)) daysInMonth[2]=29;

    if(m<1||m>12||d<1||d>daysInMonth[m]){
        printf("Invalid date\n");
        return 0;
    }
    
    int q=d;
    if(m<3){ m+=12; y--; }
    int k=y%100, j=y/100;
    int h=(q + (13*(m+1))/5 + k + k/4 + j/4 + 5*j)%7;
    char *day[]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    printf("Valid date - Day: %s\n",day[h]);
    return 0;
}

