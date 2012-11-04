# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))
WRVX_COMPBASE := $(subst \,/,$(WRVX_COMPBASE))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/WindRiver/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/2013_Bandit



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = 2013_Bandit/$(MODE_DIR)/2013_Bandit.out \
	 2013_Bandit_partialImage/$(MODE_DIR)/2013_Bandit_partialImage.o


#Rules

# 2013_Bandit
ifeq ($(DEBUG_MODE),1)
2013_Bandit/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
2013_Bandit/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
2013_Bandit/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
2013_Bandit/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
2013_Bandit/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
2013_Bandit/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
2013_Bandit/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
2013_Bandit/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
2013_Bandit/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
2013_Bandit/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
2013_Bandit/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
2013_Bandit/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
2013_Bandit/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
2013_Bandit/$(MODE_DIR)/% : IDE_LIBRARIES = 
2013_Bandit/$(MODE_DIR)/% : IDE_DEFINES = 
2013_Bandit/$(MODE_DIR)/% : PROJECT_TYPE = DKM
2013_Bandit/$(MODE_DIR)/% : DEFINES = 
2013_Bandit/$(MODE_DIR)/% : EXPAND_DBG = 0
2013_Bandit/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
2013_Bandit/$(MODE_DIR)/% : CPU = PPC603
2013_Bandit/$(MODE_DIR)/% : TOOL_FAMILY = gnu
2013_Bandit/$(MODE_DIR)/% : TOOL = gnu
2013_Bandit/$(MODE_DIR)/% : TOOL_PATH = 
2013_Bandit/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp
2013_Bandit/$(MODE_DIR)/% : LIBPATH = 
2013_Bandit/$(MODE_DIR)/% : LIBS = 
2013_Bandit/$(MODE_DIR)/% : OBJ_DIR := 2013_Bandit/$(MODE_DIR)

OBJECTS_2013_Bandit = 2013_Bandit_partialImage/$(MODE_DIR)/2013_Bandit_partialImage.o

2013_Bandit/$(MODE_DIR)/2013_Bandit.out : $(OBJECTS_2013_Bandit)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_2013_Bandit) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_2013_Bandit) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

2013_Bandit/$(MODE_DIR)/2013_Bandit_compile_file : $(FILE) ;

_clean :: 2013_Bandit/$(MODE_DIR)/2013_Bandit_clean

2013_Bandit/$(MODE_DIR)/2013_Bandit_clean : 
	$(TRACE_FLAG)if [ -d "2013_Bandit" ]; then cd "2013_Bandit"; rm -rf $(MODE_DIR); fi


# 2013_Bandit_partialImage
ifeq ($(DEBUG_MODE),1)
2013_Bandit_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
2013_Bandit_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
2013_Bandit_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
2013_Bandit_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
2013_Bandit_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
2013_Bandit_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
2013_Bandit_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
2013_Bandit_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
2013_Bandit_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
2013_Bandit_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
2013_Bandit_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
2013_Bandit_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
2013_Bandit_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
2013_Bandit_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = 
2013_Bandit_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
2013_Bandit_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
2013_Bandit_partialImage/$(MODE_DIR)/% : DEFINES = 
2013_Bandit_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
2013_Bandit_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
2013_Bandit_partialImage/$(MODE_DIR)/% : CPU = PPC603
2013_Bandit_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
2013_Bandit_partialImage/$(MODE_DIR)/% : TOOL = gnu
2013_Bandit_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
2013_Bandit_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp
2013_Bandit_partialImage/$(MODE_DIR)/% : LIBPATH = 
2013_Bandit_partialImage/$(MODE_DIR)/% : LIBS = 
2013_Bandit_partialImage/$(MODE_DIR)/% : OBJ_DIR := 2013_Bandit_partialImage/$(MODE_DIR)

2013_Bandit_partialImage/$(MODE_DIR)/Objects/2013_Bandit/component.o : $(PRJ_ROOT_DIR)/component.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


2013_Bandit_partialImage/$(MODE_DIR)/Objects/2013_Bandit/controller.o : $(PRJ_ROOT_DIR)/controller.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


2013_Bandit_partialImage/$(MODE_DIR)/Objects/2013_Bandit/drive.o : $(PRJ_ROOT_DIR)/drive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


2013_Bandit_partialImage/$(MODE_DIR)/Objects/2013_Bandit/robot.o : $(PRJ_ROOT_DIR)/robot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_2013_Bandit_partialImage = 2013_Bandit_partialImage/$(MODE_DIR)/Objects/2013_Bandit/component.o \
	 2013_Bandit_partialImage/$(MODE_DIR)/Objects/2013_Bandit/controller.o \
	 2013_Bandit_partialImage/$(MODE_DIR)/Objects/2013_Bandit/drive.o \
	 2013_Bandit_partialImage/$(MODE_DIR)/Objects/2013_Bandit/robot.o

2013_Bandit_partialImage/$(MODE_DIR)/2013_Bandit_partialImage.o : $(OBJECTS_2013_Bandit_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_2013_Bandit_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

2013_Bandit_partialImage/$(MODE_DIR)/2013_Bandit_partialImage_compile_file : $(FILE) ;

_clean :: 2013_Bandit_partialImage/$(MODE_DIR)/2013_Bandit_partialImage_clean

2013_Bandit_partialImage/$(MODE_DIR)/2013_Bandit_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "2013_Bandit_partialImage" ]; then cd "2013_Bandit_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := 2013_Bandit_partialImage/$(MODE_DIR)/Objects/2013_Bandit/component.d 2013_Bandit_partialImage/$(MODE_DIR)/Objects/2013_Bandit/controller.d 2013_Bandit_partialImage/$(MODE_DIR)/Objects/2013_Bandit/drive.d \
	 2013_Bandit_partialImage/$(MODE_DIR)/Objects/2013_Bandit/robot.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

JOBS?=1
ifeq ($(JOBS),1)
main_all : external_build  $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"
else
main_all : external_build 
	@$(MAKE) -f $(MAKEFILE) --jobs $(JOBS) $(MFLAGS) $(PROJECT_TARGETS);\
	echo "make: built targets of `pwd`"
endif 

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
