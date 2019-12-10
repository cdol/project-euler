CC = c++		# Compiler
CFLAGS = -Wall	# Optionen
	
all: p4 clean #Targets: all
		
p4: getdigits.o palindrome.o	p4.o #Target: p4
	$(CC) $(CFLAGS) -o p4 getdigits.o palindrome.o	p4.o

clean: 					#Target: clean
	rm -f *.o	
	rm -f p4
	rm -f *.txt
	@echo Sauber gemacht
	
%.o: %.cpp
	$(CC) $(CFLAGS) -c $<
