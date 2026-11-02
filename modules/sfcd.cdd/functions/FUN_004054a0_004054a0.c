/* Module: sfcd.cdd
   Function: FUN_004054a0
   Address: 004054a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004054a0(undefined4 *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  _scsicommand local_64 [4];
  undefined4 local_60;
  byte local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined4 *local_1c;
  uint local_18;
  undefined4 local_10;
  
  uVar1 = *param_2;
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0xed);
  local_56 = -(param_3 != 0) & 0x31;
  local_60 = 10;
  local_55 = (undefined1)(uVar1 >> 8);
  local_54 = (undefined1)uVar1;
  puVar3 = (undefined4 *)param_2[1];
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *local_1c = *puVar3;
    puVar3 = puVar3 + 1;
    local_1c = local_1c + 1;
  }
  for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)local_1c = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    local_1c = (undefined4 *)((int)local_1c + 1);
  }
  local_10 = 10000;
  local_18 = uVar1;
  FUN_00404d50(param_1,local_64);
  return;
}


