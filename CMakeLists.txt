cmake_minimum_required(VERSION 3.12)
project(untitled3)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled3 main.cpp Common/EnvironmentVars.cpp Common/EnvironmentVars.h Common/Consts.cpp Common/Consts.h Interpreter/Interpreter.cpp Interpreter/Interpreter.h Commands/Command.cpp Commands/Command.h Commands/CreateCommand.h Handlers/Conditions.cpp Handlers/Conditions.h)