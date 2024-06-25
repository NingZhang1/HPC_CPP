CXXFLAGS = -std=c++11 -I/home/ningzhangcaltech/Github_Repo/libsimdpp/

start: 01-start.o #test_null.o
	g++ $^ -o start

01-start.o: 01-start.cpp
	g++ 01-start.cpp -g -c $(CXXFLAGS) -DSIMDPP_ARCH_X86_AVX -mavx -o 01-start.o
