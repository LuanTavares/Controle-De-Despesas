QT += widgets sql

SOURCES += \
    Main.cpp \
    TipoLancamento.cpp \
    Lancamento.cpp \
    TipoLancamentoDAO.cpp \
    Conexao.cpp \
    LancamentoDAO.cpp \
    Principal.cpp \
    CadastroTipoLancamento.cpp \
    CadastroLancamento.cpp

HEADERS += \
    TipoLancamento.h \
    Lancamento.h \
    TipoLancamentoDAO.h \
    Conexao.h \
    LancamentoDAO.h \
    Principal.h \
    CadastroTipoLancamento.h \
    CadastroLancamento.h

RESOURCES += \
    Arquivos.qrc

FORMS += \
    Principal.ui \
    CadastroTipoLancamento.ui \
    CadastroLancamento.ui
