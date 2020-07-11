SRCS = $(wildcard *.c)

#CC = gcc

OBJ_NAME = hello_shell

all : ${SRCS}
	$(CC) $(SRCS) -o $(OBJ_NAME)

clean :
	rm $(OBJ_NAME)
