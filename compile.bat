@echo off
clang-format -i -style=LLVM ./*.cpp
g++ -std=c++23 -I D:/lib/ %1.cpp
