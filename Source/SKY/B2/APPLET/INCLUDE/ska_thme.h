/*
** ============================================================================
**
** Project: 
**     SkySimul
**
** File:
**     ska_thme.h
**
** Description:
**     @DesciptionAboutThisFileHere
**
** Copyright (c) 2000 SK Teletech, Co. All Rights Reserved.
**
** History:
**
** When       who        what, where, why
** ---------- --------   ------------------------------------------------------
** 2001-02-17 jrkwon     Created.
**
** ============================================================================
*/

#ifndef _SKA_THME_H_
#define _SKA_THME_H_

#ifdef __cplusplus
extern "C" {
#endif
    
/* 
**----------------------------------------------------------------------------
**  Includes
**----------------------------------------------------------------------------
*/

/*
**----------------------------------------------------------------------------
**  Definitions
**----------------------------------------------------------------------------
*/
#define COLOR_SCHEME_COUNT     6

/*
**----------------------------------------------------------------------------
**  Type Definitions
**----------------------------------------------------------------------------
*/

/*
**----------------------------------------------------------------------------
**  General Declarations
**----------------------------------------------------------------------------
*/

/*
**---------------------------------------------------------------------------
**  Variable Declarations
**---------------------------------------------------------------------------
*/

/*
**---------------------------------------------------------------------------
**  Function(external use only) Declarations
**---------------------------------------------------------------------------
*/
  
extern void SKY_API SKA_MainSetTheme(SKY_EVENT_T *pEvent);

#ifdef __cplusplus
}  /* extern "C" */
#endif

#endif  /* _SKA_THME_H_ */
