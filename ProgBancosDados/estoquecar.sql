create database estoquecar;
use estoquecar;


create table fabricante (
cod int,
nome varchar(100),
cidade varchar(100),
primary key (cod)
);

create table veiculo (
codigo int,
nome varchar(100),
estoque int,
valor double,
cod_fab int,
ano double
);

ALTER TABLE veiculo
ADD FOREIGN KEY (cod_fab) REFERENCES fabricante(cod);

/* fabricante */
insert into fabricante values (1, 'Fiat', 'Betim'),
(2, 'GM', 'S Caetano'),
(3, 'VW', 'Curitiba'),
(4, 'Temporário', 'Nenhuma');

/* veiculo */

insert into veiculo values (1, 'Gol', 22, 31000, 3, 2015),
(2, 'Palio', 17, 37000, 1, 2014),
(3, 'Fox', 8, 42000, 3, 2014),
(4, 'Celta', 20, 28000, 2, 2013),
(5, 'Uno', 34, 34000, 1, 2015);


create procedure mediafab()
	select avg(valor) from fabricante where valor;


call mediafab;

CREATE TRIGGER sec_fabricante
AFTER INSERT ON fabricante
FOR EACH ROW
BEGIN
	update fabricante set nome = cod where nome
END;
