#-------------------------------------------------
#
# Project created by QtCreator 2019-06-22T00:40:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TP1-2019-1_QT
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
INCLUDEPATH += "include/"
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    src/ServiceContainers/eventscontainer.cpp \
    src/ServiceContainers/userscontainer.cpp \
        src/domains/ActualDate.cpp \
        src/domains/AgeGroup.cpp \
        src/domains/Availability.cpp \
        src/domains/CPF.cpp \
        src/domains/CardNumber.cpp \
        src/domains/City.cpp \
        src/domains/EventCode.cpp \
        src/domains/EventName.cpp \
        src/domains/EventType.cpp \
        src/domains/Password.cpp \
        src/domains/PresentationCode.cpp \
        src/domains/Price.cpp \
        src/domains/Room.cpp \
        src/domains/SecureCode.cpp \
        src/domains/StartTime.cpp \
        src/domains/State.cpp \
        src/domains/TicketCode.cpp \
        src/domains/ValidDate.cpp \
        src/entities/CreditCard.cpp \
        src/entities/Event.cpp \
        src/entities/Presentation.cpp \
        src/entities/Ticket.cpp \
        src/entities/User.cpp \
        src/main.cpp \
        src/presentation/createpresentation.cpp \
        src/presentation/logged.cpp \
        src/ServiceContainers/presentationscontainer.cpp \
        src/presentation/receipt.cpp \
        src/presentation/searchevent.cpp \
        src/presentation/searchresult.cpp \
        src/presentation/signup.cpp \
        src/presentation/enrollevent.cpp \
        src/presentation/ticketsystem.cpp \
        src/presentation/login.cpp \

HEADERS += \
        include/PresentationInterface.h \
        include/ServiceContainers/eventscontainer.h \
        include/ServiceContainers/presentationscontainer.hpp \
        include/ServiceContainers/userscontainer.hpp \
        include/ServiceInterface.h \
        include/domains/ActualDate.hpp \
        include/domains/AgeGroup.hpp \
        include/domains/Availability.hpp \
        include/domains/CPF.hpp \
        include/domains/CardNumber.hpp \
        include/domains/City.hpp \
        include/domains/EventCode.hpp \
        include/domains/EventName.hpp \
        include/domains/EventType.hpp \
        include/domains/Password.hpp \
        include/domains/PresentationCode.hpp \
        include/domains/Price.hpp \
        include/domains/Room.hpp \
        include/domains/SecureCode.hpp \
        include/domains/StartTime.hpp \
        include/domains/State.hpp \
        include/domains/TicketCode.hpp \
        include/domains/ValidDate.hpp \
        include/domains/enums/states.hpp \
        include/entities/CreditCard.hpp \
        include/entities/Event.hpp \
        include/entities/Presentation.hpp \
        include/entities/Ticket.hpp \
        include/entities/User.hpp \
        include/presentation/createpresentation.hpp \
        include/presentation/logged.hpp \
        include/presentation/receipt.hpp \
        include/presentation/enrollevent.h \
        include/presentation/searchevent.hpp \
        include/presentation/searchresult.hpp \
        include/presentation/signup.hpp \
        include/presentation/ticketsystem.h \
        include/presentation/login.h

FORMS += \
        forms/deleteevent.ui \
        forms/editevent.ui \
        forms/createpresentation.ui \
        forms/enrollevent.ui \
        forms/infoevent.ui \
        forms/logged.ui \
        forms/login.ui \
        forms/receiptsignup.ui \
        forms/searchevent.ui \
        forms/searchresult.ui \
        forms/signup.ui \
        forms/ticketsystem.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
