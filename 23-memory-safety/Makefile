BINS=infoleak-orig infoleak-updated tampering stack-smashing use-after-free

all: $(BINS)

infoleak-orig: infoleak-orig.c
	gcc $^ -o $@

infoleak-updated: infoleak-updated.c
	gcc $^ -o $@

tampering: tampering.c
	gcc $^ -o $@

stack-smashing: stack-smashing.c
	gcc -g -fno-stack-protector $^ -o $@ -static

use-after-free: use-after-free.c
	gcc -g $^ -o $@ -static

clean:
	rm -rf *.o $(BINS)