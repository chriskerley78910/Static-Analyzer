case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C22"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)/library/encoding/implementation/include" -I"\$(ISE_LIBRARY)/library/process/classic/unix/include" -I"\$(ISE_LIBRARY)/library/vision2/spec/include" -I"\$(ISE_LIBRARY)/library/vision2/implementation/gtk/Clib" `$ISE_LIBRARY/library/encoding/implementation/unix/Clib/iconv-config --include_path` `$ISE_LIBRARY/library/vision2/implementation/gtk/Clib/vision2-gtk-config --include_path`
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $ccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $cppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $ldsharedflags
EIFLIB = "$rt_lib/$prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $libs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = static_analyzer$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C22_c.o 

OLDOBJECTS =  ty1562.o ty1562d.o he1567.o he1567d.o bi1566.o bi1566d.o pr1583.o \
	pr1583d.o pr1568.o pr1568d.o bi1569.o bi1569d.o tr1570.o tr1570d.o \
	ac1564.o ac1564d.o li1571.o li1571d.o co1552.o co1552d.o kl1559.o \
	kl1559d.o kl1578.o kl1578d.o in1554.o in1554d.o kl1560.o kl1560d.o \
	kl1579.o kl1579d.o ki1577.o ki1577d.o ki1581.o ki1581d.o kl1574.o \
	kl1574d.o kl1561.o kl1561d.o kl1580.o kl1580d.o ev1563.o ev1563d.o \
	ki1576.o ki1576d.o ki1582.o ki1582d.o kl1575.o kl1575d.o ev1553.o \
	ev1553d.o ev1555.o ev1555d.o ev1557.o ev1557d.o ev1556.o ev1556d.o \
	ev1572.o ev1572d.o ev1558.o ev1558d.o ev1573.o ev1573d.o ki1584.o \
	ki1584d.o kl1565.o kl1565d.o 

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

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

