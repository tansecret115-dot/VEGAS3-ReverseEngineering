/* Module: wavplug.dll
   Function: FUN_5f382130
   Address: 5f382130
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f382130(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return;
}


