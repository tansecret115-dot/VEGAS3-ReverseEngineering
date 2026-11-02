/* Module: stl2plg.dll
   Function: FUN_00402da0
   Address: 00402da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00402da0(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return;
}


