include(../defaults.pri)
QT       += core testlib opengl
QT       -= gui
TARGET = SLTranslator
CONFIG   += console
CONFIG   -= app_bundle
CONFIG   += testcase
TEMPLATE = app
SOURCES += main.cpp \
    imagehandlertest.cpp

HEADERS += \
    imagehandlertest.h

win32 {
message("Using win32 configuration")

OPENCV_PATH = C:/devel/OpenCV/opencv-2.4.6.0 # Note: update with the correct OpenCV version


#LIBS_PATH = "$$OPENCV_PATH/build/x86/mingw/lib" #project compiled using MINGW
LIBS_PATH = "$$OPENCV_PATH/build/x86/vc10/lib" #project compiled using Visual C++ 2010 32bit compiler

    CONFIG(debug, debug|release) {
    LIBS     += -L$$LIBS_PATH \
                -lopencv_core246d \
                -lopencv_highgui246d
    }

    CONFIG(release, debug|release) {
    LIBS     += -L$$LIBS_PATH \
                -lopencv_core246 \
                -lopencv_highgui246
    }
}

unix {
message("Using unix configuration")

OPENCV_PATH = -I/usr/local/include

LIBS_PATH = /usr/local/lib

LIBS     += \
    -L$$LIBS_PATH \
    -lopencv_core \
    -lopencv_imgcodecs \
    -lopencv_imgproc \
    -lopencv_highgui \
    -lopencv_videoio \
    -lopencv_video


}

INCLUDEPATH += \
    $$OPENCV_PATH/modules/core/include/ \ #core module
    $$OPENCV_PATH/modules/highgui/include/ #highgui modul

message("OpenCV path: $$OPENCV_PATH")
message("Includes path: $$INCLUDEPATH")
message("Libraries: $$LIBS")

