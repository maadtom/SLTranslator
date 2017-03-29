#-------------------------------------------------
#
# Project created by QtCreator 2017-03-27T21:48:20
#
#-------------------------------------------------
QT += core gui opengl
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = SLTranslator
TEMPLATE = subdirs
SUBDIRS = \
    src \
    app \
    test

app.depends = src
test.depends = src

OTHER_FILES += \
defaults.pri


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

