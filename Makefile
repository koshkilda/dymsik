CC = gcc
TARGET = MyProject

CFLAGS = -Wshadow -Winit-self -Wredundant-decls -Wcast-align -Wundef -Wfloat-equal -Winline -Wunreachable-code -Wmissing-declarations \
		 -Wmissing-include-dirs -Wswitch-enum -Wswitch-default -Wmain -Wextra -Wall -g -pipe -fexceptions -Wcast-qual -Wconversion    \
	 	 -Wempty-body -Wformat-security -Wformat=2 -Wignored-qualifiers -Wlogical-op -Wmissing-field-initializers -Wpointer-arith	  \
         -Wstack-usage=8192 -Wstrict-aliasing -Wtype-limits -Wwrite-strings -D_DEBUG -D_EJUDGE_CLIENT_SIDE							  \

PREF_SRC = ./src/
PREF_OBJ = ./obj/

MAIN = main.c

SRC = $(wildcard $(PREF_SRC)*.c)
OBJ = $(patsubst $(PREF_SRC)%.c, $(PREF_OBJ)%.o, $(SRC)) $(PREF_OBJ)main.o

all : $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@ -lm

$(PREF_OBJ)%.o : $(PREF_SRC)%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(PREF_OBJ)main.o : main.c	
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm $(TARGET) $(PREF_OBJ)*.o