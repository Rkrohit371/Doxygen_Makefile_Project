#Targe_name : Dependencies
#<TAB>Command
SRC = main.c\
src/read.c\
src/addition.c\
src/subtraction.c\
src/multiplication.c\
src/division.c\
src/write.c

OBJ = main.o\
read.o\
addition.o\
subtraction.o\
multiplication.o\
division.o\
write.o


INC = inc
# CXX = cpp
# CC = gcc
# AS = as
# LD = ld

CFLAGS = -I$(INC)
# -DMACRO = value
# -g
# v

# ASFLAGS
# LDFLAGS = -Lpath_lib -lname


all.out : $(OBJ)
	gcc $^ -I$(INC) -o $@

%.o : src/%.c
	gcc $^ -I$(INC) -c

run: all.out
	./all.out

clean:
	rm all.out *.o
