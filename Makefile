FLAGS=-Wall

all:
	g++ $(SOURCE) aran_first_n.cpp main.cpp count_in_base.cpp \
			perm_first_n.cpp print_array.cpp
	./a.out

