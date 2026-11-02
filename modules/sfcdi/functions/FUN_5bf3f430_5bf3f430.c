/* Module: sfcdi.dll
   Function: FUN_5bf3f430
   Address: 5bf3f430
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf3f430(LPCVOID param_1)

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


