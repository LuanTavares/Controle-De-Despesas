QT += widgets sql

SOURCES += \
    Main.cpp \
    TipoLancamento.cpp \
    Lancamento.cpp \
    TipoLancamentoDAO.cpp \
    Conexao.cpp \
    LancamentoDAO.cpp \
    Principal.cpp

HEADERS += \
    TipoLancamento.h \
    Lancamento.h \
    TipoLancamentoDAO.h \
    Conexao.h \
    LancamentoDAO.h \
    Principal.h

RESOURCES += \
    Arquivos.qrc

FORMS += \
    Principal.ui
