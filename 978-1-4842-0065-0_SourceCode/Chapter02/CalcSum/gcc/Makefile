ASFLAGS  ?= --32
CPPFLAGS ?= -m32 -std=c++11 -O0 -pedantic -Wall --all-warnings

OBJS = $(patsubst %.asm,%.o,$(wildcard *.asm)) \
       $(patsubst %.cpp,%.o,$(wildcard *.cpp)) \
       $(patsubst %.c,%.o,$(wildcard *.c)) \

TARGETS = $(OBJS) main

main: $(OBJS)
	gcc $(CPPFLAGS) $(OBJS) -o $@

%.o: %.asm
	as ${ASFLAGS} $< -o $@

clean:
	for i in $(wildcard $(TARGETS)); do rm -v $$i; done
