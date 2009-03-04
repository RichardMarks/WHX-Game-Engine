#
# SConstruct
# this scons build script produces the whxge library
################################################################################
projectConfig = {}
################################################################################
# this is the file name of the library file to output
projectConfig['lib'] = 'whxge'
################################################################################
projectConfig['src'] = Split("""
	src/engine/WHXGECore.cpp
	""")
################################################################################
buildEnv = Environment(CCFLAGS = '-g', CPPPATH = Split("""
	.
	./include/engine/
	"""))

buildEnv.StaticLibrary('./release/' + projectConfig['lib'], projectConfig['src'])
################################################################################

