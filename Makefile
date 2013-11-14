CC=clang++
CFLAGS=-c -std=c++11 -stdlib=libc++ -I/usr/local/include
LDLAGS= -std=c++11 -stdlib=libc++ -L/usr/local/lib -lcppa -lcurl
SOURCES= main.cpp help.cpp
OBJS=$(SOURCES:.cpp=.o)
EXECUTABLE=lab_5

all:	$(EXECUTABLE)

$(EXECUTABLE):	$(OBJS)
	$(CC) $(LDLAGS) $(OBJS) -o $@

.cpp.o:
		$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS) $(EXECUTABLE)
