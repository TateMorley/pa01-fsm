driver: driver.o accepting.o manufacturing.o processing.o shipping.o state.o system.o statemodel.o
	gcc driver.o accepting.o manufacturing.o processing.o shipping.o state.o system.o statemodel.o -o driver

driver.o: driver.c
	gcc -c driver.c 

accepting.o: accepting.c accepting.h
	gcc -c accepting.c -o accepting.o

manufacturing.o: manufacturing.c manufacturing.h
	gcc -c manufacturing.c -o manufacturing.o

processing.o: processing.c processing.h
	gcc -c processing.c -o processing.o

shipping.o: shipping.c shipping.h
	gcc -c shipping.c -o shipping.o

state.o: state.c state.h
	gcc -c state.c -o state.o

system.o: system.c system.h
	gcc -c system.c -o system.o

statemodel.o: statemodel.c statemodel.h
	gcc -c statemodel.c -o statemodel.o

clean:
	rm -f *.o driver

