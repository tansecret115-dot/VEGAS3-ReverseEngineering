/* Module: sfpagepeel.dll
   Function: FUN_0042af60
   Address: 0042af60
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_0042af60(undefined4 *param_1)

{
  LONG LVar1;
  HGLOBAL pvVar2;
  
  LVar1 = InterlockedDecrement(param_1 + 0x24);
  if (LVar1 == 0) {
    if ((LPCVOID)param_1[0xc] != (LPCVOID)0x0) {
      if (param_1[0x25] == 1) {
        FUN_00434620((LPCVOID)param_1[0xc],0);
      }
      param_1[0xc] = 0;
    }
    if (param_1 != (undefined4 *)0x0) {
      FUN_0042aeb0(param_1);
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    return 0;
  }
  return param_1[0x24];
}


