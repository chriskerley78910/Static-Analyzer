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
echo "Compiling C code in C10"
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

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

