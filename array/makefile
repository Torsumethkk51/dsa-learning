LIB_PATH = lib
BUBBLE_SORT_PATH = learning/bubble_sort/bubble_sort
SELECTION_SORT_PATH = learning/selection_sort/selection_sort
INSERTION_SORT_PATH = learning/insertion_sort/insertion_sort

compile_lib: 
	# compile array_lib.c to libarray_lib.o
	gcc -c -fPIC ${LIB_PATH}/array_lib.c -o ${LIB_PATH}/libarray_lib.o

	# share libarray_lib.o to dynamic library
	gcc -shared ${LIB_PATH}/libarray_lib.o -o ${LIB_PATH}/libarray_lib.so

run_bubble_sort:
	# compile program
	gcc ${BUBBLE_SORT_PATH}.c -L${LIB_PATH} -larray_lib -Wl,-rpath='$$ORIGIN/../../${LIB_PATH}' -o ${BUBBLE_SORT_PATH}

	# run program
	${BUBBLE_SORT_PATH}

run_selection_sort:
	# compile program
	gcc ${SELECTION_SORT_PATH}.c -L${LIB_PATH} -larray_lib -Wl,-rpath='$$ORIGIN/../../${LIB_PATH}' -o ${SELECTION_SORT_PATH}

	# run program
	${SELECTION_SORT_PATH}

run_insertion_sort:
	# compile program
	gcc ${INSERTION_SORT_PATH}.c -L${LIB_PATH} -larray_lib -Wl,-rpath='$$ORIGIN/../../${LIB_PATH}' -o ${INSERTION_SORT_PATH};

	# run program
	${INSERTION_SORT_PATH}

.PHONY: all clean