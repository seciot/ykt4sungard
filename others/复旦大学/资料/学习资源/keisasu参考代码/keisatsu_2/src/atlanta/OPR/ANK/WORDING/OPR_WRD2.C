/************************************************************************
*	System		: POPLAR_B/POPLAR_L/ANZU_L
*	File Name	: OPR_WRD2.C
*	Author		: �n�ӈ��
*	Date		: 1996/10/23
*	RealTimeOS	: �q�h�r�b�i�r�g�V�O�S�R�j���j�^�[
*	Description	: �k�b�c�p�Œ蕶����i�ʑ��̈�Q)
*	Maintenance	: 
*
*	Copyright (C) 1996 Murata Machinery,Ltd. All rights reserved.
*************************************************************************/
#include	"\src\atlanta\define\product.h"
#include	"\src\atlanta\define\wording.h"

#if (PRO_CPU == SH7043)
	#pragma section OPR_WRD0	/* �Z�N�V�������̎w�� COPR_WRD0 */
#endif

#if defined (KEISATSU) /* �x�@FAX 05/05/26 �΋����a */
	CONST UBYTE D2W_2ndWordingTop[]				= "\0";
#else
	#include D2W_WORDING_2
#endif

#if (PRO_CPU == SH7043)
	#pragma section
#endif
