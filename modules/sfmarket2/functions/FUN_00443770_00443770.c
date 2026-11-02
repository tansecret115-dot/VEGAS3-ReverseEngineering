/* Module: sfmarket2.dll
   Function: FUN_00443770
   Address: 00443770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00443770(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  if (param_1 != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
  }
  return;
}


