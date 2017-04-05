FOLDER := src/
FOLDER_TWO := build/
SRC := main.c function.c 
SRCH :=  main.h 
SOURCE := $(addprefix $(FOLDER), $(SRC) $(SRCH))
SOURCE_O := $(addprefix $(FOLDER_TWO), $(SRC))
TARGET := bin/calc
CC := gcc
CFLAGS := -Wall -Werror -c

 
all: $(SOURCE) $(TARGET) clean

$(TARGET): $(SOURCE:.c=.o)
	$(CC) $(SOURCE_O:.c=.o) -o $@

.c.o: 
	$(CC) $(CFLAGS) $< -o $(FOLDER_TWO)$(notdir $@)

.PHONY: all clean
clean:
	rm -f build/*.o