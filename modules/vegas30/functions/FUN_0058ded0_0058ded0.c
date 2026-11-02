/* Module: vegas30.exe
   Function: FUN_0058ded0
   Address: 0058ded0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0058ded0(undefined4 *param_1)

{
  LONG LVar1;
  HGLOBAL pvVar2;
  int iVar3;
  
  LVar1 = InterlockedDecrement(param_1 + 2);
  if (LVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &PTR_LAB_00629770;
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    return 0;
  }
  iVar3 = param_1[2];
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  return iVar3;
}


