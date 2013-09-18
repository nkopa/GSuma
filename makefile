PROG = wozny.o komputer.o sedzia.o czlowiek.o glowny.o

cel: $(PROG)
	gcc $(PROG) -o GSuma

wozny.o: wspolne.h
komputer.o: wspolne.h
sedzia.o: wspolne.h
czlowiek.o: wspolne.h
glowny.o: wspolne.h

usun:
	rm GSuma $(PROG)
