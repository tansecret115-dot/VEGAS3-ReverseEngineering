/* Module: vfplugs.dll
   Function: FUN_0040a640
   Address: 0040a640
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0040a640(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return;
}


