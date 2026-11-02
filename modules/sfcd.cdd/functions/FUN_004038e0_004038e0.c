/* Module: sfcd.cdd
   Function: FUN_004038e0
   Address: 004038e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004038e0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_78 [4];
  undefined4 local_68;
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_58;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_10;
  
  iVar2 = param_1[0x58];
  if (*(int *)(iVar2 + 0x1e0) == 0) {
    return 0;
  }
  *(undefined4 *)(iVar2 + 0x1e0) = 0;
  local_78[1] = 0;
  local_78[3] = *(undefined4 *)(iVar2 + 0x1e4);
  local_68 = *(undefined4 *)(iVar2 + 0x1e8);
  local_78[0] = 0x8000000;
  local_78[2] = 0x30090000;
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0x15);
  local_5b = 0x10;
  local_58 = 0x14;
  local_10 = 7000;
  puVar3 = local_78;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *local_1c = *puVar3;
    puVar3 = puVar3 + 1;
    local_1c = local_1c + 1;
  }
  local_18 = 0x14;
  uVar1 = FUN_00402d20(param_1,local_64);
  return uVar1;
}


