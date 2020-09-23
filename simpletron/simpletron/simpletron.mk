##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=simpletron
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/user/Desktop/simpletron
ProjectPath            :=C:/Users/user/Desktop/simpletron/simpletron
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=user
Date                   :=24/09/2020
CodeLitePath           :=D:/CodeLite
LinkerName             :="C:/Program Files (x86)/CodeBlocks/MinGW/bin/gcc.exe"
SharedObjectLinkerName :="C:/Program Files (x86)/CodeBlocks/MinGW/bin/g++.exe" -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="simpletron.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files (x86)/CodeBlocks/MinGW/bin/windres.exe"
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/ar.exe" rcu
CXX      := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/g++.exe"
CC       := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/gcc.exe"
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=D:\CodeLite
Objects0=$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IntermediateDirectory)/SML_exe.c$(ObjectSuffix) $(IntermediateDirectory)/Simpletron_UI.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.c$(ObjectSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main.c$(DependSuffix) -MM main.c
	$(CC) $(SourceSwitch) "C:/Users/user/Desktop/simpletron/simpletron/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.c$(PreprocessSuffix) main.c

$(IntermediateDirectory)/SML_exe.c$(ObjectSuffix): SML_exe.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SML_exe.c$(ObjectSuffix) -MF$(IntermediateDirectory)/SML_exe.c$(DependSuffix) -MM SML_exe.c
	$(CC) $(SourceSwitch) "C:/Users/user/Desktop/simpletron/simpletron/SML_exe.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SML_exe.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SML_exe.c$(PreprocessSuffix): SML_exe.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SML_exe.c$(PreprocessSuffix) SML_exe.c

$(IntermediateDirectory)/Simpletron_UI.c$(ObjectSuffix): Simpletron_UI.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Simpletron_UI.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Simpletron_UI.c$(DependSuffix) -MM Simpletron_UI.c
	$(CC) $(SourceSwitch) "C:/Users/user/Desktop/simpletron/simpletron/Simpletron_UI.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Simpletron_UI.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Simpletron_UI.c$(PreprocessSuffix): Simpletron_UI.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Simpletron_UI.c$(PreprocessSuffix) Simpletron_UI.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


