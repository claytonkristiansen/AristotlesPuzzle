BUILD_OPTS = -g

default:
	mkdir -p build/
	g++ ${BUILD_OPTS} main.cpp -o build/AristotlesPuzzle

run:
	./build/AristotlesPuzzle

clean:
	rm -r build/*
