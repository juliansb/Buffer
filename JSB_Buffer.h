/**
******************************************************
* @file JSB_Buffer.h
* @brief Conjunto de funciones para gestion de un Buffer
* @author Julian Salas Bartolome
* @version 1.0
* @date Septiembre 2015
*
*
*******************************************************/
#ifndef _JSBBuffer
#define _JSBBuffer

//-------------------------------------------------------
//Variables Buffer 
//-------------------------------------------------------
int const nLenBuf = 255;         //!<Longitud del Buffer
int nPosBuffer = 0;				 //!<Puntero del buffer
int cBuffer[nLenBuf];			 //!<Creacion del buffer

//-------------------------------------------------------
//Funciones Buffer 
//-------------------------------------------------------
void BorraBuffer();
void AddCharBuff(char c);
int PunteroBuffer (void);


#include "JSB_Buffer.c"

#endif