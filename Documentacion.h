/**
******************************************************
* @file Documentacion.h
* @brief Conjunto de funciones para control y gestion de un Buffer
* @author Julian Salas Bartolome
* @version 1.0
* @date Octubre 2015
*
*
*******************************************************/




/**
 * \mainpage Buffer
 *
 * \section introduccion_seccion Introduccion
 *
 * Estas funciones se han diseñado para gestionar un buffer de datos
 *  
 * Normalmente sera utilizado para comunicaciones, en el buffer se almacenara la informacion recibida por un puerto de comunicaciones y/o la informacion a transmitir
 *
 * En esta primera version se ha previsto una <b> longitud maxima de 256 bytes </b> aunque en caso necesario y si la memoria del dispositivo lo permite es facil modificarlo
 *
 * Esa longitud por defecto se puede variar modificando la siguiente linea en Jsb_Buffer.h
 *
 *		int const nLenBuf = 255;         //!<Longitud del Buffer
 *
 * Aunque este paquete de funciones es ampliamente utilizado en los proyectos editados, se puede ver \ref EjemploBuffer.c 
 * para mas detalles de como usarlas  
 */








/** 
 *
 * En este ejemplo se puede observar como utilizae el buffer en un sistema con recepcion/transmision por UART de un modulo GSM
 * El ejemplo tiene solo caracter didactico, no se incluyen las funciones que serian necesarias para inicializar el modulo GSM
 *
 * En primer lugar debe crearse la funcion que atiende la recepcion UART (#int_rda)
 * Esa funcion se encarga de ir añadiendo al buffer los caracteres que se van recibiendo por el puerto serie
 * 
 * Lo siguiente sería inicializar los puertos del micro asi como de habilitar las interrupciones cosa que se realiza en Inicio()
 *
 *  Por ultimo, en main(), despues de iniciar el micro limpiamos el buffer y de forma continua ( bcule infinito ) se annaliza si 
 *  en el contenido del bffer aparece el texto "CMTI:" lo que indica si se ha recibido un SMS
 *
 *  En caso de haberse recibido un SMS extraemos del mismo el numero para posteriormente leerlo y actuar en consecuenca, tanto la lectrua del 
 *  SMS como la accion a ejecutar se realizaria en la zona etiquetada como 'Zona de tratamiento indefinido del contenido del SMS' en la que 
 *  no se ha definido el codigo necesario  
 * 
*/
/** \example EjemploBuffer.c 
 * @brief Ejemplo 1.- Ejemplo uso Buffer
 */

