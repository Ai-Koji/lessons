all : Project test

Project : main.o func.o # названия обьектных файлов
	gcc -o a.exe main.o func.o # команда линковки из терминала

main.o : main.c # указываем из какого файла получается обьектный файл
	gcc -c main.c # команда компиляции кода в обьектный файл

func.o : func.c
	gcc -c func.c

test :  # просто выводит что-то, можно использовать make test, либо make(т.к. мы используем all)
	echo Hello world

clean: # позволяет создать сценарий удаления через команду make clean
	rm Project *.o
