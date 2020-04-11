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
