#include <Arduino.h>

#define A 2
#define B 3

//variables
int a, b, kmap_output, NAND_output,nand2,nand1, temp;

//Function for 2input NAND gate
int NAND1(int i1, int i2) {
    return !(i1 && i2);
}
//Function for 3input NAND gate
int NAND(int i1, int i2, int i3) {
    return !(i1 && i2 && i3);
}  


void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop() {
    kmap_output =!((a && !b && !a)||(!a && !b&& b));
    nand1=NAND(a,!b,!a);
    nand2=NAND(a,!b,b);
    temp=NAND1(nand1,nand2);
    NAND_output=!temp;

    if(kmap_output == 1)
      digitalWrite(A ,LOW);
    else
      digitalWrite(A,HIGH);

    if(NAND_output  == 1)
      digitalWrite(B, LOW);
    else
      digitalWrite(B, HIGH);
}
