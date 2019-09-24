#include "hemling.h"
#include "led.h"

void led_set_user(uint8_t usb_led) {
    if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
        writePinLow(D1);
    } else {
        writePinHigh(D1);
    }
}
