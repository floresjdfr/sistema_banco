#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Banco.o \
	${OBJECTDIR}/Compra.o \
	${OBJECTDIR}/Fecha.o \
	${OBJECTDIR}/Interfaz.o \
	${OBJECTDIR}/ListaCompra.o \
	${OBJECTDIR}/ListaTarjeta.o \
	${OBJECTDIR}/Pago.o \
	${OBJECTDIR}/Persona.o \
	${OBJECTDIR}/ProcesarCompra.o \
	${OBJECTDIR}/ProcesarCompraCuotas.o \
	${OBJECTDIR}/ProcesarPago.o \
	${OBJECTDIR}/ProcesarPagoCuota.o \
	${OBJECTDIR}/ProcesarPagoMinimo.o \
	${OBJECTDIR}/TarjetaCredito.o \
	${OBJECTDIR}/Utiles.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/sistemabanco.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/sistemabanco.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/sistemabanco ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Banco.o: Banco.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Banco.o Banco.cpp

${OBJECTDIR}/Compra.o: Compra.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Compra.o Compra.cpp

${OBJECTDIR}/Fecha.o: Fecha.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Fecha.o Fecha.cpp

${OBJECTDIR}/Interfaz.o: Interfaz.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Interfaz.o Interfaz.cpp

${OBJECTDIR}/ListaCompra.o: ListaCompra.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ListaCompra.o ListaCompra.cpp

${OBJECTDIR}/ListaTarjeta.o: ListaTarjeta.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ListaTarjeta.o ListaTarjeta.cpp

${OBJECTDIR}/Pago.o: Pago.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Pago.o Pago.cpp

${OBJECTDIR}/Persona.o: Persona.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Persona.o Persona.cpp

${OBJECTDIR}/ProcesarCompra.o: ProcesarCompra.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ProcesarCompra.o ProcesarCompra.cpp

${OBJECTDIR}/ProcesarCompraCuotas.o: ProcesarCompraCuotas.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ProcesarCompraCuotas.o ProcesarCompraCuotas.cpp

${OBJECTDIR}/ProcesarPago.o: ProcesarPago.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ProcesarPago.o ProcesarPago.cpp

${OBJECTDIR}/ProcesarPagoCuota.o: ProcesarPagoCuota.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ProcesarPagoCuota.o ProcesarPagoCuota.cpp

${OBJECTDIR}/ProcesarPagoMinimo.o: ProcesarPagoMinimo.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ProcesarPagoMinimo.o ProcesarPagoMinimo.cpp

${OBJECTDIR}/TarjetaCredito.o: TarjetaCredito.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TarjetaCredito.o TarjetaCredito.cpp

${OBJECTDIR}/Utiles.o: Utiles.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Utiles.o Utiles.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
