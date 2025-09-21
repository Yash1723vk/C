#include <stdio.h>

int main(){
    /* print far and celcuis table
       for farh = 0, 20, ..... , 300 */

    int farh, celcius;
    int lower, upper, step;
    
    lower = 0; /*Lower limit of temp table*/
    upper = 300; /*Upper limit*/
    step = 20;
    
    farh = lower;
    while(farh <= upper){
      celcuis = 5 * (farh - 32)/ 9;
      farh = farh + step;
    }
     printf("%d\t%d\n" , farh, celcius);
     return 0;
}
