all: fib optimalisedFib miltithreadedFib gridTraveler optimalisedGridTraveler

fib: 
	gcc fib.c -lm -std=c99 -o fib

optimalisedFib: 
	gcc optimalisedFib.c -lm -std=c99 -o optimalisedFib

miltithreadedFib: 
	gcc miltithreadedFib.c -lm -std=c99 -o miltithreadedFib -fopenmp

gridTraveler: 
	gcc gridTraveler.c -lm -std=c99 -o gridTraveler

optimalisedGridTraveler: 
	gcc optimalisedGridTraveler.c -lm -std=c99 -o optimalisedGridTraveler

clean:
	rm fib optimalisedFib miltithreadedFib gridTraveler optimalisedGridTraveler
