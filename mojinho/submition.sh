#!/bin/bash

year="$1"
question="$2"
file_name="$3"
tl="$4"
RED='\033[0;31m'
NC='\033[0m'
GREEN='\033[0;36m'

g++ -o temp_prog -std=c++14 -O2 -static -lm $file_name &> /dev/null

if [ "$?" != "0" ]; then
	echo -e "${RED}Compilation error${NC}"
	exit 0
fi

for input in $(ls $year/contest_tests/$question/input/); do

	timeout $tl ./temp_prog > temp.out < $year/contest_tests/$question/input/$input 2> /dev/null

	code="$?"

	if [ $code = "124" ]; then
		echo -e "${RED}TLE${NC}"
		exit 1
	fi

	if [ $code != "0" ]; then
		echo -e "${RED}RTE${NC}"
		exit 1
	fi

	diff temp.out $year/contest_tests/$question/output/$input 

	if [ "$?" != "0" ]; then

		echo -e "${RED}WA${NC}"
		cat $year/contest_tests/$question/input/$input 
		exit 1
	fi

done

echo -e "${GREEN}AC caralho, BIIIIIIIIIIIIIIR!!!${NC}"
