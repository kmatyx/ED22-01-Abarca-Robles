![UCN](images/60x60-ucn-negro.png)


# Informe Técnico 
## Curso: Estructura de datos
### Detección y reidentificación de caras en secuencias de imágenes o video

**Alumnos:**

* Matías Robles (Encargado de la bitácora)
* Juan Pablo Abarca (Coordinador)

## Resumen 

> El desafío del taller empieza con un sistema que no hemos trabajado con anterioridad, por lo cual tuvimos que hacer nuestra propia investigación más las ayudantías que se nos proporcionaron para entender sobre las bibliotecas de OpenCV en C++ un lenguaje que también empezamos a aprender este semestre.
El código 

## 1. Introducción

La primera función de un reporte técnico es plasmar la información necesaria para que otras personas puedan reproducir el sistema propuesto o puedan entender su fucnionamiento . Para cumplir anterior se debe diferenciar claramente entre los artefactos de diseño e implementación. En el caso de un desarrollo tecnológico los algoritmos son importantes como componente de diseño y los programas generalmente son irrelevantes y deben resumidos o agregados en anexos en el documento. Los programas no son importantes en el documento, salvo si se quiere explicar conceptos expecíficos del lenguaje o del algoritmo implementado.

La redacción debe ser formal y de modo impersonal. No se debe utlizar primera persona del singular o plural. Se debe evitar el uso de cualquier calificativo sustituyéndolo siempre utilizando datos concretos y rastreables en documentos o publicaciones a través de referencias bibliográficas. Por ejemplo, no calificar algo como: "muy importante", "sustancial", "muy usadoo" o "mucho mejor".

Las comparaciones deben concretarse con hechos y datos, sin frases ambiguas o términos generales. Por ejemplo, nunca se debe redactar frases como "el método es mejor que el método B". Lo correcto es decir, el error promedio de el método A es de 5 %, correspondiendo a la mitad del error de 10% obtenido utilizando el método B". El tiempo verbal es usualmente presente. No se debe perder de vista que se está explicando ”como hacer algo”, en vez de ”qué se hizo”. Todo aspecto circunstancial es irrelevante para el documento. Por ejemplo, si se ha desarrollado en el laboratorio X, o en el curso Y, con el profesor Z, etc.

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

Transformar a las personas detectadas en centroides que puedan ser contadas a una resolucion dada

## 2. Materiales y métodos

Explicar brevemente como se espera desarrollar el trabajo de implementación.

### 2.1 Instalación
-Microsoft Visual Studio es el IDE utilizado para desarrollar el problema en C++
-OpenCV es una biblioteca libre de visión artificial, nos servira para contar y detectar las personas 

### 2.2 Diseño 

Explicar los componentes (módulos o clases) utilizados para resolver el problema. Indicar arquitectura propuesta, diagrama de clases u otro artefacto que estime conveniente para explicar el diseño de su implimentación.

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

## 4. Conclusiones

# Anexos

## Anexo A: Instalación librerías OpenCV

https://opencv.org/releases/

## Anexo B: Instalación de IDE y configuración librerías OpenCV

https://visualstudio.microsoft.com/es/

https://www.youtube.com/watch?v=Hu7ArOaFm2g

# Referecia

Indicar los libros, páginas web, documentos, etc. Utilizados en el trabajo. Por ejemplo:

1. Microsoft Visual Studio https://visualstudio.microsoft.com/es/
2. OpenCV https://opencv.org
