CFLAGS=-Wall -g

clean:
	rm -f app
	
build:
	gcc deps/hash.c app.c -std=c99 -o app