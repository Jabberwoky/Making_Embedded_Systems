// Console IO is a wrapper between the actual in and output and the console code

#ifndef CONSOLE_IO_H
#define CONSOLE_IO_H

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "main.h"


typedef enum {CONSOLE_SUCCESS = 0u, CONSOLE_ERROR = 1u } eConsoleError;

extern UART_HandleTypeDef huart1;

/*
// Define the structure for Circular Buffer
struct sCircularBuffer {
    uint8_t *buf;  // block of memory
    uint8_t size;  // Must be a power of two
    uint8_t read;  // holds the current read position: 0 to (size-1)
    uint8_t write; // holds the current write position: 0 to (size-1)
};

// Initialization function
void CBInit(struct sCircularBuffer *cb);
uint8_t CBLengthData(struct sCircularBuffer *cb);
int8_t CBWrite(struct sCircularBuffer *cb, uint8_t data);
int8_t CBRead(struct sCircularBuffer *cb, uint8_t *data);
*/

eConsoleError ConsoleIoInit(void);

eConsoleError ConsoleIoReceive(uint8_t *buffer, const uint32_t bufferLength, uint32_t *readLength);
eConsoleError ConsoleIoSendString(const char *buffer); // must be null terminated

#endif // CONSOLE_IO_H
