/* Module: sfcd.cdd
   Function: FUN_0040f650
   Address: 0040f650
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040f650(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_58;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_10;
  
  iVar1 = param_1[0x58];
  if (*(int *)(iVar1 + 0x1ec) == 0) {
    return;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x1f0);
  *(undefined4 *)(iVar1 + 0x1ec) = 0;
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0x15);
  local_10 = 7000;
  local_5b = 0x10;
  local_58 = 0x10;
  *local_1c = 0x8000000;
  local_1c[1] = 0;
  local_1c[2] = 0x30090000;
  local_1c[3] = uVar2;
  local_18 = 0x10;
  FUN_0040eb20(param_1,local_64);
  return;
}


