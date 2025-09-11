driver: driver.o accepting.o maunfacturing.o processing.o shipping.o state.o system.o
	gcc accepting.o maunfacturing.o processing.o shipping.o state.o system.o -o driver

driver.o: driver.c
	gcc -c driver.c 

accepting.o: accepting.c accepting.h
	gcc -c accepting.c -o accepting.o

maunfacturing.o: maunfacturing.c manufacturing.h
	gcc -c maunfacturing.c -o maunfacturing.o

processing.o: processing.c processing.h
	gcc -c processing.c -o processing.o

shipping.o: shipping.c shipping.h
	gcc -c shipping.c -o shipping.o

state.o: state.c state.h
	gcc -c state.c -o state.o

system.o: system.c system.h
	gcc -c system.c -o system.o

clean:
	rm *.o 

