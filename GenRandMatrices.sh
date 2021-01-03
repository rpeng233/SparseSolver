g++ gen.cpp -o gen -O2
./gen 10 10 123 >rand.tiny.txt
./gen 5000 20 456 >rand.small.txt
./gen 50000 30 789 >rand.medium.txt
