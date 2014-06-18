/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package DAO;

import Classes.Lancamento;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.GregorianCalendar;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author luan.tavares
 */
public class LancamentoDAO {
    
    public List <Lancamento> buscaLancamentos(GregorianCalendar datref) {
        Lancamento dialogLancamento = null;
        List <Lancamento> retorno = new ArrayList<Lancamento>();
        String SQL = "SELECT * FROM LANMES WHERE DatLan BETWEEN '"+datref.get(datref.YEAR)+"-"+(datref.get(datref.MONTH)+1)+"-1' AND '"+datref.get(datref.YEAR)+"-"+(datref.get(datref.MONTH)+1)+"-"+datref.get(datref.DAY_OF_MONTH)+"'";
        
        try {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost/controlededespesa", "root", "C4nn184l@");
            PreparedStatement stmt = con.prepareStatement(SQL);
            ResultSet rs = stmt.executeQuery();
            
            while(rs.next()) {
                dialogLancamento = new Lancamento(rs.getInt("CodLan"), rs.getInt("TipLan"), rs.getDate("DatLan"), rs.getDouble("VlrLan"));
                retorno.add(dialogLancamento);
            }
            
        } catch (SQLException ex) {
            Logger.getLogger(LancamentoDAO.class.getName()).log(Level.SEVERE, null, ex);
        }
        
        if (retorno.isEmpty())        
            return null;
        else 
            return retorno;
    }

    
}
