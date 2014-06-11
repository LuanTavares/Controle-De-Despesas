SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `mydb` DEFAULT CHARACTER SET utf8 COLLATE utf8_general_ci ;
USE `mydb` ;

-- -----------------------------------------------------
-- Table `mydb`.`TipLan`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`TipLan` (
  `TipLan` INT NOT NULL,
  `DesTip` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`TipLan`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`LanMes`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`LanMes` (
  `CodLan` INT NOT NULL AUTO_INCREMENT,
  `TipLan` INT NOT NULL,
  `DatLan` DATE NOT NULL,
  `VlrLan` DOUBLE NOT NULL,
  PRIMARY KEY (`CodLan`, `TipLan`, `DatLan`),
  INDEX `TipLan_idx` (`TipLan` ASC),
  CONSTRAINT `TipLan`
    FOREIGN KEY (`TipLan`)
    REFERENCES `mydb`.`TipLan` (`TipLan`)
    ON DELETE CASCADE
    ON UPDATE CASCADE)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
