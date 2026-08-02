LIB_PATH = lib
BUILD_PATH = build
BUBBLE_SORT = bubble_sort
SELECTION_SORT = selection_sort
INSERTION_SORT = insertion_sort
QUICKSORT = quicksort
COUNTING_SORT = counting_sort
RADIX_SORT = radix_sort

all: compile_libs run_bubble_sort run_selection_sort run_insertion_sort run_quicksort run_counting_sort run_radix_sort

${BUILD_PATH}:
	mkdir -p ${BUILD_PATH}

compile_libs: ${BUILD_PATH}
# 	compile array lib c extension file to o extension file
		gcc -c -fPIC ${LIB_PATH}/array_lib.c -o ${BUILD_PATH}/libarray_lib.o

#		compile array lib o extension file to so extension file
		gcc -shared ${BUILD_PATH}/libarray_lib.o -o ${BUILD_PATH}/libarray_lib.so

run_bubble_sort: compile_libs
#		compile program
		gcc learning/${BUBBLE_SORT}/${BUBBLE_SORT}.c -L${BUILD_PATH} -larray_lib -Wl,-rpath='$$ORIGIN' -o ${BUILD_PATH}/${BUBBLE_SORT}

#		run program
		${BUILD_PATH}/${BUBBLE_SORT}

run_selection_sort: compile_libs
#		compile program
		gcc learning/${SELECTION_SORT}/${SELECTION_SORT}.c -L${BUILD_PATH} -larray_lib -Wl,-rpath='$$ORIGIN' -o ${BUILD_PATH}/${SELECTION_SORT};

#		run program
		${BUILD_PATH}/${SELECTION_SORT}

run_insertion_sort: compile_libs
#		compile program
		gcc learning/${INSERTION_SORT}/${INSERTION_SORT}.c -L${BUILD_PATH} -larray_lib -Wl,-rpath='$$ORIGIN' -o ${BUILD_PATH}/${INSERTION_SORT}

#		run program
		${BUILD_PATH}/${INSERTION_SORT}

run_quicksort: compile_libs
#		compile program
		gcc learning/${QUICKSORT}/${QUICKSORT}.c -L${BUILD_PATH} -larray_lib -Wl,-rpath='$$ORIGIN' -o ${BUILD_PATH}/${QUICKSORT}

#		run program
		${BUILD_PATH}/${QUICKSORT}

run_counting_sort: compile_libs 
#		compile program
		gcc learning/${COUNTING_SORT}/${COUNTING_SORT}.c -L${BUILD_PATH} -larray_lib -Wl,-rpath='$$ORIGIN' -o ${BUILD_PATH}/${COUNTING_SORT}

#   run program
		${BUILD_PATH}/${COUNTING_SORT}

run_radix_sort: compile_libs
#		compile program
		gcc learning/${RADIX_SORT}/${RADIX_SORT}.c -L${BUILD_PATH} -larray_lib -lm -Wl,-rpath='$$ORIGIN' -o ${BUILD_PATH}/${RADIX_SORT}

#		run program
		${BUILD_PATH}/${RADIX_SORT}

clear:
#		clear every build artifacts in build/ directory
		rm -rf ${BUILD_PATH}

.PHONY: compile_libs run_bubble_sort run_selection_sort run_insertion_sort all run_quicksort run_counting_sort run_radix_sort clear