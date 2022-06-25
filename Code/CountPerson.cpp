
#include "opencv2/opencv.hpp"
#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/videoio.hpp"
#include <opencv2/objdetect.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/video.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/*Captura las imagenes y obtiene el numero de personas que pasa*/

int main(int argc, char **argv) {

    HOGDescriptor hog;
    hog.setSVMDetector(HOGDescriptor::getDefaultPeopleDetector());
    cout << "ABRIR OPEN CV " << CV_VERSION << endl;
    Mat image;
    ImagenCapture capture;
    	//Abre Imagen 
    imagen.open(0);
         //Verificamos imagen 
    if(capture.isOpened())	
    {
        cout << "IMAGEN ABIERTA" << endl;
        for(;;)
        {
            capture >> imagen;
        //Comprueba cantidad de iamegen para salir
            if(cam_image.empty())	
                break;
	    //Devuelve el numero de personas que se vio en la imagen con la funcion DetectPerson
            int Cant_Personas = detectAndDraw(hog, image);		
            cout << "People count: " << Cant_Personas << endl;
        
        }
    }
    
    cout<<"Imagen Lista para conteo"<<endl;
    return 0;
}
