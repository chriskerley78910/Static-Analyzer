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

OBJECTS = big_file_C10_c.o 

OLDOBJECTS =  et1166.o et1166d.o et1164.o et1164d.o et1162.o et1162d.o et1160.o \
	et1160d.o et1158.o et1158d.o et1156.o et1156d.o va1167.o va1167d.o \
	va1168.o va1168d.o et1165.o et1165d.o et1163.o et1163d.o et1161.o \
	et1161d.o et1159.o et1159d.o et1157.o et1157d.o ki1180.o ki1180d.o \
	ki1175.o ki1175d.o kl1181.o kl1181d.o ev1188.o ev1188d.o mu1184.o \
	mu1184d.o ki1178.o ki1178d.o ki1177.o ki1177d.o ki1176.o ki1176d.o \
	kl1169.o kl1169d.o ev1183.o ev1183d.o kl1174.o kl1174d.o kl1173.o \
	kl1173d.o ev1187.o ev1187d.o ev1186.o ev1186d.o ki1179.o ki1179d.o \
	ev1182.o ev1182d.o ev1185.o ev1185d.o uc1172.o uc1172d.o uc1171.o \
	uc1171d.o uc1170.o uc1170d.o 

all: Cobj10.o

Cobj10.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj10.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

