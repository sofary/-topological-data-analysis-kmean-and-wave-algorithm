cmake_minimum_required(VERSION 3.17)
project(TDA_Arkhipova)

set(CMAKE_CXX_STANDARD 14)

add_executable(TDA_Arkhipova main.cpp Interface.cpp Interface.h Wave.cpp Wave.h Point.cpp Point.h Kmean.cpp Kmean.h Group.cpp Group.h Functional.cpp Functional.h Field.cpp Field.h Cluster.cpp Cluster.h)