/* Module: sfcd.cdd
   Function: FUN_0040d610
   Address: 0040d610
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_0040d610(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
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
  uVar2 = *(undefined4 *)(iVar1 + 0x1e0);
  *(undefined4 *)(iVar1 + 0x1dc) = 0;
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0x15);
  local_10 = 7000;
  local_5b = 0x10;
  local_58 = 0x10;
  *local_1c = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = uVar2;
  local_18 = 0x10;
  lVar3 = FUN_0040c8e0(param_1,local_64);
  return lVar3;
}


