FOLDER := src/
FOLDER_TWO := build/src/
FOLDER_TEST := build/test/
SRC := main.c function.c 
SRCH :=  main.h 
SOURCE := $(addprefix $(FOLDER), $(SRC) $(SRCH))
SOURCE_O := $(addprefix $(FOLDER_TWO), $(SRC))
TARGET := bin/calc
CC := gcc
CFLAGS := -Wall -Werror -c
EXE_TEST := bin/deposit-calc-test
LFLAGS := -I thirdparty -I src -c

 
all: $(SOURCE) $(TARGET) $(EXE_TEST) 

$(TARGET): $(SOURCE:.c=.o)
	$(CC) $(SOURCE_O:.c=.o) -o $@

$(addprefix $(FOLDER_TWO), main.o): src/main.c src/function.h
		$(CC) $(CFLAGS) src/main.c -o $@   

$(addprefix $(FOLDER_TWO), function.o): src/function.c 
		$(CC) $(CFLAGS) src/function.c -o $@ 

$(EXE_TEST): $(addprefix $(FOLDER_TEST), function_test.o validation_test.o main.o) build/src/function.o
		$(CC) $(addprefix $(FOLDER_TEST), function_test.o validation_test.o main.o) build/src/function.o -o $@

$(addprefix $(FOLDER_TEST), function_test.o): test/function_test.c       
		$(CC) $(LFLAGS) test/function_test.c -o $@   

$(addprefix $(FOLDER_TEST), validation_test.o): test/validation_test.c   
		$(CC) $(LFLAGS) test/validation_test.c -o $@

$(addprefix $(FOLDER_TEST), main.o): test/main.c 
		$(CC) -I thirdparty -c test/main.c -o $@

.PHONY: all clean
clean:
	rm -f *.o
	rm -f bin/*