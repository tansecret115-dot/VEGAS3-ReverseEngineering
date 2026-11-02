/* Module: vegas30k.dll
   Function: FUN_01011540
   Address: 01011540
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01011540(LPCVOID param_1)

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


