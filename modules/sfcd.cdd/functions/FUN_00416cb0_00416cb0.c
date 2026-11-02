/* Module: sfcd.cdd
   Function: FUN_00416cb0
   Address: 00416cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416cb0(undefined4 *param_1)

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
  if (*(int *)(iVar1 + 0x1e0) == 0) {
    return;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x1e4);
  *(undefined4 *)(iVar1 + 0x1e0) = 0;
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0x15);
  local_10 = 7000;
  local_5b = 0x10;
  local_58 = 0x10;
  *local_1c = 0x8000000;
  local_1c[1] = 0;
  local_1c[2] = 0x30090000;
  local_1c[3] = uVar2;
  local_18 = 0x10;
  FUN_00415eb0(param_1,local_64);
  return;
}


