/*continuação da a1u2.sql*/

create database aula3;
use aula3;

/*Criar outra tabela*/
create table RH (
cod int,
nome varchar(20),
salario int,
idade int,
primary key (cod)
);

/*Insert*/
insert into RH values(1,"A",1000,10);
insert into RH values (2,"C",1800, 60);
insert into RH values (3,"D", 2400,50);
insert into RH values (4,"", 5300,34);
insert into RH values (5,"F",4100,28);
insert into RH values (6,"G",3500,39);
insert into RH values (7,"H",2300,44);

insert into RH (cod, salario, idade) values (5, 300, 26);

/*Update*/
update RH set idade=30 where cod=6;

update RH set idade=62 where cod=3;

update RH set salario=2000 where cod=2;

update RH set idade=20 where cod=1;

update RH set nome='E' where cod=1;

/*Quando fizer em 2 ou mais colunas*/
update RH set idade=40, nome='A' where cod=1;

/*Delete e Drop*/

delete from RH where salario>5000;

delete from RH where idade=44;

delete from RH;

drop table RH;

drop database aula3;

/*Ver os registros*/
select * from RH;
