/**
******************************************************
* @file JSB_Buffer.c
* @brief Conjunto de funciones para gestion de un Buffer
* @author Julian Salas Bartolome
* @version 1.0
* @date Septiembre 2015
*
*
*******************************************************/

/**
******************************************************
* @brief Borra el Buffer
*
* Borra el Buffer y pone el puntero a 0 ( nPosBuffer = 0 )
*/
void BorraBuffer(void)
{ 
// Borra Buffer 232 de recepcion poniendo todos los elementos a 0
// Resetea nPosBuffer
   int nPos;
   	
   for( nPos=0;nPos<nLenBuf;nPos++)
   {
      cBuffer[nPos]=0; 
   }
  	nPosBuffer=0;
}
/**
******************************************************
* @brief A�ade un caracter al Buffer
*
* A�ada un caracter al buffer e incrementa el puntero del mismo
*
* @param c.- Codigo del caracter a a�adir a�l buffer
*
* @warning Si excede el tama�o del buffer se pierde el caracter
*
*/
void AddCharBuff(char c)
{ 
     if(nPosBuffer<nLenBuf)
		 {
         	cBuffer[nPosBuffer++]=c;			
		 }
}
/**
******************************************************
* @brief Retorna el valor del puntero del buffer
*
* Devuelve el valor del puntero del buffer
*
* @return.- Retorna el valor del puntero
*
*
*/
int PunteroBuffer (void)
{
  return nPosBuffer;
}
