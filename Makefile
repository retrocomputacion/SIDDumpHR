CC=gcc
CXX=g++
CFLAGS+=-O3 -Wall
CXXFLAGS=$(CFLAGS)

siddumphr: siddump.o cpu.o
	gcc -o $@ $^ -lm
	strip $@
