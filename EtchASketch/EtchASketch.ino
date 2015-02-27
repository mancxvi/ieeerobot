#include <Servo.h>
#include "Etch.h"

// test sketch for Etch class. pay attention to the serial monitor
// to make sure the thing is doing what it's supposed to

// make a new etch-a-sketch
Etch* etch;

void setup()
{
    // assign etch-a-sketch to pins A0 and A1 at initial position 0,0
    etch = new Etch(A0,A1,0,0);
}

/* void loop() */
/* { */
/* 	delay(5000); */
/* 	etch->forward(10); */
/* 	etch->down(1); */
/* 	etch->backward(10); */
/* 	etch->down(10); */
/* 	etch->forward(1); */
/* 	etch->up(10); */
/* } */

void loop()
{
    // test out the etch-a-sketch class
    delay(5000);
    // start I
    etch->forward(6);
    etch->backward(3);
    etch->down(6);
    etch->backward(3);
    etch->forward(9);
    // start e1
    etch->up(3);
    etch->backward(3);
    etch->down(9);
    // start e2
    etch->forward(6);
    etch->up(3);
    etch->backward(3);
    etch->down(9);
    // start e3
    etch->forward(6);
    etch->up(3);
    etch->backward(3);
    etch->down(9);
    etch->forward(3);
    etch->up(3);
    delay(5000);
}
