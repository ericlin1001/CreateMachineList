all:*
	g++ -o genRangeList *.cpp
install:
	cp ./genRangeList 
run:
	./genRangeList

