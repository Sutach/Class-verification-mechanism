compile: main.cpp 
	 g++  main.cpp -o test


run: test
	 ./test


clean: test
	 rm test