#include <stdio.h>
#include <stdlib.h>
#include <smart_heating.h>

#define idle 10 
#define heating 20 
#define cooling 30 
#define alarm 40


int state = idle;
int temp;
int temperature;
int getTemp(int temp);
void control();


int main(void) {

    control();
    int getTemp(int temp);
    return  EXIT_SUCCESS;

}




void control(){

    switch(state){

        case idle: 

            if(getTemp(temp) < 25){
                state = heating;
            }
            else if(getTemp(temp) > 34){
                state = cooling;
            }
            break;



        case heating: 

            if(getTemp(temp) >24){
                 state = idle;
            }
            break;



        case cooling:

            if(getTemp(temp) < 35){
                state = idle;
            }
            break;



        case alarm:
            //If heating or cooling fails, alarm is on
            break;

    }
 }



int getTemp(int temp){

    //get temperature from sensor

    return temp;

 }
