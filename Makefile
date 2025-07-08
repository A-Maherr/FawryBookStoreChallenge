main: main.o inventory.o showcasebook.o ebook.o paperbook.o book.o Services.o
	g++ main.o inventory.o showcasebook.o ebook.o paperbook.o book.o Services.o -o main
main.o: main.cpp inventory.h book.h ebook.h paperbook.h showcasebook.h
	g++ -c main.cpp
inventory.o: inventory.h inventory.cpp book.h paperbook.h ebook.h showcasebook.h
	g++ -c inventory.cpp
Services.o: Services.h Services.cpp book.h paperbook.h ebook.h
	g++ -c Services.cpp
showcasebook.o: showcasebook.h showcasebook.cpp book.h
	g++ -c showcasebook.cpp
ebook.o: ebook.h ebook.cpp book.h Services.h
	g++ -c ebook.cpp
paperbook.o: paperbook.h paperbook.cpp book.h Services.h
	g++ -c paperbook.cpp
book.o: book.h book.cpp
	g++ -c book.cpp
clean:
	rm -f *.o main