GCC=gcc

SRC_CIRCLE= circle.c
SRC_TRIANGLES= triangles.c

C_OPTIONS= -lm

OBJECT= -o
default=all

all: circle triangles

circle:
	$(GCC) $(OBJECT) $(basename $(SRC_CIRCLE)) $(SRC_CIRCLE) $(C_OPTIONS)

triangles:
	$(GCC) $(OBJECT) $(basename $(SRC_TRIANGLES)) $(SRC_TRIANGLES) $(C_OPTIONS)

clean:
	rm circle triangles
