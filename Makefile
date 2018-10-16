
CC= gcc
CFLAGS= -Wall
OBJS= func1.c func2.c  myapp.c
TARGET= myapp

$(TARGET):$(OBFT)
	$(CC) -o $(TARGET) $(OBJS)

%.o:%.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
