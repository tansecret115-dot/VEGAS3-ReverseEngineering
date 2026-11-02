/* Module: sfcdi.dll
   Function: SfCdiGetPrintStats
   Address: 5bf0ad70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiGetPrintStats(void *,struct _SFCDI_BURN_STATS *) */

long SfCdiGetPrintStats(void *param_1,_SFCDI_BURN_STATS *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
                    /* 0xad70  68  ?SfCdiGetPrintStats@@YGJPAXPAU_SFCDI_BURN_STATS@@@Z */
  if ((param_1 != (void *)0x0) && (param_2 != (_SFCDI_BURN_STATS *)0x0)) {
    EnterCriticalSection(param_1);
    puVar2 = param_1;
    for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 4;
    }
    LeaveCriticalSection(param_1);
    return 0;
  }
  return 0;
}


