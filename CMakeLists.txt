cmake_minimum_required(VERSION 3.10)
project(doruk C)

set(CMAKE_C_STANDARD 99)

add_executable(doruk main.c string_examples.c pointer_examples.c pointer_examples.h string_examples.h  dynamic_array_c.c dynamic_array_c.h day11.c day11.h strings-manip.c strings-manip.h hash_tables.c hash_tables.h stacks.c stacks.h balanced_brackets.c balanced_brackets.h)