/* Module: wmfplug2.dll
   Function: FUN_00402820
   Address: 00402820
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402820(int *param_1)

{
  HGLOBAL pvVar1;
  int iVar2;
  
  InterlockedDecrement(param_1 + 0x8f);
  iVar2 = param_1[0x8f];
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      FUN_004026a0(param_1);
      pvVar1 = GlobalHandle(param_1);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(param_1);
      GlobalFree(pvVar1);
    }
    iVar2 = 0;
  }
  return iVar2;
}


