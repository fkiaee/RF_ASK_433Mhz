/* 433 MHz RF Module Transmitter Demonstration 
   Use with Receiver Demonstration 1
   Dr. Farkhondeh Kiaee
   Instagram-Telegram: @ece_society
*/
// Include RadioHead Amplitude Shift Keying Library
#include <RH_ASK.h>
// Include dependant SPI Library
#include <SPI.h>

// Create Amplitude Shift Keying Object
RH_ASK rf_driver;
void setup()
{
    // Initialize ASK Object
    rf_driver.init();
}
void loop()
{
    const char *msg = "Welcome to the ece_society!";
    rf_driver.send((uint8_t *)msg, strlen(msg));
    rf_driver.waitPacketSent();
    delay(1000);
}
