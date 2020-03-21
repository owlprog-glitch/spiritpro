/*Criar banco de dados*/
create database progbd;
/*Utilizar o banco*/
use progbd;

/*criar tabela*/
create table RH (
cod int,
nome varchar(20) not null,
salario int null,
idade int
);

/*excluir a tabela*/
drop table rh;

create table RH (
cod int,
nome varchar(20),
salario int,
idade int,
primary key (cod)
);

/*registro*/
insert into rh values(1,"A",100,20);
insert into rh values (3,"D",600, 48);
insert into rh values (4,"B", 400, 18);
insert into rh values (5,"", 300,26);
insert into rh values (6,"E",200,34);
insert into rh (cod, salario, idade) values (5, 300, 26);

INSERT INTO `progbd`.`rh` (`cod`, `salario`, `idade`) VALUES ('5', '300', '26');
/*Ver registros*/
select * from rh;
