PREFIX=/home/ja/codaz/liblbc

main:
	gcc -Wall -g -c -fpic -I$(PREFIX)/src/lib $(PREFIX)/src/lib/lbc.c -o $(PREFIX)/lib/lbc.o
	gcc -Wall -g -shared -o $(PREFIX)/lib/liblbc.so $(PREFIX)/lib/lbc.o 
	ls $(PREFIX)/lib
	#gcc -Wall -g -o lbc -L$(PREFIX)/lib -I$(PREFIX)/src/lib -llbc `xml2-config --cflags` `xml2-config --libs` main.c
	gcc -L lib/ -Wall -g -o bin/lbc main.c -llbc -I src/lib/

clean:
	rm lib/*
	rm bin/*
