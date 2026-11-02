/* Module: vegas30k.dll
   Function: FUN_01011870
   Address: 01011870
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01011870(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  if (param_1 != (LPCVOID)0x0) {
    if (*(int *)((int)param_1 + 0x40) != 0) {
      _SfList_Destroy_4(*(int *)((int)param_1 + 0x40));
    }
    if (*(int *)((int)param_1 + 0x44) != 0) {
      _SfList_Destroy_4(*(int *)((int)param_1 + 0x44));
    }
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
  }
  return;
}


