OPTIONS = -m64 -std=c99 -pedantic -Wall -Wshadow -Wpointer-arith -Wcast-qual \
        -Wstrict-prototypes -Wmissing-prototypes

all: coercion

coercion: coercion.c
	gcc ${OPTIONS} $< -o $@
