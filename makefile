CC = gcc
CFLAGS = -Wall -Iinclude -IFreeRTOS -O2

SRCS := $(wildcard src/*.c FreeRTOS/*.c)
OBJS := $(SRCS:.c=.o)
TARGET = Projeto_IoT_Pets_RTOS

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean