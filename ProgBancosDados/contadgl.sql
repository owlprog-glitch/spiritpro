create database contadigital;
use contadigital;

/* ex 1 */

select * from cliente;

create table cliente (
cpf int(9) not null,
nome varchar(100),
telefone int(11),
idade smallint,
renda double,
numcta int,
primary key (cpf)
);

select * from conta;

create table conta (
numcta int,
agencia varchar(30),
valor double,
cidade varchar(50),
foreign key (numcta) references cliente(cpf)
);

/* ex 2 */

-- tabela cliente --
insert into cliente value(123456789, 'Thia', 20053000, 20, 2.550, 500);
insert into cliente value(012541581, 'Henrique', 60007001, 19, 1.000, 200);
insert into cliente value(114302514, 'Richard', 10025000, 29, 6.000, 300);
insert into cliente value(102547826, 'Lilian', 35007500, 60, 7.000, 400);
insert into cliente value(120890354, 'Francisco', 25004000, 30, 9.000, 100);

-- tabela conta --
insert into conta values (1, 'X', 200.00, 'New');
insert into conta values (2, 'Dig', 500.00, 'New');
insert into conta values (3, 'Hi', 100.00, 'Horizonte');
insert into conta values (4, 'Go', 200.00, 'Horizonte');
insert into conta values (5, 'Y', 100.00, 'District');

/* ex 3 */

create view vw_cliente as select c.nome, c.telefone, c.renda from cliente join conta on c.cpf = c.cpf;

/* ex 4 */

select nome, agencia, renda from vw_cliente where renda>20000;

/* ex 5 */

create view vw_cliente1 as select c.nome, c.agencia from cliente;

/* ex 6 */

select numcta from vw_cliente1 where agencia>3;

/* ex 7 */

create view vw_cliente2 as select c.nome, c.idade from cliente where idade>18, idade<18, avg(idade);

/* ex 8 */

select * from vw_cliente2;

/* ex 9 */

create view vw_cliente3 as select c.cidade from cliente where sum(cidade);

/* ex 10 */

select * from vw_cliente3;
