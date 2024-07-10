myprograme : eval.o eval2.o eval3.o
	gcc eval.o eval2.o eval3.o -o myprograme
eval.o : eval.c
	gcc eval.c -o main.o
eval2.o : eval2.c
	gcc eval2.c -o eval2.o
eval3.o : eval3.c
	gcc eval3.c -o eval3.o
.PHONY : clean
clean: rm -f myprograme eval.o eval2.o eval3.o