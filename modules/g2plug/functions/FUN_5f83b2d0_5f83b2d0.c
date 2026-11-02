/* Module: g2plug.dll
   Function: FUN_5f83b2d0
   Address: 5f83b2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f83b2d0(undefined4 param_1,LPCVOID param_2)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_2);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_2);
  GlobalFree(pvVar1);
  return;
}


