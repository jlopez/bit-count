CXXFLAGS=-O3

all: jla hanh

benchmark: jla hanh
	@echo Benchmarking Hanh
	time ./hanh
	@echo Benchmarking JLA
	time ./jla

clean:
	rm -f *.exe *.o
