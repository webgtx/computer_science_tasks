#!/bin/sh
read -p "Write name for your programm: " programm_name
gcc main.c -o $programm_name
