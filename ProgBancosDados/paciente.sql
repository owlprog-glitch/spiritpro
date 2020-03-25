/* ex1 */
create database hospitalclinical;
use hospitalclinical;
select * from paciente;

create table paciente (
matricula int primary key,
nome varchar(50),
endereco varchar(100),
qtd_consulta int,
telefone bigint(14),
idade int
);

/* ex2 */

insert into paciente values (01, 'Joao', 'rua W', 10, 30004100, 10),
(02, 'Maria', 'rua X', 6, null, 65),
(03,'Joaquim', 'rua Y', 20106000, 9, 80),
(04, 'Beanca', 'rua Z', 20120306, 1, 20);

/* ex 3 */

update paciente set qtd_consulta=35 where matricula=04;

/* ex 4 */

select nome, matricula from paciente where matricula order by matricula DESC;

/* ex 5 */

select nome, idade from paciente where qtd_consulta>10;

/* ex 6 */

select nome, qtd_consulta from paciente where qtd_consulta<40 order by qtd_consulta;

/* ex 7 */

select * from paciente where qtd_consulta>15 and idade>60;

/* ex 8 */

select nome, endereco, telefone, idade, qtd_consulta from paciente where qtd_consulta>5 and idade<30;

/* ex 9 */

select nome, qtd_consulta from paciente where qtd_consulta=10<50 order by qtd_consulta;

/* ex 10 */

select nome from paciente where nome like '%a%';

/* ex 11 */

select matricula, nome, idade from paciente where idade between 20 and 60;

/* ex 12 */

select nome, idade from paciente where idade in (10, 15, 20, 25, 30, 35, 40);

/* ex 13 */

delete from paciente;

/* ex 13 outra versão */

delete from paciente where matricula=01;
delete from paciente where matricula=02;
delete from paciente where matricula=03;
delete from paciente where matricula=04;

/* ex 14 */

drop table paciente;

/* ex 15 */

drop database hospitalclinical;
