package Classes;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



import java.sql.Date;

/**
 *
 * @author luan.tavares
 */
public class Lancamento {
    private int codigo, tipo;
    private Date data;
    private double valor;

    public Lancamento() {
    }

    public Lancamento(int codigo, int tipo, Date data, double valor) {
        this.codigo = codigo;
        this.tipo = tipo;
        this.data = data;
        this.valor = valor;
    }

    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public int getTipo() {
        return tipo;
    }

    public void setTipo(int tipo) {
        this.tipo = tipo;
    }

    public Date getData() {
        return data;
    }

    public void setData(Date data) {
        this.data = data;
    }

    public double getValor() {
        return valor;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }
    
    
}
