-- ex1
create database estado;
use estado;

create table cidade (
	codigo_cidade int,
	nome varchar(100),
	populacao double,
	primary key (codigo_cidade)
);


create table morador (
	codigo int,
	nome varchar(50),
	endereco varchar(20),
	bairro varchar(50),
	codigo_cidade int,
	idade smallint,
	foreign key (codigo_cidade) references cidade(codigo_cidade)
);

select * from cidade;
select * from morador;

insert into cidade values (1, 'Belo Horizonte', 3000000),
(2, 'Uberlandia', 800000),
(3, 'Uberaba', 400000);

insert into morador values (1, 'Jose', 'Rua A', 'Cruzeiro', 1, 21),
(2, 'Joao', 'Rua X', 'Centro', 2, 49),
(3, 'Maria', 'Rua F', 'Norte', 3, 33),
(4, 'Manoel', 'Rua D', 'Serra', 1, 29),
(5, 'Paulo', 'Rua X', 'Centro', 3, 55);

-- ex 2

select nome, avg(idade) from morador where idade<55;

-- ex3

select nome, bairro, codigo_cidade from morador;

-- ex 4

select avg(idade) from morador where codigo_cidade;

-- ex 5 x

select nome=Uberlandia or Uberaba, endereco from morador where codigo_cidade and idade>30;

-- ex 6

select nome, codigo_cidade from cidade where populacao>500000;

-- ex 7

select count(nome) from cidade;

-- ex 8

select nome from cidade where cidade in (select nome from morador where nome like '%u');
select nome from cidade where nome like 'u%';
select nome from cidade where nome like 'u%';

-- ex 9

select nome, populacao from cidade where populacao<600000>5000000;

-- ex 10

delete from cidade where Uberlandia;

-- ex 11

delete from bairro where Centro;

-- ex 12

delete from cidade;

-- ex 13

delete from morador;

-- ex 14

drop table cidade;
drop table morador;

-- ex 15

drop database estado;
