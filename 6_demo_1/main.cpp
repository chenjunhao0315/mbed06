#include "mbed.h"


using namespace std::chrono;


Timer timer_millisec;

DigitalOut led_blue(LED3);


int main(){

    timer_millisec.start();

    while(1){

        if(chrono::duration_cast<chrono::milliseconds>(timer_millisec.elapsed_time()).count() > 500){

            led_blue = !led_blue;

            timer_millisec.reset();

        }
    }

}