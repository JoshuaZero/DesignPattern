cmake_minimum_required(VERSION 3.12)
project(DesignPattern)

if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
    message(FATAL_ERROR "FATAL In-source builds are not allowed.
        You should create a separate directory for build files.")
endif ()

if ("${CMAKE_BUILD_TYPE}" STREQUAL "Release")
    set(CMAKE_CXX_FLAGS  "-pthread -std=c++14 -O3 -g3 -Wall -fmessage-length=0 -fPIC")
else()
    set(CMAKE_CXX_FLAGS  "-pthread -std=c++14 -O0 -g3 -Wall -fmessage-length=0 -fPIC ")
    #-fno-elide-constructors  不开启返回值优化
endif ()

#find the ffmpeg include file
find_path(AVCODEC_PATH libavcodec/avcodec.h)
if (AVCODEC_PATH)
    include_directories(${AVCODEC_PATH})
    message(STATUS "avcodec inlcude path: ${AVCODEC_PATH}")
endif ()

find_path(AVDEVICE_PATH libavdevice/avdevice.h)
if (AVDEVICE_PATH)
    include_directories(${AVDEVICE_PATH})
    message(STATUS "avdevice include path: ${AVDEVICE_PATH}")
endif ()

find_path(AVFILTER_PATH libavfilter/avfilter.h)
if (AVFILTER_PATH)
    include_directories(${AVFILTER_PATH})
    message(STATUS "avfilter include path: ${AVFILTER_PATH}")
endif ()

find_path(AVFORMAT_PATH libavformat/avformat.h)
if (AVFORMAT_PATH)
    include_directories(${AVFORMAT_PATH})
    message(STATUS "avformat include path: ${AVFORMAT_PATH}")
endif ()

find_path(AVRESAMPLE_PATH libavresample/avresample.h)
if (AVRESAMPLE_PATH)
    include_directories(${AVRESAMPLE_PATH})
    message(STATUS "avresample include path:${AVRESAMPLE_PATH}")
endif ()

find_path(AVUTIL_PATH libavutil/avutil.h)
if (AVUTIL_PATH)
    include_directories(${AVUTIL_PATH})
    message(STATUS "avutil include path: ${AVUTIL_PATH}")
endif ()

find_path(AVPOSTPROC_PATH libavpostgroc/postprocess.h)
if (AVPOSTPROC_PATH)
    include_directories(${AVPOSTPROC_PATH})
    message(STATUS "avpostproc include path: ${POSTPROC_PATH}")
endif ()

find_path(SWRESAMPLE_PATH libswresample/swresample.h)
if (SWRESAMPLE_PATH)
    include_directories(${SWRESAMPLE_PATH})
    message(STATUS "swaresample include path:${SWRESAMPLE_PATH}")
endif ()

find_path(SWSCALE_PATH libswscale/swscale.g)
if (SWSCALE_PATH)
    include_directories(${SWSCALE_PATH})
    message(STATUS "swscale include path: ${SWSCALE_PATH}")
endif ()

#find the ffmpeg lib file
find_library(AVCODEC_LIB avcodec)
if (AVCODEC_LIB)
    string(REGEX REPLACE "(.+)\\libavcodec.*" "\\1" AVCODEC_LIB_PATH ${AVCODEC_LIB})
    link_directories(${AVCODEC_LIB_PATH})
    message(STATUS "avcodec library path: ${AVCODEC_LIB_PATH}")
endif ()

# Find OpenCV, you may need to set OpenCV_DIR variable
# to the absolute path to the directory containing OpenCVConfig.cmake file
# via the command line or GUI
find_package(OpenCV REQUIRED)

# If the package has been found, several variables will
# be set, you can find the full list with descriptions
# in the OpenCVConfig.cmake file.
# Print some message showing some of them
message(STATUS "    OpenCV library status:")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")

if(CMAKE_VERSION VERSION_LESS "2.8.11")
    # Add OpenCV headers location to your include paths
    include_directories(${OpenCV_INCLUDE_DIRS})
endif()
link_directories(${OpenCV_LIBS})


aux_source_directory(${CMAKE_SOURCE_DIR}/src/Factory APP_FACTORY)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/AbstractFactory APP_ABSTRACTFACT)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Adaper APP_ADAPER)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Bridge APP_BRIDGE)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Builder APP_BUILDER)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Composite APP_COMPOSITE)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Decorator APP_DECORATOR)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Facade APP_FACADE)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Factory APP_FACTORY)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Flyweight APP_FLYWEIGHT)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Prototype APP_PROTOTYPE)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/proxy APP_PROXY)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Singleto APP_SINGLETON)

aux_source_directory(${CMAKE_SOURCE_DIR}/src/Base_problem/ADT_stack APP_ADTSTACK)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Base_problem/Array APP_ARRAY)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Base_problem/function APP_FUNCTION)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Base_problem/FunctionPointer APP_FUNCPTR)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Base_problem/limits APP_LIMITS)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Base_problem/threadpool APP_THREADPOOL)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Base_problem/connnectpool APP_CONNPOOL)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Base_problem/stringallocmem APP_STRALLOCMEM)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Base_problem/exception APP_EXCP)

aux_source_directory(${CMAKE_SOURCE_DIR}/src/UseCPP11New APP_CPPNEW)

aux_source_directory(${CMAKE_SOURCE_DIR}/src/UseFFmpegAPI/use_libavcodec APP_USEAVCODEC)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/UseFFmpegAPI/use_libavdevice APP_USEAVDEVICE)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/UseFFmpegAPI/use_libavfilter APP_USEAVFILTER)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/UseFFmpegAPI/use_libavformat APP_USEAVFORMAT)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/UseFFmpegAPI/use_libavutil APP_USEAVUTIL)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/UseFFmpegAPI/use_libavswscale APP_USEAVSWSCALE)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/UseFFmpegAPI/use_allAPId APP_USEFFMPEG)

aux_source_directory(${CMAKE_SOURCE_DIR}/src/UseOpenCVAPI APP_USEOPENCV)

#use link_libraries or targer_link_libraries to tell the complier which lib to link
#select one of link_libraries and target_link_libraries
link_libraries(
    avcodec
    avformat
    avutil
    avfilter
    swresample
    swscale
    opencv_core
    opencv_highgui
    opencv_video
    opencv_videoio
    opencv_highgui
    opencv_imgproc
    opencv_imgcodecs
)



add_executable(DesignPattern main.cpp ${APP_FACTORY} ${APP_ABSTRACTFACT} ${APP_ADAPER} ${APP_BRIDGE} ${APP_BUILDER} ${APP_COMPOSITE}
        ${APP_DECORATOR} ${APP_FACADE} ${APP_FACTORY} ${APP_FLYWEIGHT} ${APP_PROTOTYPE} ${APP_PROXY} ${APP_SINGLETON} ${APP_ADTSTACK}
        ${APP_ARRAY} ${APP_FUNCTION} ${APP_FUNCPTR} ${APP_LIMITS} ${APP_THREADPOOL} ${APP_CONNPOOL} ${APP_STRALLOCMEM} ${APP_USEAVCODEC}
        ${APP_EXCP} ${APP_FFMPEG} ${APP_CPPNEW} ${APP_USEOPENCV} src/Base_problem/Trace/CTrace.cpp src/Base_problem/Trace/CTrace.h)
#[[
target_link_libraries(
        DesignPattern

        avcodec
        avformat
        avutil
        avfilter
        swresample
        swscale
)
]]