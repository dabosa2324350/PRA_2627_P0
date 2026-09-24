# --- Variables ---
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11
TARGET = robot_exe
OBJS = main.o RoboticArm.o

# --- Reglas ---

# 'all' es la regla por defecto que se ejecuta al escribir simplemente 'make'
all: $(TARGET)

# Regla para enlazar los ficheros objeto (.o) y crear el ejecutable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Reglas para compilar cada fichero fuente (.cpp) a código objeto (.o)
# $< representa el primer prerrequisito (el .cpp) y $@ representa el objetivo (el .o)
main.o: main.cpp RoboticArm.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

RoboticArm.o: RoboticArm.cpp RoboticArm.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla 'test' para ejecutar el programa y comprobar que funciona
test: $(TARGET)
	@echo "\n=== EJECUTANDO EL PROGRAMA DE PRUEBA ==="
	./$(TARGET)

# Regla 'clean' para borrar los ficheros generados y limpiar el directorio
clean:
	@echo "\n=== LIMPIANDO FICHEROS COMPILADOS ==="
	rm -f $(OBJS) $(TARGET)

# Indicamos a Make que estas reglas no son nombres de ficheros reales
.PHONY: all clean test
