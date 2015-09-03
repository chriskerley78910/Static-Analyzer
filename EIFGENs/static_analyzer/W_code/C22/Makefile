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

OBJECTS = big_file_C22_c.o 

OLDOBJECTS =  ty1556.o ty1556d.o ha1563.o ha1563d.o ta1566.o ta1566d.o in1562.o \
	in1562d.o ta1564.o ta1564d.o pr1552.o pr1552d.o ha1567.o ha1567d.o \
	bi1553.o bi1553d.o tr1554.o tr1554d.o ac1561.o ac1561d.o li1555.o \
	li1555d.o ta1565.o ta1565d.o kl1557.o kl1557d.o kl1568.o kl1568d.o \
	kl1571.o kl1571d.o kl1574.o kl1574d.o kl1558.o kl1558d.o kl1569.o \
	kl1569d.o kl1572.o kl1572d.o kl1575.o kl1575d.o kl1559.o kl1559d.o \
	kl1570.o kl1570d.o kl1573.o kl1573d.o kl1576.o kl1576d.o ev1560.o \
	ev1560d.o co1577.o co1577d.o 

all: Cobj22.o

Cobj22.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj22.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

