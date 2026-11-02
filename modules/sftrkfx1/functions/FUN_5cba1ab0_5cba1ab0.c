/* Module: sftrkfx1.dll
   Function: FUN_5cba1ab0
   Address: 5cba1ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5cba1ab0(LPCVOID param_1)

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


