cmake_minimum_required(VERSION 3.8)
project(cpp-date-time)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin)

add_executable(01_clock_t                01_clock_t.cpp)
add_executable(02_epoch_time             02_epoch_time.cpp)
add_executable(03_timediff               03_timediff.cpp)
add_executable(04_ctime                  04_ctime.cpp)
add_executable(05_ctime_tm               05_ctime_tm.cpp)
add_executable(06_tm_format              06_tm_format.cpp)
add_executable(07_timespec               07_timespec.cpp)
add_executable(08_clock                  08_clock.cpp)
add_executable(09_time_t_conver          09_time_t_conver.cpp)
add_executable(10_ratio                  10_ratio.cpp)
add_executable(11_duration               11_duration.cpp)
add_executable(12_duration_literal.cpp   12_duration_literal)
add_executable(13_time_point_diff.cpp    13_time_point_diff)

