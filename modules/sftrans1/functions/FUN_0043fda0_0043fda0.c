/* Module: sftrans1.dll
   Function: FUN_0043fda0
   Address: 0043fda0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043fda0(LPCVOID param_1)

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


