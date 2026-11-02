/* Module: sfs4rw.dll
   Function: FUN_00433e20
   Address: 00433e20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00433e20(LPCVOID param_1)

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


