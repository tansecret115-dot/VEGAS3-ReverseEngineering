/* Module: sfcdi.dll
   Function: SfCDBurn_GetStatus
   Address: 5bf04df0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfCDBurn_GetStatus(struct HSFBURN__ *,struct _SFCDI_BURN_STATS *) */

int SfCDBurn_GetStatus(HSFBURN__ *param_1,_SFCDI_BURN_STATS *param_2)

{
  int iVar1;
  HSFBURN__ *pHVar2;
  
                    /* 0x4df0  26  ?SfCDBurn_GetStatus@@YGHPAUHSFBURN__@@PAU_SFCDI_BURN_STATS@@@Z */
  if ((param_1 != (HSFBURN__ *)0x0) && (param_2 != (_SFCDI_BURN_STATS *)0x0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)param_1);
    pHVar2 = param_1;
    for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)param_2 = *(undefined4 *)pHVar2;
      pHVar2 = pHVar2 + 4;
      param_2 = param_2 + 4;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
    return 0;
  }
  return 0;
}


