/*
** ===========================================================================
**
** Project: 
**     EQUS
**
** File:
**     
**
** Description: 
**     <@Desciption about this file here>
**
** Copyright (c) 2000 SK Teletech, Co. All Rights Reserved.
** 
** History: 
**
** When       who        what, where, why
** ---------- --------   ------------------------------------------------------
** 00-07-21   woodstok   Created.
**
** ===========================================================================
*/

/* 
**----------------------------------------------------------------------------
**  Includes
**---------------------------------------------------------------------------- 
*/
#include <stdio.h>
#include "ska.h"

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
**---------------------------------------------------------------------------
**  Global variables
**---------------------------------------------------------------------------
*/

/*
**---------------------------------------------------------------------------
**  Internal variables
**---------------------------------------------------------------------------
*/

/*
**---------------------------------------------------------------------------
**  Function(internal use only) Declarations
**---------------------------------------------------------------------------
*/

            
/*
**---------------------------------------------------------------------------
**  Function(internal use only) Definitions
**---------------------------------------------------------------------------
*/


/*
**---------------------------------------------------------------------------
**  Function(external use only) Definitions
**---------------------------------------------------------------------------
*/
void SKY_API SKA_IDLCDTest(SKY_EVENT_T *pEvent)
{
    SCREEN_INDEX_E ScreenIndex;

    switch(pEvent->EventID)
    {
    case SE_APP_START :
        
        ScreenIndex = SelectScreen(SI_SUB_SCREEN);
        {
            TextOutStr(0, 0, (BYTE*)"��");
        }
        SelectScreen(ScreenIndex);

        EQS_TextOutStr(6, 0, (BYTE*)"��Woola");
        
        SKY_RefreshDisplay();
        SKY_RefreshSubDisplay();

        break;
    case SE_APP_END :
        SelectScreen(SI_MAIN_SCREEN);
        break;
	default:
		SKY_DefEventProc(pEvent);
		break;
    }
}

