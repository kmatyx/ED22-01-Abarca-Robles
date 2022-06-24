![UCN](images/60x60-ucn-negro.png)


# Informe Técnico 
## Curso: Estructura de datos
### Detección y reidentificación de caras en secuencias de imágenes o video

**Alumnos:**

* Matías Robles (Encargado de la bitácora)
* Juan Pablo Abarca (Coordinador)

## Resumen 

> El desafío del taller empieza con un sistema que no hemos trabajado con anterioridad, por lo cual tuvimos que hacer nuestra propia investigación más las ayudantías que se nos proporcionaron para entender sobre las bibliotecas de OpenCV en C++ un lenguaje que también empezamos a aprender este semestre.
>El código en si toma imágenes y encierra a las personas detectadas en rectángulos rojos, las cuales se le aplican centroides que van a ser trabajadas con el método HOG para ubicar donde están y donde estarán en la imagen subsecuente. Se trabajará con una línea en medio de la imagen para tener el contador de personas, donde van y su velocidad.
## 1. Introducción
Con la llegada de la IA, el aprendizaje automático y la automatización, la visión por computadora se ha vuelto aún más relevante. En este taller, desarrollamos la experiencia de trabajar con visión por computadora

Y queremos compartir nuestra experiencia, específicamente en lo que respecta a la detección de objetos con OpenCV.

Nuestro objetivo es contar el número de personas que han cruzado una línea abstracta en pantalla usando visión por computadora con la biblioteca OpenCV.


### 1.1 Descripción del problema

Se debe lograr detectar y contar personas a traves de imagenes usando OpenCV en C++

### 1.2 Objetivos 

**Objetivo General**

Construir un sistema que pueda contar todas las personas
que entren y salgan dentro de una zona previamente determinada. 

**Objetivos específicos**

1. Investigar el problema propuesto, sea discutiendo el problema, leyendo articulos y consultando sobre el tema
2. Busqueda y comparacion de metodos para el trabajo
3. Implementar metodos decididos en el lenguaje de programacion C++ y librerias para el taller
4. Anotar resultados y mantener al dia el informe en Github

### 1.3 Solución propuesta

Transformar a las personas detectadas en centroides para que puedan ser contadas al atravesar un punto en la cámara en una resolución definida

## 2. Materiales y métodos

Utilizar un video o múltiples imagenes en sucesión a traves de una camara

### 2.1 Instalación

-Microsoft Visual Studio es el IDE utilizado para desarrollar el problema en C++

-OpenCV es una biblioteca libre de visión artificial, nos servira para contar y detectar las personas 

### 2.2 Diseño 



### 2.3 Implementación

Explicar brevemente algunos aspectos de implementación: Por ejemplo, detector de caras utilizado. Se pueden realizar pequeñas reseñas al código para indicar elementos importantes en el trabajo.

Por ejemplo, 

#### Detector de caras

El detector de caras utilizado fue xxx. Para utilizarlo se debe.... El código para detectar una cara en una imagen se muestra a continuación:

```c++
 1. faceCascadePath = "./haarcascade_frontalface_default.xml";
 2. faceCascade.load( faceCascadePath )
 3. std::vector<Rect> faces;
 4. faceCascade.detectMultiScale(frameGray, faces);

 5. for ( size_t i = 0; i < faces.size(); i++ )
 6. {
 7.  int x1 = faces[i].x;
 8.  int y1 = faces[i].y;
 9.  int x2 = faces[i].x + faces[i].width;
10.  int y2 = faces[i].y + faces[i].height;
11. }
```
La primera linea carga el archivo de entrenamiento... etc

## 3. Resultados obtenidos
Comenzamos con errores de pathing al principio

## 4. Conclusiones

# Anexos

## Anexo A: Instalación librerías OpenCV

https://opencv.org/releases/

## Anexo B: Instalación de IDE y configuración librerías OpenCV

https://visualstudio.microsoft.com/es/

https://www.youtube.com/watch?v=Hu7ArOaFm2g

# Referecia

1. Microsoft Visual Studio https://visualstudio.microsoft.com/es/
2. OpenCV https://opencv.org
