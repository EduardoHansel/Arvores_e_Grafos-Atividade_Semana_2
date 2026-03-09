cmake_minimum_required(VERSION 4.1)
project(atividade_semana2 C)

set(CMAKE_C_STANDARD 11)

add_executable(atividade_s2 atividade_s2/atividade_s2.c)

add_executable(s3_bubbleSort atividade_s3/bubbleSort.c)
add_executable(s3_insertionSort atividade_s3/insertionSort.c)
add_executable(s3_mergeSort atividade_s3/mergeSort.c)
add_executable(s3_quickSort atividade_s3/quickSort.c)
add_executable(s3_selectionSort atividade_s3/selectionSort.c)

add_executable(s4_maxHeap atividade_s4/max_heap.c)

add_executable(s5_atividade atividade_s5/tarefa.c)
