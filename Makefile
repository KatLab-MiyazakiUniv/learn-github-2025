.PHONY: all clean build test

all: test

clean:
	rm -rf build

build:
	mkdir -p build
	cd build && cmake .. && make

test: clean build
	cd build && ctest --output-on-failure
