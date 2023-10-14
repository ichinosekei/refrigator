# CMakeList.txt: проект CMake для CalcCPP; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CalcCPP "CalcCPP.cpp" "CalcCPP.h" "Token_stream.h" "Token_stream.cpp" "Token.h" "funktions.h" "funktions.cpp" "std_lib_facilities.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CalcCPP PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
