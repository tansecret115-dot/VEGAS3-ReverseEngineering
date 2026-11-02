/* Module: sfmarket2.dll
   Function: FUN_004028d0
   Address: 004028d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_004028d0(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return;
}


