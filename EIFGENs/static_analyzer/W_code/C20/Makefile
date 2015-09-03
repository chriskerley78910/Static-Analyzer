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

OBJECTS = big_file_C20_c.o 

OLDOBJECTS =  da1507.o da1507d.o ti1505.o ti1505d.o et1516.o et1516d.o da1510.o \
	da1510d.o da1503.o da1503d.o da1506.o da1506d.o ti1504.o ti1504d.o \
	kl1490.o kl1490d.o yy1515.o yy1515d.o et1514.o et1514d.o da1508.o \
	da1508d.o da1509.o da1509d.o fi1502.o fi1502d.o kl1489.o kl1489d.o \
	yy1512.o yy1512d.o et1513.o et1513d.o kl1486.o kl1486d.o kl1491.o \
	kl1491d.o kl1496.o kl1496d.o kl1495.o kl1495d.o kl1494.o kl1494d.o \
	ev1497.o ev1497d.o kl1499.o kl1499d.o kl1501.o kl1501d.o kl1500.o \
	kl1500d.o ki1498.o ki1498d.o ki1517.o ki1517d.o kl1518.o kl1518d.o \
	kl1493.o kl1493d.o kl1488.o kl1488d.o kl1487.o kl1487d.o kl1492.o \
	kl1492d.o uc1511.o uc1511d.o 

all: Cobj20.o

Cobj20.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj20.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

