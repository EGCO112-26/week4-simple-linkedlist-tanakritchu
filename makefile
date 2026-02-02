compile: assg.c 
	 gcc assg.c -o test

run: test
	 ./test

clean: test
	 rm test
