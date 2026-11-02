/* Module: sfppack3.dll
   Function: FUN_5cc31fe0
   Address: 5cc31fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5cc31fe0(LPCVOID param_1)

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


