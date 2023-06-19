#!/bin/bash
g++ -c *.c
ar -rc liball.a *.o
ranlib liball.a
