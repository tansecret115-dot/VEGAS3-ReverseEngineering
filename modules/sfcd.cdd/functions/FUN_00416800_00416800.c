/* Module: sfcd.cdd
   Function: FUN_00416800
   Address: 00416800
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416800(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined4 *local_1c;
  uint local_18;
  undefined4 local_10;
  
  iVar1 = param_1[0x58];
  uVar2 = *param_2;
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0xed);
  local_60 = 10;
  local_56 = *(int *)(iVar1 + 0x1d8) != 0;
  local_55 = (undefined1)(uVar2 >> 8);
  local_54 = (undefined1)uVar2;
  puVar4 = (undefined4 *)param_2[1];
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *local_1c = *puVar4;
    puVar4 = puVar4 + 1;
    local_1c = local_1c + 1;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)local_1c = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    local_1c = (undefined4 *)((int)local_1c + 1);
  }
  local_10 = 10000;
  local_18 = uVar2;
  FUN_00415eb0(param_1,local_64);
  return;
}


