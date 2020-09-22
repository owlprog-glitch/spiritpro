-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION';

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------
-- -----------------------------------------------------
-- Schema hospital
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema hospital
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `hospital` DEFAULT CHARACTER SET utf8mb4 ;
USE `hospital` ;

-- -----------------------------------------------------
-- Table `hospital`.`paciente`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `hospital`.`paciente` (
  `cod_paciente` INT(11) NOT NULL,
  `nome_paciente` VARCHAR(45) NULL DEFAULT NULL,
  PRIMARY KEY (`cod_paciente`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8mb4;


-- -----------------------------------------------------
-- Table `hospital`.`medico`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `hospital`.`medico` (
  `cod_med` INT(11) NOT NULL,
  `nome_medico` VARCHAR(45) NULL DEFAULT NULL,
  PRIMARY KEY (`cod_med`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8mb4;


-- -----------------------------------------------------
-- Table `hospital`.`consulta`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `hospital`.`consulta` (
  `cod_consulta` INT(11) NOT NULL,
  `data_consulta` DATE NULL DEFAULT NULL,
  `paciente_cod_paciente` INT(11) NOT NULL,
  `medico_cod_med` INT(11) NOT NULL,
  PRIMARY KEY (`cod_consulta`),
  INDEX `fk_consulta_paciente_idx` (`paciente_cod_paciente` ASC) VISIBLE,
  INDEX `fk_consulta_medico1_idx` (`medico_cod_med` ASC) VISIBLE,
  CONSTRAINT `fk_consulta_paciente`
    FOREIGN KEY (`paciente_cod_paciente`)
    REFERENCES `hospital`.`paciente` (`cod_paciente`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_consulta_medico1`
    FOREIGN KEY (`medico_cod_med`)
    REFERENCES `hospital`.`medico` (`cod_med`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8mb4;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
