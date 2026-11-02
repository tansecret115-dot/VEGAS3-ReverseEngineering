/* Module: sfcd.cdd
   Function: FUN_00416680
   Address: 00416680
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00416680(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_55;
  undefined1 local_54;
  byte local_4e;
  undefined4 *local_1c;
  uint local_18;
  ulong local_c;
  
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0x2a);
  local_60 = 10;
  uVar5 = param_3 * param_4;
  uVar3 = (undefined1)((uint)param_3 >> 8);
  if (param_2 != (undefined4 *)0x0) {
    puVar6 = local_1c;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *param_2;
      param_2 = param_2 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  local_55 = uVar3;
  local_54 = (char)param_3;
  local_18 = uVar5;
  FUN_0041f970((undefined1 *)local_1c,uVar5 >> 1);
  iVar1 = FUN_00415eb0(param_1,local_64);
  while( true ) {
    if ((iVar1 == 0) || (iVar2 = SfScsi_IsCheckCondition(local_c), iVar2 == 0)) {
      return iVar1;
    }
    if ((1 < (local_4e & 0xf)) && ((local_4e & 0xf) != 6)) break;
    SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0x2a);
    local_60 = 10;
    local_55 = uVar3;
    local_54 = (char)param_3;
    local_18 = uVar5;
    iVar1 = FUN_00415eb0(param_1,local_64);
  }
  return -0x7ffb1f38;
}


