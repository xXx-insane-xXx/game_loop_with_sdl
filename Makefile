build:
	gcc -Wall -std=c99 ./game_loop/*.c -o game

run:
	./game

clean:
	rm game
