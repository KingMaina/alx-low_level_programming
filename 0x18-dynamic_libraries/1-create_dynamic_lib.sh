#!/user/bin/bash
gcc -fPIC -shared *.c -I. -o liball.so && \
	    export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

