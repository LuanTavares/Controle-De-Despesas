/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package Interface;

import Classes.Lancamento;
import DAO.LancamentoDAO;
import java.util.GregorianCalendar;
import java.util.LinkedList;
import java.util.List;
import javax.swing.JTable;
import javax.swing.table.DefaultTableModel;
import javax.swing.table.TableColumnModel;

/**
 *
 * @author luan.tavares
 */
public class Principal extends javax.swing.JFrame {

    private List <Lancamento> lancamentos = new LinkedList<Lancamento>();
    /**
     * Creates new form Principal
     */
    public Principal() {
        initComponents();
        popularJanelaJaneiro();
        popularJanelaFevereiro();
        popularJanelaMarco();
        popularJanelaAbril();
        popularJanelaMaio();
        popularJanelaJunho();
        popularJanelaJulho();
    }

    public void popularJanelaJaneiro() {
        LancamentoDAO lancamentoDao = new LancamentoDAO();
        String[] colunas = {"Tipo","Valor"};
        GregorianCalendar janeiro = new GregorianCalendar(2014, 0, 31);        
        lancamentos = lancamentoDao.buscaLancamentos(janeiro);
        DefaultTableModel modelo = new DefaultTableModel(null,colunas) {
            @Override
            public boolean isCellEditable(int row, int col){
                return false;
            }
        };
        jTableJaneiro.setModel(modelo);
        if (lancamentos != null){
            for(int i = 0; i< lancamentos.size(); i++) {
                Lancamento dialogLancamento = new Lancamento();
                dialogLancamento = lancamentos.get(i);
                modelo.addRow(new Object[]{
                    dialogLancamento.getTipo(),
                    dialogLancamento.getValor()
                });
            }
        }
        
    }
    
    public void popularJanelaFevereiro() {
        LancamentoDAO lancamentoDao = new LancamentoDAO();
        String[] colunas = {"Tipo","Valor"};
        GregorianCalendar fevereiro = new GregorianCalendar(2014, 1, 28);
        lancamentos = lancamentoDao.buscaLancamentos(fevereiro);
        DefaultTableModel modelo = new DefaultTableModel(null,colunas) {
            @Override
            public boolean isCellEditable(int row, int col){
                return false;
            }
        };
        jTableFevereiro.setModel(modelo);
        for(int i = 0; i< lancamentos.size(); i++) {
            Lancamento dialogLancamento = new Lancamento();
            dialogLancamento = lancamentos.get(i);
            modelo.addRow(new Object[]{
                dialogLancamento.getTipo(),
                dialogLancamento.getValor()
            });
        }
        
    }
    
    public void popularJanelaMarco() {
        LancamentoDAO lancamentoDao = new LancamentoDAO();
        String[] colunas = {"Tipo","Valor"};
        GregorianCalendar marco = new GregorianCalendar(2014, 2, 31);
        lancamentos = lancamentoDao.buscaLancamentos(marco);
        DefaultTableModel modelo = new DefaultTableModel(null,colunas) {
            @Override
            public boolean isCellEditable(int row, int col){
                return false;
            }
        };
        jTableMarço.setModel(modelo);
        for(int i = 0; i< lancamentos.size(); i++) {
            Lancamento dialogLancamento = new Lancamento();
            dialogLancamento = lancamentos.get(i);
            modelo.addRow(new Object[]{
                dialogLancamento.getTipo(),
                dialogLancamento.getValor()
            });
        }
        
    }
    
    public void popularJanelaAbril() {
        LancamentoDAO lancamentoDao = new LancamentoDAO();
        String[] colunas = {"Tipo","Valor"};
        GregorianCalendar abril = new GregorianCalendar(2014, 3, 30);
        lancamentos = lancamentoDao.buscaLancamentos(abril);
        DefaultTableModel modelo = new DefaultTableModel(null,colunas) {
            @Override
            public boolean isCellEditable(int row, int col){
                return false;
            }
        };
        jTableAbril.setModel(modelo);
        for(int i = 0; i< lancamentos.size(); i++) {
            Lancamento dialogLancamento = new Lancamento();
            dialogLancamento = lancamentos.get(i);
            modelo.addRow(new Object[]{
                dialogLancamento.getTipo(),
                dialogLancamento.getValor()
            });
        }
        
    }
    
    public void popularJanelaMaio() {
        LancamentoDAO lancamentoDao = new LancamentoDAO();
        String[] colunas = {"Tipo","Valor"};
        GregorianCalendar maio = new GregorianCalendar(2014, 4, 31);
        lancamentos = lancamentoDao.buscaLancamentos(maio);
        DefaultTableModel modelo = new DefaultTableModel(null,colunas) {
            @Override
            public boolean isCellEditable(int row, int col){
                return false;
            }
        };
        jTableMaio.setModel(modelo);
        for(int i = 0; i< lancamentos.size(); i++) {
            Lancamento dialogLancamento = new Lancamento();
            dialogLancamento = lancamentos.get(i);
            modelo.addRow(new Object[]{
                dialogLancamento.getTipo(),
                dialogLancamento.getValor()
            });
        }
        
    }
    
    public void popularJanelaJunho() {
        LancamentoDAO lancamentoDao = new LancamentoDAO();
        String[] colunas = {"Tipo","Valor"};
        GregorianCalendar junho = new GregorianCalendar(2014, 5, 30);
        lancamentos = lancamentoDao.buscaLancamentos(junho);
        DefaultTableModel modelo = new DefaultTableModel(null,colunas) {
            @Override
            public boolean isCellEditable(int row, int col){
                return false;
            }
        };
        jTableJunho.setModel(modelo);
        for(int i = 0; i< lancamentos.size(); i++) {
            Lancamento dialogLancamento = new Lancamento();
            dialogLancamento = lancamentos.get(i);
            modelo.addRow(new Object[]{
                dialogLancamento.getTipo(),
                dialogLancamento.getValor()
            });
        }
        
    }
    
    public void popularJanelaJulho() {
        LancamentoDAO lancamentoDao = new LancamentoDAO();
        String[] colunas = {"Tipo","Valor"};
        GregorianCalendar julho = new GregorianCalendar(2014, 6, 31);
        lancamentos = lancamentoDao.buscaLancamentos(julho);
        DefaultTableModel modelo = new DefaultTableModel(null,colunas) {
            @Override
            public boolean isCellEditable(int row, int col){
                return false;
            }
        };
        jTableJulho.setModel(modelo);
        for(int i = 0; i< lancamentos.size(); i++) {
            Lancamento dialogLancamento = new Lancamento();
            dialogLancamento = lancamentos.get(i);
            modelo.addRow(new Object[]{
                dialogLancamento.getTipo(),
                dialogLancamento.getValor()
            });
        }
        
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanelInformacao = new javax.swing.JPanel();
        jLabelMesRef = new javax.swing.JLabel();
        jTextFieldMesRef = new javax.swing.JTextField();
        jLabelSaldo = new javax.swing.JLabel();
        jTextFieldSaldo = new javax.swing.JTextField();
        jPanelJaneiro = new javax.swing.JPanel();
        jScrollPanelJaneiro = new javax.swing.JScrollPane();
        jTableJaneiro = new javax.swing.JTable();
        jLabelSaldoJaneiro = new javax.swing.JLabel();
        jTextFieldSaldoJaneiro = new javax.swing.JTextField();
        jPanelFevereiro = new javax.swing.JPanel();
        jScrollPanelFevereiro = new javax.swing.JScrollPane();
        jTableFevereiro = new javax.swing.JTable();
        jLabelSaldoFevereiro = new javax.swing.JLabel();
        jTextFieldSaldoFevereiro = new javax.swing.JTextField();
        jPanelMarço = new javax.swing.JPanel();
        jScrollPanelMarço = new javax.swing.JScrollPane();
        jTableMarço = new javax.swing.JTable();
        jLabelSaldoMarço = new javax.swing.JLabel();
        jTextFieldSaldoMarço = new javax.swing.JTextField();
        jPanelAbril = new javax.swing.JPanel();
        jScrollPanelAbril = new javax.swing.JScrollPane();
        jTableAbril = new javax.swing.JTable();
        jLabelSaldoAbril = new javax.swing.JLabel();
        jTextFieldSaldoAbril = new javax.swing.JTextField();
        jPanelMaio = new javax.swing.JPanel();
        jScrollPanelMaio = new javax.swing.JScrollPane();
        jTableMaio = new javax.swing.JTable();
        jLabelSaldoMaio = new javax.swing.JLabel();
        jTextFieldSaldoMaio = new javax.swing.JTextField();
        jPanelJunho = new javax.swing.JPanel();
        jScrollPanelJunho = new javax.swing.JScrollPane();
        jTableJunho = new javax.swing.JTable();
        jLabelSaldoJunho = new javax.swing.JLabel();
        jTextFieldSaldoJunho = new javax.swing.JTextField();
        jPanelJulho = new javax.swing.JPanel();
        jScrollPanelJulho = new javax.swing.JScrollPane();
        jTableJulho = new javax.swing.JTable();
        jLabelSaldoJulho = new javax.swing.JLabel();
        jTextFieldSaldoJulho = new javax.swing.JTextField();
        jPanelAgosto = new javax.swing.JPanel();
        jScrollPanelAgosto = new javax.swing.JScrollPane();
        jTableAgosto = new javax.swing.JTable();
        jLabelSaldoAgosto = new javax.swing.JLabel();
        jTextFieldSaldoAgosto = new javax.swing.JTextField();
        jPanelSetembro = new javax.swing.JPanel();
        jScrollPanelSetembro = new javax.swing.JScrollPane();
        jTableSetembro = new javax.swing.JTable();
        jLabelSaldoSetembro = new javax.swing.JLabel();
        jTextFieldSaldoSetembro = new javax.swing.JTextField();
        jPanelOutubro = new javax.swing.JPanel();
        jScrollPanelOutubro = new javax.swing.JScrollPane();
        jTableOutubro = new javax.swing.JTable();
        jLabelSaldoOutubro = new javax.swing.JLabel();
        jTextFieldSaldoOutubro = new javax.swing.JTextField();
        jPanelNovembro = new javax.swing.JPanel();
        jScrollPanelNovembro = new javax.swing.JScrollPane();
        jTableNovembro = new javax.swing.JTable();
        jLabelSaldoNovembro = new javax.swing.JLabel();
        jTextFieldSaldoNovembro = new javax.swing.JTextField();
        jPanelDezembro = new javax.swing.JPanel();
        jScrollPanelDezembro = new javax.swing.JScrollPane();
        jTableDezembro = new javax.swing.JTable();
        jLabelSaldoDezembro = new javax.swing.JLabel();
        jTextFieldSaldoDezembro = new javax.swing.JTextField();
        jMenuBar = new javax.swing.JMenuBar();
        jMenuNovo = new javax.swing.JMenu();
        jMenuItemTipoDeDespesa = new javax.swing.JMenuItem();
        jMenuItemProvento = new javax.swing.JMenuItem();
        jMenuItemDespesa = new javax.swing.JMenuItem();
        jMenuSair = new javax.swing.JMenu();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jLabelMesRef.setText("Mes Atual:");

        jTextFieldMesRef.setEnabled(false);

        jLabelSaldo.setText("Saldo:");

        jTextFieldSaldo.setEnabled(false);

        javax.swing.GroupLayout jPanelInformacaoLayout = new javax.swing.GroupLayout(jPanelInformacao);
        jPanelInformacao.setLayout(jPanelInformacaoLayout);
        jPanelInformacaoLayout.setHorizontalGroup(
            jPanelInformacaoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelInformacaoLayout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jLabelMesRef)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextFieldMesRef, javax.swing.GroupLayout.PREFERRED_SIZE, 70, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(jLabelSaldo)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextFieldSaldo, javax.swing.GroupLayout.PREFERRED_SIZE, 73, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap())
        );
        jPanelInformacaoLayout.setVerticalGroup(
            jPanelInformacaoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanelInformacaoLayout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addGroup(jPanelInformacaoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelMesRef)
                    .addComponent(jTextFieldMesRef, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabelSaldo)
                    .addComponent(jTextFieldSaldo, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap())
        );

        jPanelJaneiro.setBorder(javax.swing.BorderFactory.createTitledBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED), "Janeiro"));

        jScrollPanelJaneiro.setViewportView(jTableJaneiro);

        jLabelSaldoJaneiro.setText("Saldo do Mês:");

        jTextFieldSaldoJaneiro.setEditable(false);

        javax.swing.GroupLayout jPanelJaneiroLayout = new javax.swing.GroupLayout(jPanelJaneiro);
        jPanelJaneiro.setLayout(jPanelJaneiroLayout);
        jPanelJaneiroLayout.setHorizontalGroup(
            jPanelJaneiroLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelJaneiroLayout.createSequentialGroup()
                .addComponent(jScrollPanelJaneiro, javax.swing.GroupLayout.PREFERRED_SIZE, 158, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 0, Short.MAX_VALUE))
            .addGroup(jPanelJaneiroLayout.createSequentialGroup()
                .addComponent(jLabelSaldoJaneiro)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextFieldSaldoJaneiro))
        );
        jPanelJaneiroLayout.setVerticalGroup(
            jPanelJaneiroLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelJaneiroLayout.createSequentialGroup()
                .addComponent(jScrollPanelJaneiro, javax.swing.GroupLayout.PREFERRED_SIZE, 215, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 18, Short.MAX_VALUE)
                .addGroup(jPanelJaneiroLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelSaldoJaneiro)
                    .addComponent(jTextFieldSaldoJaneiro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
        );

        jPanelFevereiro.setBorder(javax.swing.BorderFactory.createTitledBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED), "Fevereiro"));

        jTableFevereiro.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {

            }
        ));
        jScrollPanelFevereiro.setViewportView(jTableFevereiro);

        jLabelSaldoFevereiro.setText("Saldo do Mês:");

        jTextFieldSaldoFevereiro.setEditable(false);

        javax.swing.GroupLayout jPanelFevereiroLayout = new javax.swing.GroupLayout(jPanelFevereiro);
        jPanelFevereiro.setLayout(jPanelFevereiroLayout);
        jPanelFevereiroLayout.setHorizontalGroup(
            jPanelFevereiroLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelFevereiroLayout.createSequentialGroup()
                .addComponent(jScrollPanelFevereiro, javax.swing.GroupLayout.PREFERRED_SIZE, 158, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 0, Short.MAX_VALUE))
            .addGroup(jPanelFevereiroLayout.createSequentialGroup()
                .addComponent(jLabelSaldoFevereiro)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextFieldSaldoFevereiro))
        );
        jPanelFevereiroLayout.setVerticalGroup(
            jPanelFevereiroLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelFevereiroLayout.createSequentialGroup()
                .addComponent(jScrollPanelFevereiro, javax.swing.GroupLayout.PREFERRED_SIZE, 215, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 18, Short.MAX_VALUE)
                .addGroup(jPanelFevereiroLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelSaldoFevereiro)
                    .addComponent(jTextFieldSaldoFevereiro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
        );

        jPanelMarço.setBorder(javax.swing.BorderFactory.createTitledBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED), "Março"));

        jTableMarço.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {

            }
        ));
        jScrollPanelMarço.setViewportView(jTableMarço);

        jLabelSaldoMarço.setText("Saldo do Mês:");

        jTextFieldSaldoMarço.setEditable(false);

        javax.swing.GroupLayout jPanelMarçoLayout = new javax.swing.GroupLayout(jPanelMarço);
        jPanelMarço.setLayout(jPanelMarçoLayout);
        jPanelMarçoLayout.setHorizontalGroup(
            jPanelMarçoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelMarçoLayout.createSequentialGroup()
                .addComponent(jScrollPanelMarço, javax.swing.GroupLayout.PREFERRED_SIZE, 158, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 0, Short.MAX_VALUE))
            .addGroup(jPanelMarçoLayout.createSequentialGroup()
                .addComponent(jLabelSaldoMarço)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextFieldSaldoMarço))
        );
        jPanelMarçoLayout.setVerticalGroup(
            jPanelMarçoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelMarçoLayout.createSequentialGroup()
                .addComponent(jScrollPanelMarço, javax.swing.GroupLayout.PREFERRED_SIZE, 215, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 18, Short.MAX_VALUE)
                .addGroup(jPanelMarçoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelSaldoMarço)
                    .addComponent(jTextFieldSaldoMarço, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
        );

        jPanelAbril.setBorder(javax.swing.BorderFactory.createTitledBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED), "Abril"));

        jTableAbril.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {

            }
        ));
        jScrollPanelAbril.setViewportView(jTableAbril);

        jLabelSaldoAbril.setText("Saldo do Mês:");

        jTextFieldSaldoAbril.setEditable(false);

        javax.swing.GroupLayout jPanelAbrilLayout = new javax.swing.GroupLayout(jPanelAbril);
        jPanelAbril.setLayout(jPanelAbrilLayout);
        jPanelAbrilLayout.setHorizontalGroup(
            jPanelAbrilLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelAbrilLayout.createSequentialGroup()
                .addComponent(jScrollPanelAbril, javax.swing.GroupLayout.PREFERRED_SIZE, 158, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 0, Short.MAX_VALUE))
            .addGroup(jPanelAbrilLayout.createSequentialGroup()
                .addComponent(jLabelSaldoAbril)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextFieldSaldoAbril))
        );
        jPanelAbrilLayout.setVerticalGroup(
            jPanelAbrilLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelAbrilLayout.createSequentialGroup()
                .addComponent(jScrollPanelAbril, javax.swing.GroupLayout.PREFERRED_SIZE, 215, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 18, Short.MAX_VALUE)
                .addGroup(jPanelAbrilLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelSaldoAbril)
                    .addComponent(jTextFieldSaldoAbril, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
        );

        jPanelMaio.setBorder(javax.swing.BorderFactory.createTitledBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED), "Maio"));

        jTableMaio.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {

            }
        ));
        jScrollPanelMaio.setViewportView(jTableMaio);

        jLabelSaldoMaio.setText("Saldo do Mês:");

        jTextFieldSaldoMaio.setEditable(false);

        javax.swing.GroupLayout jPanelMaioLayout = new javax.swing.GroupLayout(jPanelMaio);
        jPanelMaio.setLayout(jPanelMaioLayout);
        jPanelMaioLayout.setHorizontalGroup(
            jPanelMaioLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelMaioLayout.createSequentialGroup()
                .addComponent(jScrollPanelMaio, javax.swing.GroupLayout.PREFERRED_SIZE, 158, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 0, Short.MAX_VALUE))
            .addGroup(jPanelMaioLayout.createSequentialGroup()
                .addComponent(jLabelSaldoMaio)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextFieldSaldoMaio))
        );
        jPanelMaioLayout.setVerticalGroup(
            jPanelMaioLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelMaioLayout.createSequentialGroup()
                .addComponent(jScrollPanelMaio, javax.swing.GroupLayout.PREFERRED_SIZE, 215, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 18, Short.MAX_VALUE)
                .addGroup(jPanelMaioLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelSaldoMaio)
                    .addComponent(jTextFieldSaldoMaio, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
        );

        jPanelJunho.setBorder(javax.swing.BorderFactory.createTitledBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED), "Junho"));

        jTableJunho.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {

            }
        ));
        jScrollPanelJunho.setViewportView(jTableJunho);

        jLabelSaldoJunho.setText("Saldo do Mês:");

        jTextFieldSaldoJunho.setEditable(false);

        javax.swing.GroupLayout jPanelJunhoLayout = new javax.swing.GroupLayout(jPanelJunho);
        jPanelJunho.setLayout(jPanelJunhoLayout);
        jPanelJunhoLayout.setHorizontalGroup(
            jPanelJunhoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelJunhoLayout.createSequentialGroup()
                .addComponent(jScrollPanelJunho, javax.swing.GroupLayout.PREFERRED_SIZE, 158, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 0, Short.MAX_VALUE))
            .addGroup(jPanelJunhoLayout.createSequentialGroup()
                .addComponent(jLabelSaldoJunho)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextFieldSaldoJunho))
        );
        jPanelJunhoLayout.setVerticalGroup(
            jPanelJunhoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelJunhoLayout.createSequentialGroup()
                .addComponent(jScrollPanelJunho, javax.swing.GroupLayout.PREFERRED_SIZE, 215, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 18, Short.MAX_VALUE)
                .addGroup(jPanelJunhoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelSaldoJunho)
                    .addComponent(jTextFieldSaldoJunho, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
        );

        jPanelJulho.setBorder(javax.swing.BorderFactory.createTitledBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED), "Julho"));

        jTableJulho.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {

            }
        ));
        jScrollPanelJulho.setViewportView(jTableJulho);

        jLabelSaldoJulho.setText("Saldo do Mês:");

        jTextFieldSaldoJulho.setEditable(false);

        javax.swing.GroupLayout jPanelJulhoLayout = new javax.swing.GroupLayout(jPanelJulho);
        jPanelJulho.setLayout(jPanelJulhoLayout);
        jPanelJulhoLayout.setHorizontalGroup(
            jPanelJulhoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelJulhoLayout.createSequentialGroup()
                .addComponent(jScrollPanelJulho, javax.swing.GroupLayout.PREFERRED_SIZE, 158, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 0, Short.MAX_VALUE))
            .addGroup(jPanelJulhoLayout.createSequentialGroup()
                .addComponent(jLabelSaldoJulho)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextFieldSaldoJulho))
        );
        jPanelJulhoLayout.setVerticalGroup(
            jPanelJulhoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelJulhoLayout.createSequentialGroup()
                .addComponent(jScrollPanelJulho, javax.swing.GroupLayout.PREFERRED_SIZE, 215, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 18, Short.MAX_VALUE)
                .addGroup(jPanelJulhoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelSaldoJulho)
                    .addComponent(jTextFieldSaldoJulho, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
        );

        jPanelAgosto.setBorder(javax.swing.BorderFactory.createTitledBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED), "Agosto"));

        jTableAgosto.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {

            }
        ));
        jScrollPanelAgosto.setViewportView(jTableAgosto);

        jLabelSaldoAgosto.setText("Saldo do Mês:");

        jTextFieldSaldoAgosto.setEditable(false);

        javax.swing.GroupLayout jPanelAgostoLayout = new javax.swing.GroupLayout(jPanelAgosto);
        jPanelAgosto.setLayout(jPanelAgostoLayout);
        jPanelAgostoLayout.setHorizontalGroup(
            jPanelAgostoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelAgostoLayout.createSequentialGroup()
                .addComponent(jScrollPanelAgosto, javax.swing.GroupLayout.PREFERRED_SIZE, 158, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 0, Short.MAX_VALUE))
            .addGroup(jPanelAgostoLayout.createSequentialGroup()
                .addComponent(jLabelSaldoAgosto)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextFieldSaldoAgosto))
        );
        jPanelAgostoLayout.setVerticalGroup(
            jPanelAgostoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelAgostoLayout.createSequentialGroup()
                .addComponent(jScrollPanelAgosto, javax.swing.GroupLayout.PREFERRED_SIZE, 215, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 18, Short.MAX_VALUE)
                .addGroup(jPanelAgostoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelSaldoAgosto)
                    .addComponent(jTextFieldSaldoAgosto, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
        );

        jPanelSetembro.setBorder(javax.swing.BorderFactory.createTitledBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED), "Setembro"));

        jTableSetembro.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {

            }
        ));
        jScrollPanelSetembro.setViewportView(jTableSetembro);

        jLabelSaldoSetembro.setText("Saldo do Mês:");

        jTextFieldSaldoSetembro.setEditable(false);

        javax.swing.GroupLayout jPanelSetembroLayout = new javax.swing.GroupLayout(jPanelSetembro);
        jPanelSetembro.setLayout(jPanelSetembroLayout);
        jPanelSetembroLayout.setHorizontalGroup(
            jPanelSetembroLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelSetembroLayout.createSequentialGroup()
                .addComponent(jScrollPanelSetembro, javax.swing.GroupLayout.PREFERRED_SIZE, 158, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 0, Short.MAX_VALUE))
            .addGroup(jPanelSetembroLayout.createSequentialGroup()
                .addComponent(jLabelSaldoSetembro)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextFieldSaldoSetembro))
        );
        jPanelSetembroLayout.setVerticalGroup(
            jPanelSetembroLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelSetembroLayout.createSequentialGroup()
                .addComponent(jScrollPanelSetembro, javax.swing.GroupLayout.PREFERRED_SIZE, 215, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 18, Short.MAX_VALUE)
                .addGroup(jPanelSetembroLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelSaldoSetembro)
                    .addComponent(jTextFieldSaldoSetembro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
        );

        jPanelOutubro.setBorder(javax.swing.BorderFactory.createTitledBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED), "Outubro"));

        jTableOutubro.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {

            }
        ));
        jScrollPanelOutubro.setViewportView(jTableOutubro);

        jLabelSaldoOutubro.setText("Saldo do Mês:");

        jTextFieldSaldoOutubro.setEditable(false);

        javax.swing.GroupLayout jPanelOutubroLayout = new javax.swing.GroupLayout(jPanelOutubro);
        jPanelOutubro.setLayout(jPanelOutubroLayout);
        jPanelOutubroLayout.setHorizontalGroup(
            jPanelOutubroLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelOutubroLayout.createSequentialGroup()
                .addComponent(jScrollPanelOutubro, javax.swing.GroupLayout.PREFERRED_SIZE, 158, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 0, Short.MAX_VALUE))
            .addGroup(jPanelOutubroLayout.createSequentialGroup()
                .addComponent(jLabelSaldoOutubro)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextFieldSaldoOutubro))
        );
        jPanelOutubroLayout.setVerticalGroup(
            jPanelOutubroLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelOutubroLayout.createSequentialGroup()
                .addComponent(jScrollPanelOutubro, javax.swing.GroupLayout.PREFERRED_SIZE, 215, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 18, Short.MAX_VALUE)
                .addGroup(jPanelOutubroLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelSaldoOutubro)
                    .addComponent(jTextFieldSaldoOutubro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
        );

        jPanelNovembro.setBorder(javax.swing.BorderFactory.createTitledBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED), "Novembro"));

        jTableNovembro.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {

            }
        ));
        jScrollPanelNovembro.setViewportView(jTableNovembro);

        jLabelSaldoNovembro.setText("Saldo do Mês:");

        jTextFieldSaldoNovembro.setEditable(false);

        javax.swing.GroupLayout jPanelNovembroLayout = new javax.swing.GroupLayout(jPanelNovembro);
        jPanelNovembro.setLayout(jPanelNovembroLayout);
        jPanelNovembroLayout.setHorizontalGroup(
            jPanelNovembroLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelNovembroLayout.createSequentialGroup()
                .addComponent(jScrollPanelNovembro, javax.swing.GroupLayout.PREFERRED_SIZE, 158, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 0, Short.MAX_VALUE))
            .addGroup(jPanelNovembroLayout.createSequentialGroup()
                .addComponent(jLabelSaldoNovembro)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextFieldSaldoNovembro))
        );
        jPanelNovembroLayout.setVerticalGroup(
            jPanelNovembroLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelNovembroLayout.createSequentialGroup()
                .addComponent(jScrollPanelNovembro, javax.swing.GroupLayout.PREFERRED_SIZE, 215, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 18, Short.MAX_VALUE)
                .addGroup(jPanelNovembroLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelSaldoNovembro)
                    .addComponent(jTextFieldSaldoNovembro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
        );

        jPanelDezembro.setBorder(javax.swing.BorderFactory.createTitledBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED), "Dezembro"));

        jTableDezembro.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {

            }
        ));
        jScrollPanelDezembro.setViewportView(jTableDezembro);

        jLabelSaldoDezembro.setText("Saldo do Mês:");

        jTextFieldSaldoDezembro.setEditable(false);

        javax.swing.GroupLayout jPanelDezembroLayout = new javax.swing.GroupLayout(jPanelDezembro);
        jPanelDezembro.setLayout(jPanelDezembroLayout);
        jPanelDezembroLayout.setHorizontalGroup(
            jPanelDezembroLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelDezembroLayout.createSequentialGroup()
                .addComponent(jScrollPanelDezembro, javax.swing.GroupLayout.PREFERRED_SIZE, 158, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 0, Short.MAX_VALUE))
            .addGroup(jPanelDezembroLayout.createSequentialGroup()
                .addComponent(jLabelSaldoDezembro)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextFieldSaldoDezembro))
        );
        jPanelDezembroLayout.setVerticalGroup(
            jPanelDezembroLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelDezembroLayout.createSequentialGroup()
                .addComponent(jScrollPanelDezembro, javax.swing.GroupLayout.PREFERRED_SIZE, 215, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 18, Short.MAX_VALUE)
                .addGroup(jPanelDezembroLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelSaldoDezembro)
                    .addComponent(jTextFieldSaldoDezembro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
        );

        jMenuNovo.setText("Novo");

        jMenuItemTipoDeDespesa.setText("Tipo de Despesa");
        jMenuNovo.add(jMenuItemTipoDeDespesa);

        jMenuItemProvento.setText("Provento");
        jMenuNovo.add(jMenuItemProvento);

        jMenuItemDespesa.setText("Despesa");
        jMenuNovo.add(jMenuItemDespesa);

        jMenuBar.add(jMenuNovo);

        jMenuSair.setText("Sair");
        jMenuBar.add(jMenuSair);

        setJMenuBar(jMenuBar);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanelInformacao, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(jPanelJaneiro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jPanelFevereiro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jPanelMarço, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jPanelAbril, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jPanelMaio, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jPanelJunho, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(jPanelJulho, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jPanelAgosto, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jPanelSetembro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jPanelOutubro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jPanelNovembro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jPanelDezembro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addComponent(jPanelJaneiro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jPanelJulho, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(jPanelInformacao, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jPanelFevereiro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jPanelMarço, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jPanelAbril, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jPanelMaio, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jPanelJunho, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jPanelAgosto, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jPanelSetembro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jPanelOutubro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jPanelNovembro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jPanelDezembro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(48, 48, 48))))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(Principal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Principal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Principal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Principal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Principal().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JLabel jLabelMesRef;
    private javax.swing.JLabel jLabelSaldo;
    private javax.swing.JLabel jLabelSaldoAbril;
    private javax.swing.JLabel jLabelSaldoAgosto;
    private javax.swing.JLabel jLabelSaldoDezembro;
    private javax.swing.JLabel jLabelSaldoFevereiro;
    private javax.swing.JLabel jLabelSaldoJaneiro;
    private javax.swing.JLabel jLabelSaldoJulho;
    private javax.swing.JLabel jLabelSaldoJunho;
    private javax.swing.JLabel jLabelSaldoMaio;
    private javax.swing.JLabel jLabelSaldoMarço;
    private javax.swing.JLabel jLabelSaldoNovembro;
    private javax.swing.JLabel jLabelSaldoOutubro;
    private javax.swing.JLabel jLabelSaldoSetembro;
    private javax.swing.JMenuBar jMenuBar;
    private javax.swing.JMenuItem jMenuItemDespesa;
    private javax.swing.JMenuItem jMenuItemProvento;
    private javax.swing.JMenuItem jMenuItemTipoDeDespesa;
    private javax.swing.JMenu jMenuNovo;
    private javax.swing.JMenu jMenuSair;
    private javax.swing.JPanel jPanelAbril;
    private javax.swing.JPanel jPanelAgosto;
    private javax.swing.JPanel jPanelDezembro;
    private javax.swing.JPanel jPanelFevereiro;
    private javax.swing.JPanel jPanelInformacao;
    private javax.swing.JPanel jPanelJaneiro;
    private javax.swing.JPanel jPanelJulho;
    private javax.swing.JPanel jPanelJunho;
    private javax.swing.JPanel jPanelMaio;
    private javax.swing.JPanel jPanelMarço;
    private javax.swing.JPanel jPanelNovembro;
    private javax.swing.JPanel jPanelOutubro;
    private javax.swing.JPanel jPanelSetembro;
    private javax.swing.JScrollPane jScrollPanelAbril;
    private javax.swing.JScrollPane jScrollPanelAgosto;
    private javax.swing.JScrollPane jScrollPanelDezembro;
    private javax.swing.JScrollPane jScrollPanelFevereiro;
    private javax.swing.JScrollPane jScrollPanelJaneiro;
    private javax.swing.JScrollPane jScrollPanelJulho;
    private javax.swing.JScrollPane jScrollPanelJunho;
    private javax.swing.JScrollPane jScrollPanelMaio;
    private javax.swing.JScrollPane jScrollPanelMarço;
    private javax.swing.JScrollPane jScrollPanelNovembro;
    private javax.swing.JScrollPane jScrollPanelOutubro;
    private javax.swing.JScrollPane jScrollPanelSetembro;
    private javax.swing.JTable jTableAbril;
    private javax.swing.JTable jTableAgosto;
    private javax.swing.JTable jTableDezembro;
    private javax.swing.JTable jTableFevereiro;
    private javax.swing.JTable jTableJaneiro;
    private javax.swing.JTable jTableJulho;
    private javax.swing.JTable jTableJunho;
    private javax.swing.JTable jTableMaio;
    private javax.swing.JTable jTableMarço;
    private javax.swing.JTable jTableNovembro;
    private javax.swing.JTable jTableOutubro;
    private javax.swing.JTable jTableSetembro;
    private javax.swing.JTextField jTextFieldMesRef;
    private javax.swing.JTextField jTextFieldSaldo;
    private javax.swing.JTextField jTextFieldSaldoAbril;
    private javax.swing.JTextField jTextFieldSaldoAgosto;
    private javax.swing.JTextField jTextFieldSaldoDezembro;
    private javax.swing.JTextField jTextFieldSaldoFevereiro;
    private javax.swing.JTextField jTextFieldSaldoJaneiro;
    private javax.swing.JTextField jTextFieldSaldoJulho;
    private javax.swing.JTextField jTextFieldSaldoJunho;
    private javax.swing.JTextField jTextFieldSaldoMaio;
    private javax.swing.JTextField jTextFieldSaldoMarço;
    private javax.swing.JTextField jTextFieldSaldoNovembro;
    private javax.swing.JTextField jTextFieldSaldoOutubro;
    private javax.swing.JTextField jTextFieldSaldoSetembro;
    // End of variables declaration//GEN-END:variables
}
