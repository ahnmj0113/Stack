#makefile

a.out: stackTest.o myStack.o
	g++ stackTest.o myStack.o

stackTest.o: stackTest.cpp myStack.cpp myStack.h 
	g++ -c stackTest.cpp

stack.o: myStack.cpp myStack.h 
	g++ -c myStack.cpp

clean: rm a.out
