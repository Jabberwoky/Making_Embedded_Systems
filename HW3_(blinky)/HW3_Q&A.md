### What are the hardware registers that cause the LED to turn on and off? (From the processor manual, don’t worry about initialization.)

From Page 185 in the [RM0038 Reference manual](https://www.st.com/resource/en/reference_manual/rm0038-stm32l100xx-stm32l151xx-stm32l152xx-and-stm32l162xx-advanced-armbased-32bit-mcus-stmicroelectronics.pdf):
It appears there are two registeres that could be used.
-GPIO port output data register (GPIOx_ODR) (x = A..H) Address offset: 0x14 
-GPIO port bit set/reset register (GPIOx_BSRR) (x = A..H) Address offset: 0x18

### What are the registers that you read in order to find out the state of the button?
-GPIO port input data register (GPIOx_IDR) (x = A..H) Address offset: 0x10

### Can you read the register directly and see the button change in a debugger or by printing out thes value of the memory at the register’s address?
