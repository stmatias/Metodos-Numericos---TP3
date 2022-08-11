# Metros Cuadrados Mínimos Lineales: TP3 de Métodos Numéricos
## 2020, 1er cuatrimestre

### Integrantes

- Justo López Menardi (juslopezm@gmail.com)
- Matías Strobl (matias.strobl@gmail.com)
- Tomás Wehner (tomi.wehner10@gmail.com)
- Federico Yulita (fyulita@dc.uba.ar)

## Instrucciones


1. Descargar el repositorio con git

```
git clone https://github.com/fyulita/metodos-tp3.git
cd metodos-tp3
```

2. Bajarse los repositorios de `pybind` y `eigen` como submódulos

```
git submodule init
git submodule update
```

3. Instalar requerimientos con pip

```
pip install -r requirements.txt
```

4. Descomprimir los datos de entrenamiento y de test

```
gunzip data/train.csv.gz
gunzip data/test.csv.gz
```

Listo! Ya se puede disfrutar del TP3.

## Compilación

Ejecutar la primera celda del notebook o seguir los siguientes pasos:

- Compilar el código C++ en un módulo de Python

```
mkdir build
cd build
rm -rf *
cmake -DPYTHON_EXECUTABLE="$(which python)" -DCMAKE_BUILD_TYPE=Release ..
```

- Al ejecutar el siguiente comando se compila e instala la librería en el directorio `notebooks`

```
make install
```

## Carpetas

### Datos

En `data/` tenemos los datos de entrenamiento (`data/train.csv`) y los de test (`data/test.csv`).

### Notebooks

En `notebooks/` está la experimentación descrita en el informe. Para correrla usamos Jupyter Lab

```
cd notebooks
jupyter lab
```
o  Jupyter Notebook

```
cd notebooks
jupyter notebook
```

### Código

En `src/` se encuentra el código de implementación de los algoritmos en C++.
