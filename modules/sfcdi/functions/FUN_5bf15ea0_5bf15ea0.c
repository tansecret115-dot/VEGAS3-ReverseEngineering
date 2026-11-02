/* Module: sfcdi.dll
   Function: FUN_5bf15ea0
   Address: 5bf15ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf15ea0(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  if (param_1 != (LPCVOID)0x0) {
    FUN_5bf2bd60((uint *)((int)param_1 + 0xc));
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
  }
  return;
}


