OBJS = mycin

all: $(OBJS)

%.o: %.cpp
	gcc -o $@ $<

clean:
	rm -f $(OBJS)