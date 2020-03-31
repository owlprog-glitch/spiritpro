create database empresatec;
use empresatec;

/* ex 1 */

create table funcionario (
codigo int primary key,
nome varchar(50),
funcao varchar(100),
idade smallint,
salario float
);

/* ex 2 */

insert into funcionario values (10, 'Ana Maria', 'Analista', 30, 1500),
(20, 'Paulo', 'Programador', 22, 900),
(30, 'Beatriz', 'Analista', 40, 2200),
(40, 'Leonardo', 'Gerente', 45, 3500);

/* ex 3 */

select sum(salario) from funcionario order by salario desc;

/* ex 4 */

select min(idade) from funcionario order by idade desc;

/* ex 5 */

select avg(salario>1000) from funcionario where salario;

/* ex 6 */

select max(salario) from funcionario;

/* ex 7 */

select idade from funcionario order by min(idade) desc;

/* ex 8 */

select * from funcionario where nome like '%a%';

/* ex 9 */

update funcionario set salario=2300, funcao='Arquiteto' where codigo=20;

/* ex 10 */

select salario * 0.4 from funcionario where funcao='Analista';

/* ex 11 */ 

delete from funcionario where salario>2000;
