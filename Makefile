all:
	./make.sh
		
clean:
	rm -f interpreter *.d *.o *.c *.cpp *.h *.sig *.f memphis-1.9/memphis/*.o \
		memphis-1.9/memphis/memphis memphis-1.9/mrts/*.o
