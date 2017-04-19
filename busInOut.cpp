#include "mbed.h"

BusInOut pins( PTB0, PTB1, PTB2 );

int main(){
	pins.output();
	while (1) {
		pins = 0x3; // Turns PTB0 & PTB1
		wait( 0.5 );
		pins = 0;
		wait( 0.5 );
	}
}
