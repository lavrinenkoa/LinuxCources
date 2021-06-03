# минимальная версия CMake необходимая для успешной интерпретации файла.
cmake_minimum_required (VERSION 2.6) 
 
# определяется переменная PROJECT и ей задается значение hello_world — так будет называться наша программа
set (PROJECT hello_world) 

# конструкция ${ИМЯ_ПЕРЕМЕННОЙ} возвращает значение переменной, таким образом 
# проект будет называться hello_world.
project (${PROJECT}) 
 
# HEADERS и SOURCES переменные содержащие список файлов необходимых для сборки проекта.
set (HEADERS 
	hello.h)
set (SOURCES 
	hello.cpp
	main.cpp) 

# команда собрать исполняемый файл с именем указанном в переменной PROJECT 
# из файлов имена которых находятся в переменных HEADERS и SOURCES.
add_executable (${PROJECT} ${HEADERS} ${SOURCES})

