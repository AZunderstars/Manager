#!/bin/bash

ls | grep results.txt &>/dev/null
if [ $? -eq 0 ];
then
    rm results.txt
fi

total=15
wrong=0
for i in $( seq 1 $total )
do
    echo "running test number $i..."
    cat tests/$i/main.cpp > src/main.cpp
    make > /dev/null
    ./main &> judge.out
    cmp -s judge.out tests/$i/out.txt
    if [ $? -eq 1 ];
    then   
        wrong=$((wrong+1))
        echo "test number $i: " >> results.txt
        diff judge.out tests/$i/out.txt >> results.txt
        echo "________________________________" >> results.txt
    fi
done
echo "$total tests, $(expr $total - $wrong) right, $wrong wrong"

rm judge.out
rm main
