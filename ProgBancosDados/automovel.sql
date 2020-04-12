create database veiculos;
use veiculos;
drop table automovel;

/*ex 1*/
create table automovel (
cod_veiculo int primary key,
modelo varchar(30),
ano year,
km float,
valor float,
marca char(30)
);

select * from automovel;

insert into automovel values (1, 'Gol', 2010, 68000, 22000, 'VW'),
(2, 'Palio', 2014, 9000, 34000, 'FIAT'),
(3, 'Uno', 2011, null, null, 'FIAT'),
(4, 'Celta', 2008, 96000, 14000, 'GM');

/* ex 2 */

select avg(ano) from automovel where ano;
select avg(valor) from automovel where valor;

/* ex 3 */

select modelo from automovel;

/* ex 4 */

select valor / 0.1 from automovel where marca='GM';

/* ex 5 */

select max(valor) as marca from automovel where valor;

/* ex 6 */

update automovel set km=100000, valor=18000 where cod_veiculo=3;

/* ex 7 */

select count(20) from automovel where ano>2010 order by marca;

/* ex 8 */

select sum(km) as marca from automovel where km=20000<>30000 and ano>2010 order by sum(130000);

/* ex 9 */

select marca, modelo from automovel where ano in (2001, 2005, 2007, 2009, 2011, 2013, 2015) order by modelo DESC;

/* ex 10 */

delete from automovel where ano>2010;

/* ex 11 */

delete from automovel;

/* ex 12 */

drop database veiculos;
