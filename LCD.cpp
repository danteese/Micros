#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(PTB8, PTB9, PTE2, PTE3, PTE4, PTE5, TextLCD::LCD16x2);

int main(){
    lcd.cls(); // Limpia lo que quedó en el LCD
    wait(0.01);
    lcd.printf("Hello world!\n"); // Primera Columna por Default
    lcd.locate(0,1);
    lcd.printf("Dante!!");    
}
