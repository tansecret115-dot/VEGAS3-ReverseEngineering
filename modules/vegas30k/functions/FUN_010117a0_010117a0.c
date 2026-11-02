/* Module: vegas30k.dll
   Function: FUN_010117a0
   Address: 010117a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010117a0(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  if (param_1 != (LPCVOID)0x0) {
    if (*(int *)((int)param_1 + 4) != 0) {
      _SfList_Destroy_4(*(int *)((int)param_1 + 4));
    }
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
  }
  return;
}


