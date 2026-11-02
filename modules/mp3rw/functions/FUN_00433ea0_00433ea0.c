/* Module: mp3rw.dll
   Function: FUN_00433ea0
   Address: 00433ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00433ea0(LPCVOID param_1)

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


