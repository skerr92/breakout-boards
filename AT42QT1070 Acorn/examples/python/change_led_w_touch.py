# file: change_led_w_touch
# Licensed under MIT
# Software comes as is with no warranty as described in the MIT license in parent directory
#
# Purpose: To demonstrate using the AT42QT1070 capacitive touch IC
# (primarily the AT42QT1070 acorn) to control an LED 
# (built in neopixel on a circuitpython board) depending on the touch state of the device.

import board
import time
import odt_at42qt1070
import neopixel

# sets i2c variable to the I2C bus object 
i2c = board.I2C()

# setup so we can change the Neopixel color
pixel = neopixel.NeoPixel(board.NEOPIXEL, 1)

# set the brightness. 0.3 is usually pretty bright.
pixel.brightness = 0.3

#setup the AT42QT1070 over I2C
touch = odt_at42qt1070.AT42QT1070(i2c)

while True:
  # check if the board detects a touch on any of the pins.
  if touch.touched():
    pixel[0] = (0,0,255)
  else:
    pixel[0] = (0,255,0)
  # let it sleep so we can make sure it's a little more stable
  time.sleep(0.1)
