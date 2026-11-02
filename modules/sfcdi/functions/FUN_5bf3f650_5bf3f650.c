/* Module: sfcdi.dll
   Function: FUN_5bf3f650
   Address: 5bf3f650
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf3f650(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  if (param_1 != (LPCVOID)0x0) {
    if (*(int **)((int)param_1 + 4) != (int *)0x0) {
      FUN_5bf2b040(*(int **)((int)param_1 + 4));
    }
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
  }
  return;
}


