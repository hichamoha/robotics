# Copyright (c) 1994-1998 by The MathWorks, Inc. All Rights Reserved.
#
# File    : orca.tmf   $Revision: 0 $
#
# Abstract:
#	Real-Time Workshop template makefile for building a UNIX-based
#	stand-alone generic real-time version of Simulink model using
#	generated C code.
#
# 	This makefile attempts to conform to the guidelines specified in the
# 	IEEE Std 1003.2-1992 (POSIX) standard. It is designed to be used
#       with GNU Make which is located in matlabroot/rtw/bin.
#
# 	Note that this template is automatically customized by the Real-Time
#	Workshop build procedure to create "<model>.mk"
#
#       The following defines can be used to modify the behavior of the
#	build:
#	  OPT_OPTS       - Optimization options. Default is -O. To enable 
#                          debugging specify as OPT_OPTS=-g. 
#                          Because of optimization problems in IBM_RS, 
#                          default is no-optimization. 
#	  OPTS           - User specific compile options.
#	  USER_SRCS      - Additional user sources, such as files needed by
#			   S-functions.
#	  USER_INCLUDES  - Additional include paths
#			   (i.e. USER_INCLUDES="-Iwhere-ever -Iwhere-ever2")


#------------------------ Macros read by make_rtw ------------------------------
#
# The following macros are read by the Real-Time Workshop build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the Real-Time Workshop build procedure
#                    (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD         = make
HOST            = UNIX
BUILD           = yes
SYS_TARGET_FILE = rtw2orca.tlc

#---------------------- Tokens expanded by make_rtw ----------------------------
#
# The following tokens, when wrapped with "|>" and "|<" are expanded by the
# Real-Time Workshop build procedure.
#
#  MODEL_NAME      - Name of the Simulink block diagram
#  MODEL_MODULES   - Any additional generated source modules
#  MAKEFILE_NAME   - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT     - Path to were MATLAB is installed.
#  S_FUNCTIONS     - List of S-functions.
#  S_FUNCTIONS_LIB - List of S-functions libraries to link. 
#  SOLVER          - Solver source file name
#  NUMST           - Number of sample times
#  TID01EQ         - yes (1) or no (0): Are sampling rates of continuous task
#                    (tid=0) and 1st discrete task equal.
#  NCSTATES        - Number of continuous states
#  COMPUTER        - Computer type. See the MATLAB computer command.
#  BUILDARGS       - Options passed in at the command line.
#  MULTITASKING    - yes (1) or no (0): Is solver mode multitasking
#  EXT_MODE        - yes (1) or no (0): Build for external mode


MODEL             = extctrl_example20200707
MODULES           = extctrl_example20200707_data.c rtGetInf.c rtGetNaN.c rt_logging.c 
MAKEFILE          = extctrl_example20200707.mk
MATLAB_ROOT       = /opt/matlab/matlab-R2012a
S_FUNCTIONS       = 
S_FUNCTIONS_LIB   = 
SOLVER            = 
NUMST             = 1
TID01EQ           = 0
NCSTATES          = 0
COMPUTER          = GLNXA64
BUILDARGS         =  GENERATE_REPORT=0 CROSS_COMPILE="" RTW2ORCA_LOCAL="ext2irb irb2ext" RTW2ORCA_LABCOMM="extctrl_irc5_main_20120112" RTW2ORCA_EXTERNAL_SRCS="rtw2orca_irc5_main_20120112_xeno labcomm_lth_net_xeno" RTW2ORCA_VPATH=".. /opt/robot/labcomm /opt/robot/orca /opt/robot/extctrl" RTW2ORCA_LIB="-lrtdm -lnative -lxenomai" RTW2ORCA_INCLUDE="/opt/robot/include/lth/lth_net /opt/robot/extctrl /usr/xenomai/include" RTW2ORCA_LIBRARY="" RTW2ORCA_CFLAGS="-DROBOT_COUNT=1 -DROBOT_0_JOINT_COUNT=6 -DFORCE_SENSOR_COUNT=0" RTW2ORCA_POSTCOMMAND="mkdir -p /tmp/\$(USER)/rtw2orca ; cp \$(MODEL) /tmp/\$(USER)/rtw2orca" MODELLIB=extctrl_example20200707lib.a RELATIVE_PATH_TO_ANCHOR=.. MODELREF_TARGET_TYPE=NONE
MULTITASKING      = 0

ARCH='ARCH is not defined'

#
# Tool Specifications 
#
DEFAULT_OPT_OPTS = -O3 -Wall -Werror -Wno-unused-variable -Wno-unused-function
ANSI_OPTS        =
CC               = $(CROSS_COMPILE)gcc
LD               = $(CROSS_COMPILE)ld
# Since simulink in its infinite wisdom passes a LD_LIBRARY_PATH that points
# to it's own 'libgcc_s.so.1', which makes it impossible to run the 
# gcj java that is default on Fedora...
RTW2ORCA	 = unset LD_LIBRARY_PATH ; rtw2orca
LABCOMM		 = unset LD_LIBRARY_PATH ; labcomm
#
# Include Path 
#
VPATH=$(RTW2ORCA_VPATH)
VPATH+=$(MATLAB_ROOT)/rtw/c/src/
VPATH+=$(MATLAB_ROOT)/rtw/c/libsrc/
VPATH+=$(MATLAB_ROOT)/rtw/c/grt/

MATLAB_INCLUDES = \
	-I$(MATLAB_ROOT)/simulink/include \
        -I$(MATLAB_ROOT)/extern/include \
	-I$(MATLAB_ROOT)/rtw/c/src \
	-I$(MATLAB_ROOT)/rtw/c/libsrc

INCLUDES = -I.  \
           -I/opt/robot/orca \
           -I/opt/robot/labcomm \
	   $(MATLAB_INCLUDES) \
	   $(USER_INCLUDES) \
	   $(RTW2ORCA_INCLUDE:%=-I%)



#
# C Flags
#

# Optimization Options
OPT_OPTS = $(DEFAULT_OPT_OPTS)

# General User Options
OPTS = -fno-common -Wall -g -std=gnu89

# Compiler options, etc:
CC_OPTS = $(OPTS) $(OPT_OPTS) $(ANSI_OPTS) $(EXT_CC_OPTS)

CPP_REQ_DEFINES = -DMODEL=$(MODEL) -DRT -DNUMST=$(NUMST) \
                  -DTID01EQ=$(TID01EQ) -DNCSTATES=$(NCSTATES) -DUNIX \
                  -DMULTITASKING=$(MULTITASKING) -DUSE_RTMODEL \
                  -DORCA

CFLAGS = $(CC_OPTS) $(CPP_REQ_DEFINES) $(RTW2ORCA_CFLAGS)

LDFLAGS = $(RTW2ORCA_LIBRARY:%=-L%)


LIBS    = -lm $(RTW2ORCA_LIB) $(S_FUNCTIONS_LIB)
#LIBS += stdlib.a

#
# Source Files ------------------------------------
#

REQ_SRCS  = $(MODEL).c $(MODULES) rt_sim.c  rt_nonfinite.c $(EXT_SRC)
RTW2ORCA_INTERNAL_SRCS = rtw2orca \
			 rtw2orca_lc \
	 		 $(RTW2ORCA_LABCOMM:%=rtw2orca_lc_%) \
			 labcomm \
			 orca_server \
			 orca_messages

USER_OBJS       = $(USER_SRCS:%=%.o)
LOCAL_USER_OBJS = $(notdir $(USER_OBJS))

SRCS      = $(REQ_SRCS) $(S_FUNCTIONS) $(SOLVER)
OBJS      = $(SRCS:%.c=%.o) \
	    $(RTW2ORCA_INTERNAL_SRCS:%=%.o) \
	    $(RTW2ORCA_EXTERNAL_SRCS:%=%.o)
#
# Rules 
#
all:	$(MODEL) 
	$(RTW2ORCA_POSTCOMMAND)
	@echo '### Created $(MODEL)'

$(MODEL): $(OBJS) 
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LIBS)

rtw2orca.c rtw2orca.h rtw2orca.lc:	$(MODEL).rtw
	echo $${LD_LIBRARY_PATH}
	$(RTW2ORCA) \
		$(RTW2ORCA_LOCAL:%=--local=%) \
		$(RTW2ORCA_LABCOMM:%=--lc=rtw2orca_lc_%) \
		--lc=rtw2orca_lc \
		$(MODEL).rtw

rtw2orca_lc.c rtw2orca_lc.h: rtw2orca.lc
	$(LABCOMM) --c=rtw2orca_lc.c \
		--h=rtw2orca_lc.h $<

rtw2orca_lc_%.c rtw2orca_lc_%.h:	%.lc
	$(LABCOMM) --c=rtw2orca_lc_$*.c \
		--h=rtw2orca_lc_$*.h \
		--cprefix=rtw2orca $<

orca_messages.c orca_messages.h:	orca_messages.lc
	$(LABCOMM) --c=orca_messages.c --h=orca_messages.h $<

$(MODEL).rtw:
	@echo "### ERROR: 'Real-Time Workshop/Debug/Retain .rtw file'"
	@echo "### ERROR: not selected in in configuration"
	/bin/false

#
# Dependencies on generated header files
#
rtw2orca.o:		rtw2orca_lc.h $(RTW2ORCA_LABCOMM:%=rtw2orca_lc_%.h)
orca_server.o:		orca_messages.h

#
# Compile rules for all possible source locations
#

#stdio.h:
#	### Dummy stdio to trap simulink modules illeaglly using 
#	### stdio calls, this probably needs to be improved
#	@echo '#warning <stdio.h> should not be used' >  $@
#	@echo '#define FILE void' >> $@

%.o: ../%.c $(MODEL).rtw
	### Compiling $< (Local)
	$(CC) $(INCLUDES) $(CFLAGS) -o $@ -c $<

%.o: %.c $(MODEL).rtw
	### Compiling $< 
	$(CC) $(INCLUDES) $(CFLAGS) -o $@ -c $<

# EOF: orca.tmf
