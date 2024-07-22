#!/bin/bash

function compare()
{
	FILE=$1
	SEARCH=$2
	REPLACE=$3

	sed "s/$SEARCH/$REPLACE/g" $FILE > $FILE.sed
	../ex04 $FILE $SEARCH $REPLACE
	diff $FILE.sed $FILE.replace
}

make -C .. > /dev/null

if [ $# -eq 3 ]
then
	compare $1 $2 $3
fi
