/* Module: sfxpfx1.dll
   Function: FUN_5c942920
   Address: 5c942920
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5c942920(LPCVOID param_1)

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


