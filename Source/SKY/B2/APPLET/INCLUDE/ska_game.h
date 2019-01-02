/*
** ============================================================================
**
** Project: 
**     Bomber
**
** File:
**     ska_game.h
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
** 2001-02-07 woodstok     Created.
**
** ============================================================================
*/

#ifndef _SKA_GAME_H_
#define _SKA_GAME_H_

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
    
extern void SKY_API SKA_MainApache(SKY_EVENT_T *pEvent);
extern void SKY_API SKA_MainPolar(SKY_EVENT_T *pEvent);
extern void SKY_API SKA_Mars(SKY_EVENT_T *pEvent);
extern void SKY_API SKA_MainSamtris(SKY_EVENT_T *pEvent);
extern void SKY_API SKA_MainPuzzle(SKY_EVENT_T *pEvent);


#ifdef __cplusplus
}  /* extern "C" */
#endif

#endif  /* _SKA_GAME_H_ */
