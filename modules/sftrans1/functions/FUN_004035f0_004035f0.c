/* Module: sftrans1.dll
   Function: FUN_004035f0
   Address: 004035f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004035f0(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return;
}


