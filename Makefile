CFLAGS=-Wall -g

clean:
	rm -f app

build:
	gcc deps/hash.c deps/buffer.c app.c -std=c99 -o app