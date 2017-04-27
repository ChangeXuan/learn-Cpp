cmake_minimum_required(VERSION 3.7)
project(LearnCpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp coordin.h coordin.cpp stock.h stock.cpp myTime.h myTime.cpp test.h test.cpp stringClass.cpp stringClass.h Queue.h Queue.cpp brass.h Tv.h Tv.cpp SelfThrowClass.h Stack.h stcktp1.h ArrayTp.h tempMemb.h testUse.cpp)
add_executable(LearnCpp ${SOURCE_FILES})