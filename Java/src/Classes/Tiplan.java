/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package Classes;

import java.beans.PropertyChangeListener;
import java.beans.PropertyChangeSupport;
import java.io.Serializable;
import javax.persistence.Basic;
import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.NamedQueries;
import javax.persistence.NamedQuery;
import javax.persistence.Table;
import javax.persistence.Transient;

/**
 *
 * @author luan.tavares
 */
@Entity
@Table(name = "tiplan", catalog = "controlededespesa", schema = "")
@NamedQueries({
    @NamedQuery(name = "Tiplan.findAll", query = "SELECT t FROM Tiplan t"),
    @NamedQuery(name = "Tiplan.findByTipLan", query = "SELECT t FROM Tiplan t WHERE t.tipLan = :tipLan"),
    @NamedQuery(name = "Tiplan.findByDesTip", query = "SELECT t FROM Tiplan t WHERE t.desTip = :desTip")})
public class Tiplan implements Serializable {
    @Transient
    private PropertyChangeSupport changeSupport = new PropertyChangeSupport(this);
    private static final long serialVersionUID = 1L;
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Basic(optional = false)
    @Column(name = "TipLan")
    private Integer tipLan;
    @Basic(optional = false)
    @Column(name = "DesTip")
    private String desTip;

    public Tiplan() {
    }

    public Tiplan(Integer tipLan) {
        this.tipLan = tipLan;
    }

    public Tiplan(Integer tipLan, String desTip) {
        this.tipLan = tipLan;
        this.desTip = desTip;
    }

    public Integer getTipLan() {
        return tipLan;
    }

    public void setTipLan(Integer tipLan) {
        Integer oldTipLan = this.tipLan;
        this.tipLan = tipLan;
        changeSupport.firePropertyChange("tipLan", oldTipLan, tipLan);
    }

    public String getDesTip() {
        return desTip;
    }

    public void setDesTip(String desTip) {
        String oldDesTip = this.desTip;
        this.desTip = desTip;
        changeSupport.firePropertyChange("desTip", oldDesTip, desTip);
    }

    @Override
    public int hashCode() {
        int hash = 0;
        hash += (tipLan != null ? tipLan.hashCode() : 0);
        return hash;
    }

    @Override
    public boolean equals(Object object) {
        // TODO: Warning - this method won't work in the case the id fields are not set
        if (!(object instanceof Tiplan)) {
            return false;
        }
        Tiplan other = (Tiplan) object;
        if ((this.tipLan == null && other.tipLan != null) || (this.tipLan != null && !this.tipLan.equals(other.tipLan))) {
            return false;
        }
        return true;
    }

    @Override
    public String toString() {
        return "Interface.Tiplan[ tipLan=" + tipLan + " ]";
    }

    public void addPropertyChangeListener(PropertyChangeListener listener) {
        changeSupport.addPropertyChangeListener(listener);
    }

    public void removePropertyChangeListener(PropertyChangeListener listener) {
        changeSupport.removePropertyChangeListener(listener);
    }
    
}
