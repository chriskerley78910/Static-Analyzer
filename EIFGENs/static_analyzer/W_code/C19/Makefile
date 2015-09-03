INCLUDE_PATH =  -I"$(ISE_LIBRARY)/library/encoding/implementation/include" -I"$(ISE_LIBRARY)/library/process/classic/unix/include" -I"$(ISE_LIBRARY)/library/vision2/spec/include" -I"$(ISE_LIBRARY)/library/vision2/implementation/gtk/Clib"  -pthread -I/usr/include/gtk-2.0 -I/usr/lib/x86_64-linux-gnu/gtk-2.0/include -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/pango-1.0 -I/usr/include/gio-unix-2.0/ -I/usr/include/freetype2 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/libpng12 -I/usr/include/harfbuzz
SHELL = /bin/sh
CC = gcc
CPP = g++
CFLAGS = -O0 -pipe -fPIC -D_GNU_SOURCE -m64  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"/usr/include/eiffelstudio-15.01" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -fPIC -D_GNU_SOURCE -m64  -DWORKBENCH -I"/usr/include/eiffelstudio-15.01" -I. $(INCLUDE_PATH)
LDFLAGS = -m elf_x86_64
CCLDFLAGS = -m64  
LDSHAREDFLAGS =  -m64 -shared -o
EIFLIB = "/usr/lib/eiffelstudio-15.01/libwkbench.a"
EIFTEMPLATES = /usr/share/eiffelstudio-15.01/studio/config/unix/templates
LIBS = -lm
MAKE = make
AR = ar
LD = ld
MKDEP = \$(EIFFEL_SRC)/C/mkdep $(DPFLAGS) --
MV = /bin/mv
CP = /bin/cp
RANLIB = :
RM = /bin/rm -f
FILE_EXIST = 
RMDIR = 
X2C = "/usr/lib/eiffelstudio-15.01/studio/x2c"
SHAREDLINK = gcc
SHAREDLIBS = -lm
SHARED_SUFFIX = .so
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = touch finished 
SYSTEM_IN_DYNAMIC_LIB = static_analyzer.so 

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C19_c.o 

OLDOBJECTS =  yy1481.o yy1481d.o ev1472.o ev1472d.o kl1484.o kl1484d.o yy1480.o \
	yy1480d.o ev1471.o ev1471d.o ev1470.o ev1470d.o ev1467.o ev1467d.o \
	ev1462.o ev1462d.o ev1466.o ev1466d.o ev1461.o ev1461d.o kl1482.o \
	kl1482d.o yy1479.o yy1479d.o ev1465.o ev1465d.o ev1463.o ev1463d.o \
	ev1458.o ev1458d.o ev1460.o ev1460d.o ev1456.o ev1456d.o ev1454.o \
	ev1454d.o kl1485.o kl1485d.o ev1457.o ev1457d.o ev1464.o ev1464d.o \
	kl1483.o kl1483d.o ev1455.o ev1455d.o ev1459.o ev1459d.o kl1478.o \
	kl1478d.o uc1477.o uc1477d.o ev1469.o ev1469d.o ev1468.o ev1468d.o \
	ev1453.o ev1453d.o uc1476.o uc1476d.o uc1475.o uc1475d.o uc1474.o \
	uc1474d.o uc1473.o uc1473d.o 

all: Cobj19.o

Cobj19.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj19.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

