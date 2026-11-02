/* Module: sfcd.cdd
   Function: FUN_0041d180
   Address: 0041d180
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041d180(HSFCD__ *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined4 *local_1c;
  
  iVar4 = *(int *)(param_1 + 0x160);
  if (*param_2 != 0) {
    SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0xbe);
    local_60 = 0xc;
    if (param_2[9] == 0x800) {
      iVar3 = param_2[7];
      local_5b = 8;
      local_53 = 0x10;
      uVar5 = iVar3 << 0xb;
    }
    else {
      iVar3 = param_2[7];
      local_5b = 0;
      local_53 = 0xf8;
      uVar5 = iVar3 * 0x930;
    }
    iVar1 = param_2[6];
    local_52 = 0;
    local_5a = (undefined1)((uint)iVar1 >> 0x18);
    local_59 = (undefined1)((uint)iVar1 >> 0x10);
    local_58 = (undefined1)((uint)iVar1 >> 8);
    local_57 = (undefined1)param_2[6];
    local_55 = (undefined1)((uint)iVar3 >> 8);
    local_54 = (undefined1)param_2[7];
    local_56 = (undefined1)((uint)iVar3 >> 0x10);
    puVar6 = (undefined4 *)*param_2;
    for (uVar2 = uVar5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    iVar3 = FUN_004194d0((undefined4 *)param_1,local_64);
    FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar4 + 100),0x54c,(uchar *)"mmc.cpp");
    if (iVar3 == 0) {
      puVar6 = (undefined4 *)*param_2;
      for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = *local_1c;
        local_1c = local_1c + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)local_1c;
        local_1c = (undefined4 *)((int)local_1c + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    return iVar3;
  }
  return -0x7fffbffd;
}


