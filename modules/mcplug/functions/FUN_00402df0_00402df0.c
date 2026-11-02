/* Module: mcplug.dll
   Function: FUN_00402df0
   Address: 00402df0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402df0(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  int iVar2;
  
  InterlockedDecrement(param_1 + 0x8f);
  iVar2 = param_1[0x8f];
  if (iVar2 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_00402cd0(param_1);
      pvVar1 = GlobalHandle(param_1);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(param_1);
      GlobalFree(pvVar1);
    }
    iVar2 = 0;
  }
  return iVar2;
}


