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
![tallerimg2](images/tallerimg2.Jpeg)


### 2.3 Implementación

El principal desafio de implementacion fue el de un objeto poder detectarlo y encerrarlo en un rectangulo en cual fue logrado a traves de un HOG.


#### Detector de objetos 

El detector de caras objetos utilizado fue HOG, el cual permite demilitar ciertas figuras en la imagen para poder encerrarlas en un rectangulo

```
   1.-int dDetect(const HOGDescriptor &hog, Mat &img)
        {
   2.-  vector<Rect> found, found_filtered;
   3.-  double time = (double) getTickCount();
   4.-  hog.detectMultiScale(img, found, 0, Size(8,8), Size(16,16), 1.07, 2);
   5.-  time = (double) getTickCount() - time;
   6.-  cout << "tiempo para detectar = " << (time*1000./cv::getTickFrequency()) << " m" << endl;
   7.-  for(size_t i = 0; i < found.size(); i++ )
   8.-     {
   9.-       Rect r = found[i];
   10.-       size_t j;
   11.-       for ( j = 0; j < found.size(); j++ )
   12.-           if ( j != i && (r & found[j]) == r )
   13.-               break;
   14.-       if ( j == found.size() )
   15.-     	  found_filtered.push_back(r);
   16.-       }
   17.-      for (size_t i = 0; i < found_filtered.size(); i++)
         {
```
En el presente codigo podemos ver que al detectar un objeto en este caso una figura definida esta se enmarca en un rectangulo la cual va permitir su unificacion para el conteo

## 3. Resultados obtenidos
se logro el poder obtener una unificacion de las estrcturas que aparecen en la imagen para poder ser resaltadas.
Problemas de compilacion con OpenCv dada su extensa libreria 

## 4. Conclusiones
El proyecto a prensentado varias dificultades ya que en el lenguaje que se utiliza no ha sido muy usual en el uso y aprendizajes anteriores, pero la logica que se debia implementar estaba un poco mas clara sobretodo con la deteccion de objetos, dado que en proyectos anteriores se ha tenido que implementar algo similar en donde se debia reconocer un objeto a travez de un color seguirlo y dispararle a este, por lo cual se utilizo OpenCv con Python.


# Anexos

## Anexo A: Instalación librerías OpenCV

https://opencv.org/releases/

## Anexo B: Instalación de IDE y configuración librerías OpenCV

https://visualstudio.microsoft.com/es/

https://www.youtube.com/watch?v=Hu7ArOaFm2g

# Referecia

1. Microsoft Visual Studio https://visualstudio.microsoft.com/es/
2. OpenCV https://opencv.org
3. Deteccion de objetos https://www.hackster.io/mjrobot/automatic-vision-object-tracking-5575c4
