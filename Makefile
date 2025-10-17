CC = gcc
CFLAGS = -std=c11

all: vector3d_test
vector3d_test: main.c vector3d.c vector3d.h
	$(CC) $(CFLAGS) main.c vector3d.c -o vector3d_test
clean:
	rm -f vector3d_test