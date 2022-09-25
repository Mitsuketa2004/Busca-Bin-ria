#!/bin/bash
rm "Main.exe";
echo "Compilando";
g++ Main.cpp -Wall -o Main.exe -static;
echo "Executando";
./Main.exe;