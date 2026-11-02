/* Module: sfxpfx1.dll
   Function: FUN_5c976fab
   Address: 5c976fab
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c976fab(int param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  void *this;
  undefined4 *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    uVar2 = 0;
    bVar1 = FUN_5c977750(param_1);
    if (CONCAT31(extraout_var,bVar1) == 1) {
      *param_2 = 0;
      uVar2 = 0x80040203;
    }
    else {
      this = (void *)FUN_5c942900(0x30);
      if (this == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_5c976e6d(this,*(int *)(param_1 + 0xc));
      }
      *param_2 = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        uVar2 = 0x8007000e;
      }
    }
  }
  return uVar2;
}


