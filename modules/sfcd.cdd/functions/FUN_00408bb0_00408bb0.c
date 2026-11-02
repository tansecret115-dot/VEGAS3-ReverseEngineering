/* Module: sfcd.cdd
   Function: FUN_00408bb0
   Address: 00408bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00408bb0(undefined4 *param_1)

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
  if (*(int *)(iVar1 + 0x1e0) == 0) {
    return 0;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x1e4);
  *(undefined4 *)(iVar1 + 0x1e0) = 0;
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0x15);
  local_5b = 0x10;
  local_58 = 8;
  local_10 = 7000;
  *local_1c = 0;
  local_1c[1] = uVar2;
  local_18 = 8;
  lVar3 = FUN_004082c0(param_1,local_64);
  return lVar3;
}


