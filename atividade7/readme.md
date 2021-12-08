# Desenvolvimento de Device Drivers

## Equipe
- Ana Letícia Albuquerque Santos - alas3
- Pedro Jorge Lima da Silva - pjls2
- Williams Santiago de Souza Filho - wssf

## Como rodar

Execute os comandos abaixo no terminal para

##### Compilar

```
make
```

##### Carregar o módulo

```
sudo insmod main.ko
```

##### Carregar o módulo com parâmetro, sendo "value" um inteiro

```
sudo insmod main.ko param=value
```

##### Descarregar o módulo

```
sudo rmmod main
```

##### Limpar o módulo

```
make clean
```