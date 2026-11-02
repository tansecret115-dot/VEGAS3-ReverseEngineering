/* Module: sfpagepeel.dll
   Function: FUN_004096f0
   Address: 004096f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_004096f0(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return;
}


