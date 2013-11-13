#include <avr/pgmspace.h>
#include "patron.h"     // Includes the images shown in the matrix

void setup() {

  // Configure pins as outputs
  // "X-axis"
  pinMode(A5, OUTPUT);   
  pinMode(A4, OUTPUT);   
  pinMode(A3, OUTPUT);   
  pinMode(A2, OUTPUT);   
  pinMode(A1, OUTPUT);  
  // "Y-axis"
  pinMode(0, OUTPUT); 
  pinMode(1, OUTPUT); 
  pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(7, OUTPUT); 
  pinMode(8, OUTPUT); 
  pinMode(10, OUTPUT); 

}


void loop() {

  while(1){

    // Prints tha name
    printName();

    switchOff();
    delay(300);

    // Prints the "graph"
    printGraph();

    switchOff();
    delay(300);

  }

}


//
// Prints the graph
//
void printGraph(){

  int iter = 0;
  int z = 0;

  for(int r = 0; r < 5; r++){

    for(int i = 0; i < 10; i ++){

      for(int t = 0; t < 20; t++){  // How many time a pattern is displayed

        for(byte y=0; y<10; y++){   

          for(byte x=0; x<5; x++){

            show(x,y,(graph[i][z]));
            delayMicroseconds(300);
            z++;

          }  
        }
        z = 0;

      }

    }

  } //for r

}



//
// Prints the name
//
void printName(){

  int iter = 0;
  int z = 0;


  for(int i = 0; i < 6; i ++){

    for(int t = 0; t < 100; t++){  // How many time a pattern is displayed

      for(byte y=0; y<10; y++){   

        for(byte x=0; x<5; x++){

          show(x,y,(name[i][z]));
          delayMicroseconds(300);
          z++;

        }  
      }
      z = 0;

    }

  }


}



//
// Allows to switch on/of a led in x,y position
// according to the value in "val" argument
//

int show(byte x, byte y, int val)
{


  switch(x){

  case 0:
    if(val){
      digitalWrite(A5, LOW);
      digitalWrite(A4, HIGH);
      digitalWrite(A3, HIGH);
      digitalWrite(A2, HIGH);
      digitalWrite(A1, HIGH);
    }
    else
      noValueX();
    break;

  case 1:
    if(val){
      digitalWrite(A5, HIGH);
      digitalWrite(A4, LOW);
      digitalWrite(A3, HIGH);
      digitalWrite(A2, HIGH);
      digitalWrite(A1, HIGH);
    }
    else
      noValueX();
    break;


  case 2:
    if(val){
      digitalWrite(A5, HIGH);
      digitalWrite(A4, HIGH);
      digitalWrite(A3, LOW);
      digitalWrite(A2, HIGH);
      digitalWrite(A1, HIGH);
    }
    else
      noValueX();
    break;

  case 3:
    if(val){
      digitalWrite(A5, HIGH);
      digitalWrite(A4, HIGH);
      digitalWrite(A3, HIGH);
      digitalWrite(A2, LOW);
      digitalWrite(A1, HIGH);
    }
    else
      noValueX();
    break;


  case 4:
    if(val){
      digitalWrite(A5, HIGH);
      digitalWrite(A4, HIGH);
      digitalWrite(A3, HIGH);
      digitalWrite(A2, HIGH);
      digitalWrite(A1, LOW);
    }
    else
      noValueX();
    break;


  }


  switch(y){

  case 0:
    if(val){
      digitalWrite(0, HIGH);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(10, LOW);
    }
    else
      noValueY();
    break;


  case 1:
    if(val){
      digitalWrite(0, LOW);
      digitalWrite(1, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(10, LOW);
    }
    else
      noValueY();
    break;

  case 2:
    if(val){
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(10, LOW);
    }
    else
      noValueY();
    break;


  case 3:
    if(val){
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(10, LOW);
    }
    else
      noValueY();
    break;


  case 4:
    if(val){
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(10, LOW);
    }
    else
      noValueY();
    break;


  case 5:
    if(val){
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(10, LOW);
    }
    else
      noValueY();
    break;


  case 6:
    if(val){
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(10, LOW);
    }
    else
      noValueY();
    break;


  case 7:
    if(val){
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(10, LOW);
    }
    else
      noValueY();
    break;

  case 8:
    if(val){
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(10, LOW);
    }
    else
      noValueY();
    break;


  case 9:
    if(val){
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(10, HIGH);
    }
    else
      noValueY();
    break;

  }



}


//
// Turns off a led line
//
void noValueX(){
  digitalWrite(A5,HIGH);
  digitalWrite(A4,HIGH);
  digitalWrite(A3,HIGH);
  digitalWrite(A2,HIGH);
  digitalWrite(A1,HIGH);
  return;
}

//
// Turns off a led line
//
void noValueY(){

  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  return;
}



//
// Turns all off 
//
void switchOff(){
  digitalWrite(A5,LOW);
  digitalWrite(A4,LOW);
  digitalWrite(A3,LOW);
  digitalWrite(A2,LOW);
  digitalWrite(A1,LOW);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  return;
}



