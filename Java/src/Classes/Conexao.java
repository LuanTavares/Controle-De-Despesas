/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package Classes;

import DAO.LancamentoDAO;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author luan.tavares
 */
public class Conexao {
    
    public ResultSet executaSelect(String SQL){
        try {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost/controlededespesa", "root", "C4nn184l@");
            PreparedStatement stmt = con.prepareStatement(SQL);
            ResultSet rs = stmt.executeQuery();
            return rs;                   
            
        } catch (SQLException ex) {
            Logger.getLogger(LancamentoDAO.class.getName()).log(Level.SEVERE, null, ex);
            return null;
        }
    }
}
