/* Module: sfcd.cdd
   Function: FUN_00415000
   Address: 00415000
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00415000(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_58;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_10;
  
  iVar1 = param_1[0x58];
  if (*(int *)(iVar1 + 0x1dc) == 0) {
    return 0;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x1e4);
  uVar3 = *(undefined4 *)(iVar1 + 0x1e0);
  *(undefined4 *)(iVar1 + 0x1dc) = 0;
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0x15);
  local_5b = 0x10;
  local_58 = 0xc;
  local_10 = 7000;
  *local_1c = 0;
  local_1c[1] = uVar3;
  local_1c[2] = uVar2;
  local_18 = 0xc;
  uVar4 = FUN_004144a0(param_1,local_64);
  return uVar4;
}


