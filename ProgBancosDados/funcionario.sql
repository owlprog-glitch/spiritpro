create database dados;
use dados;

select * from funcionario;

/* ex 1 */
create table funcionario (
matricula int primary key,
nome varchar(50),
endereco varchar(100),
telefone bigint(15),
idade int,
salario float,
filhos varchar(50)
);

/* ex2 */
insert into funcionario values (001, 'Victor', 'Rua A', 35002020, 30, 1900, 1);
insert into funcionario values (002, 'Angelo', 'Rua B', 34008080, 25, 1000, 'nao');
insert into funcionario values (003, 'Welis', 'Rua C', 35019000, 33, 2200, 3);
insert into funcionario values (004, 'Mario', 'Rua D', 35475000, 40, 2200, 4);
insert into funcionario values (005, 'Rodrigo', 'Rua E', 32001900, 27, 1500, 'nao');
insert into funcionario values (006, 'Raimundo', 'Rua E', 40206000, 60, 2500, 'nao');

/* Ex 3 */

update funcionario set filhos=10 where matricula=6;

/* ex 4 */

select nome, salario from funcionario where salario>1000<5000;

/* ex 5 */

select nome, salario from funcionario where idade=null;

/* Ex 6 */

select nome, telefone, idade from funcionario where filhos>3;

/* Ex 7*/

select nome, filhos from funcionario where salario<1000 order by filhos>3 desc;

/* ex 8 */

select matricula, nome, idade, telefone from funcionario where idade>30<50;

/* ex 9 */

select nome, idade<18 from funcionario where nome like '%a%';

/* ex 10 */

select matricula, nome, idade>60 from funcionario where endereco=null order by nome ASC;

/* ex 11 */

select nome, filhos<3>6 from funcionario where salario<1000>5000 order by filhos ASC;

/* Ex 12 */

select * from funcionario where salario>5000 and idade>45 and filhos=9;

/* Ex 13 */

delete from funcionario;

/* ex 14 */

drop table funcionario;

/* ex 15 */

drop database dados;