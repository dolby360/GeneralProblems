In this repository, I'll solve some challenges with c++
Every challenge will have it's own hpp file


## Cmake on Windows:
```bash
cd build
cmake -G "Unix Makefiles" ..
make
CppPractice
```
## Another option:
```bash
g++ test-main.cpp -c
g++ test.cpp -c
g++ test-main.o test.o -o tests && ./tests -r compact
```