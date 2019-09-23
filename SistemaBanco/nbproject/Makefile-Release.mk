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

<<<<<<< HEAD
${OBJECTDIR}/Banco.o: Banco.cpp
=======
${OBJECTDIR}/Banco.o: Banco.cpp 
>>>>>>> ecb828be4fee50d8a51aec038fb11fbeae01ac88
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Banco.o Banco.cpp

<<<<<<< HEAD
${OBJECTDIR}/Compra.o: Compra.cpp
=======
${OBJECTDIR}/Compra.o: Compra.cpp 
>>>>>>> ecb828be4fee50d8a51aec038fb11fbeae01ac88
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Compra.o Compra.cpp

<<<<<<< HEAD
${OBJECTDIR}/Fecha.o: Fecha.cpp
=======
${OBJECTDIR}/Fecha.o: Fecha.cpp 
>>>>>>> ecb828be4fee50d8a51aec038fb11fbeae01ac88
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Fecha.o Fecha.cpp

<<<<<<< HEAD
${OBJECTDIR}/Interfaz.o: Interfaz.cpp
=======
${OBJECTDIR}/Interfaz.o: Interfaz.cpp 
>>>>>>> ecb828be4fee50d8a51aec038fb11fbeae01ac88
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Interfaz.o Interfaz.cpp

<<<<<<< HEAD
${OBJECTDIR}/ListaCompra.o: ListaCompra.cpp
=======
${OBJECTDIR}/ListaCompra.o: ListaCompra.cpp 
>>>>>>> ecb828be4fee50d8a51aec038fb11fbeae01ac88
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ListaCompra.o ListaCompra.cpp

<<<<<<< HEAD
${OBJECTDIR}/ListaTarjeta.o: ListaTarjeta.cpp
=======
${OBJECTDIR}/ListaTarjeta.o: ListaTarjeta.cpp 
>>>>>>> ecb828be4fee50d8a51aec038fb11fbeae01ac88
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ListaTarjeta.o ListaTarjeta.cpp

<<<<<<< HEAD
${OBJECTDIR}/Pago.o: Pago.cpp
=======
${OBJECTDIR}/Pago.o: Pago.cpp 
>>>>>>> ecb828be4fee50d8a51aec038fb11fbeae01ac88
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Pago.o Pago.cpp

<<<<<<< HEAD
${OBJECTDIR}/Persona.o: Persona.cpp
=======
${OBJECTDIR}/Persona.o: Persona.cpp 
>>>>>>> ecb828be4fee50d8a51aec038fb11fbeae01ac88
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Persona.o Persona.cpp

<<<<<<< HEAD
${OBJECTDIR}/ProcesarCompra.o: ProcesarCompra.cpp
=======
${OBJECTDIR}/ProcesarCompra.o: ProcesarCompra.cpp 
>>>>>>> ecb828be4fee50d8a51aec038fb11fbeae01ac88
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ProcesarCompra.o ProcesarCompra.cpp

<<<<<<< HEAD
${OBJECTDIR}/ProcesarCompraCuotas.o: ProcesarCompraCuotas.cpp
=======
${OBJECTDIR}/ProcesarCompraCuotas.o: ProcesarCompraCuotas.cpp 
>>>>>>> ecb828be4fee50d8a51aec038fb11fbeae01ac88
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ProcesarCompraCuotas.o ProcesarCompraCuotas.cpp

<<<<<<< HEAD
${OBJECTDIR}/ProcesarPago.o: ProcesarPago.cpp
=======
${OBJECTDIR}/ProcesarPago.o: ProcesarPago.cpp 
>>>>>>> ecb828be4fee50d8a51aec038fb11fbeae01ac88
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ProcesarPago.o ProcesarPago.cpp

<<<<<<< HEAD
${OBJECTDIR}/ProcesarPagoMinimo.o: ProcesarPagoMinimo.cpp
=======
${OBJECTDIR}/ProcesarPagoMinimo.o: ProcesarPagoMinimo.cpp 
>>>>>>> ecb828be4fee50d8a51aec038fb11fbeae01ac88
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ProcesarPagoMinimo.o ProcesarPagoMinimo.cpp

<<<<<<< HEAD
${OBJECTDIR}/TarjetaCredito.o: TarjetaCredito.cpp
=======
${OBJECTDIR}/TarjetaCredito.o: TarjetaCredito.cpp 
>>>>>>> ecb828be4fee50d8a51aec038fb11fbeae01ac88
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TarjetaCredito.o TarjetaCredito.cpp

<<<<<<< HEAD
${OBJECTDIR}/Utiles.o: Utiles.cpp
=======
${OBJECTDIR}/Utiles.o: Utiles.cpp 
>>>>>>> ecb828be4fee50d8a51aec038fb11fbeae01ac88
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Utiles.o Utiles.cpp

<<<<<<< HEAD
${OBJECTDIR}/main.o: main.cpp
=======
${OBJECTDIR}/main.o: main.cpp 
>>>>>>> ecb828be4fee50d8a51aec038fb11fbeae01ac88
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
<<<<<<< HEAD
=======
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/sistemabanco.exe
>>>>>>> ecb828be4fee50d8a51aec038fb11fbeae01ac88

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
