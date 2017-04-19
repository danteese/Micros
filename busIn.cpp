#include "mbed.h"

BusIn nibble( PTB0, PTB1, PTB2, PTB3 );
Serial pc( USBTX, USBRX );

int main(){
	nibble.mode( PullUp );
	wait(0.001);

	while(1){
		wait(0.1);
		switch ( nibble ) {
			case 0x3:
				pc.printf("Hello!\n"); // PTB0 Y PTB1 son 1
				break;
			case 0x8:
				pc.printf("World!\n"); // PTB3 es 1
				break;
		}
	}
}
