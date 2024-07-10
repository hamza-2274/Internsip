myprograme : eval.o  eval3.o
	gcc eval.o  eval3.o -o myprograme
eval.o : eval.c
	gcc eval.c -o main.o

eval3.o : eval3.c
	gcc eval3.c -o eval3.o
.PHONY : clean
clean: rm -f myprograme eval.o  eval3.o
