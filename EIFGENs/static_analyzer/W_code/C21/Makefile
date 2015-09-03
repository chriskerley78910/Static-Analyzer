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

OBJECTS = big_file_C21_c.o 

OLDOBJECTS =  fu1544.o fu1544d.o ty1532.o ty1532d.o he1551.o he1551d.o bi1550.o \
	bi1550d.o pr1543.o pr1543d.o ac1536.o ac1536d.o et1521.o et1521d.o \
	kl1529.o kl1529d.o in1537.o in1537d.o kl1530.o kl1530d.o ev1528.o \
	ev1528d.o ki1533.o ki1533d.o ki1545.o ki1545d.o kl1541.o kl1541d.o \
	kl1547.o kl1547d.o kl1531.o kl1531d.o ev1535.o ev1535d.o ev1527.o \
	ev1527d.o ki1534.o ki1534d.o ki1546.o ki1546d.o kl1542.o kl1542d.o \
	kl1548.o kl1548d.o ev1522.o ev1522d.o ev1523.o ev1523d.o uc1519.o \
	uc1519d.o ev1524.o ev1524d.o ev1526.o ev1526d.o ev1539.o ev1539d.o \
	uc1520.o uc1520d.o ev1525.o ev1525d.o ev1540.o ev1540d.o ki1549.o \
	ki1549d.o kl1538.o kl1538d.o 

all: Cobj21.o

Cobj21.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj21.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

