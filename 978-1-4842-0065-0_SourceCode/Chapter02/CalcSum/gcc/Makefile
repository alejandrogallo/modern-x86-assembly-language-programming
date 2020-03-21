ASFLAGS = --32 -march=generic32
CPPFLAGS = -m32 -no-pie -std=c++11

OBJS = $(patsubst %.asm,%.o,$(wildcard *.asm)) \
       $(patsubst %.cpp,%.o,$(wildcard *.cpp)) \
       $(patsubst %.c,%.o,$(wildcard *.c)) \

TARGETS = $(OBJS) main

main: $(OBJS)
	gcc $(CPPFLAGS) $? -o $@

%.o: %.asm
	as ${ASFLAGS} $< -o $@

clean:
	for i in $(wildcard $(TARGETS)); do rm -v $$i; done
