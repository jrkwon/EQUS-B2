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
#include "eqs.h"
#include "hs.h"
#include "uixscrn.h"
#include "bio.h"

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

CONST CHAR* CONST RingMenu[] = {SF_BLACK_NUM1"ON",
					SF_BLACK_NUM2"OFF"
};

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

VOID EQA_RingTop(EQS_EVENT *pInEvent)
{
	static HCONTROL	hHnd;
	UINT8	iKey = 0;

	switch (pInEvent->EventID)
	{
	case EQE_APP_START:
        EQS_GetDC(TRUE);

		hHnd = EQC_ScrollList(RingMenu, 2, 2, 0, 0, 13, 2, 0, SCROLL_DEFAULTS);
		EQC_CMDConsole(CONSOLE_TYPE_SEL_CANCEL, CMD_DEFAULTS);
		break;

	case EQE_APP_END:
        EQS_ReleaseDC();
        break;

	case EQE_KEY_1:
	case EQE_KEY_2:
		iKey = pInEvent->EventID - EQE_KEY_1;
		EQC_SetScrollIndex(hHnd, iKey);

	case EQE_SOFTKEY_SELECT:
		switch(EQC_GetScrollIndex(hHnd)){
		case 0:
		  #if MODEL_ID != MODEL_B1 && (MODEL_ID != MODEL_B2)
			BIO_OUT(ENC_GPIO_0, BIO_RING_INDICATOR_EN_M, BIO_RING_INDICATOR_ON_V);
		  #endif//		  #if MODEL_ID != MODEL_B1
			EQC_MesgBox("ON", 3, FT_MED,MB_BEEP);
			break;
		case 1:
		  #if MODEL_ID != MODEL_B1 && (MODEL_ID != MODEL_B2)
			BIO_OUT(ENC_GPIO_0, BIO_RING_INDICATOR_EN_M, BIO_RING_INDICATOR_OFF_V);
		  #endif//		  #if MODEL_ID != MODEL_B1
			uiscrn_ann(HS_AN_SNI, 0);
			EQC_MesgBox("OFF", 3,FT_MED, MB_BEEP);
			break;
		default:
			break;
		}
		break;

	default:
		EQS_DefEventProc(pInEvent);
		break;
	}
}

/*
**---------------------------------------------------------------------------
**  END.
**---------------------------------------------------------------------------
*/
