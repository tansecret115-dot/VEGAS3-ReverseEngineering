/* Module: stl2plg.dll
   Function: FUN_0040a4b0
   Address: 0040a4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040a4b0(int *param_1)

{
  HGLOBAL pvVar1;
  int iVar2;
  
  InterlockedDecrement(param_1 + 0x96);
  iVar2 = param_1[0x96];
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      FUN_0040a340(param_1);
      pvVar1 = GlobalHandle(param_1);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(param_1);
      GlobalFree(pvVar1);
    }
    iVar2 = 0;
  }
  return iVar2;
}


