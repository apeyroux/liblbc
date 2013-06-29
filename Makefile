main:
	cc -Wall -g -c -fpic -Isrc/lib src/lib/lbc.c -o lib/lbc.o
	gcc -Wall -g -shared -o lib/liblbc.so lib/lbc.o 
	gcc -Wall -g -o lbc -Llib -Isrc/lib -llbc `xml2-config --cflags` `xml2-config --libs` main.c

clean:
	rm src/lib/*.o
	rm lib/*.so
	rm lbc
