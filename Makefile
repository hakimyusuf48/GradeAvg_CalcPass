#Compiler
CC=clang++

# Programs
grade:
	$(CC) -o grade grade_avg.cpp

pass:
	$(CC) -o pass calc_pass.cpp

clean:
	rm grade pass