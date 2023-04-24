CC=g++
# CFLAGS=-std=c99

structMake: struct.cpp struct_test.cpp
	${CC} ${CFLAGS} -o struct.exe struct.cpp struct_test.cpp

arrayMake: array.cpp array_test.cpp
	${CC} ${CFLAGS} -o array.exe array.cpp array_test.cpp

clean:
	-rm *.o *.exe