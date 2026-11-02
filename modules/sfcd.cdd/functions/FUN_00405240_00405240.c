/* Module: sfcd.cdd
   Function: FUN_00405240
   Address: 00405240
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00405240(undefined4 *param_1,uchar *param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uchar *puVar6;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_58;
  byte local_4e;
  uchar *local_1c;
  uint local_18;
  ulong local_c;
  
  iVar1 = param_1[0x58];
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,10);
  local_60 = 6;
  uVar4 = (undefined1)param_3;
  uVar5 = param_3 * param_4;
  local_58 = uVar4;
  if (param_2 != (uchar *)0x0) {
    if (param_5 == 0) {
      puVar6 = local_1c;
      for (uVar2 = uVar5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)puVar6 = *(undefined4 *)param_2;
        param_2 = param_2 + 4;
        puVar6 = puVar6 + 4;
      }
      for (uVar2 = uVar5 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *param_2;
        param_2 = param_2 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    else {
      CreateRawSectors(local_1c,param_2,*(long *)(iVar1 + 0x1cc),1,param_3);
      uVar5 = param_3 * 0x930;
    }
  }
  local_18 = uVar5;
  FUN_0041f970(local_1c,uVar5 >> 1);
  uVar2 = FUN_00404d50(param_1,local_64);
  while( true ) {
    if ((uVar2 == 0) || (iVar3 = SfScsi_IsCheckCondition(local_c), iVar3 == 0)) {
      *(uint *)(iVar1 + 0x1cc) = *(int *)(iVar1 + 0x1cc) + param_3;
      return uVar2;
    }
    if ((1 < (local_4e & 0xf)) && ((local_4e & 0xf) != 6)) break;
    SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,10);
    local_60 = 6;
    local_58 = uVar4;
    local_18 = uVar5;
    uVar2 = FUN_00404d50(param_1,local_64);
  }
  return 0x8004e0c8;
}


