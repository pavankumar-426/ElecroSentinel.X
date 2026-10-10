#include <xc.h>

// Set oscillator frequency for the delay function
#define _XTAL_FREQ 8000000 

void main() {
    // TRIS register controls direction: 0 means Output, 1 means Input
    TRISB = 0x00;      // Set all 8 pins of PORTB as outputs
    
    // PORT register controls the actual voltage: 0 is LOW (0V), 1 is HIGH (5V)
    PORTB = 0x00;      // Turn off all LEDs on PORTB to start[cite: 14]

    while(1) {
        PORTBbits.RB0 = 1; // Send power to Pin 33 (Turn LED ON)[cite: 14]
        __delay_ms(500);   // Wait 500 milliseconds
        
        PORTBbits.RB0 = 0; // Cut power to Pin 33 (Turn LED OFF)[cite: 14]
        __delay_ms(500);   // Wait 500 milliseconds
    }
}