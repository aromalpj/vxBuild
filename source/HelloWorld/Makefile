# Compiler and Flags
CC      = wr-cc
CFLAGS  = -rtp -static
TARGET  = taskexp.vxe
SRC     = taskexp.c

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)