/*
** ============================================================================
**
** Project: 
**     EQUSIMUL
**
** File:
**     eqc_xxxx.h
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
** 2000-MM-DD <id>       Created.
**
** ============================================================================
*/

#ifndef _EQC_XXXX_H_
#define _EQC_XXXX_H_

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
HCONTROL    EQS_API EQC_XxxYyy(COORD x, COORD y, BYTE *pszStr);
/* <-- Add here --> get/set functions */
void        EQS_API EQC_SetXxxYyy(HCONTROL hControl, /* <-- Add here --> */);
/* <-- Add here --> */ EQS_API EQC_GetXxxYyy(HCONTROL hControl);

#ifdef __cplusplus
}  /* extern "C" */
#endif

#endif  /* _EQC_XXXX_H_ */