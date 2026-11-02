/* Module: sfcd.cdd
   Function: FUN_0040d190
   Address: 0040d190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040d190(HSFCD__ *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_d8;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined1 local_c0;
  undefined1 local_bf;
  byte local_bd;
  undefined4 local_b8;
  uint local_b3;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_94;
  undefined1 local_93;
  byte local_92;
  undefined4 local_88;
  byte local_84;
  undefined1 local_83;
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_58;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_10;
  
  iVar5 = *(int *)(param_1 + 0x160);
  puVar6 = &local_cc;
  for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_cc._1_1_ = 0;
  local_cc._2_1_ = 0;
  local_cc._3_1_ = 8;
  local_c8 = 0;
  local_c7 = 0;
  local_c6 = 0;
  local_c5 = 0;
  local_c3 = 0;
  uVar1 = (undefined1)((uint)param_2 >> 8);
  local_98 = 0x31;
  local_97 = 2;
  local_c2 = uVar1;
  local_c1 = (char)param_2;
  uVar2 = cdr_GetSpeed(param_1,1);
  if (uVar2 != 0xffff) {
    if ((uVar2 & 1) != 0) {
      local_96 = 0;
    }
    if ((uVar2 & 2) == 0) goto LAB_0040d21d;
  }
  local_96 = 1;
LAB_0040d21d:
  local_92 = local_92 | 4;
  local_94 = 8;
  local_93 = 10;
  local_c0 = 0x20;
  local_bf = 6;
  iVar4 = cdr_GetTestMode(param_1);
  local_bd = -(iVar4 != 0) & 2;
  lVar3 = FUN_0040ca70(param_1,0x22,&local_b8,0x20);
  if (lVar3 == 0) {
    local_b8._2_1_ = 0xc0;
    local_b8._3_1_ = 0;
    local_a5 = 0;
    local_a6 = (undefined1)local_b3;
    *(uint *)(iVar5 + 0x1d8) = local_b3 & 0xff;
    SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x15);
    local_5b = 0x10;
    local_58 = 0x44;
    local_10 = 7000;
    puVar6 = &local_cc;
    puVar7 = local_1c;
    for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    local_18 = 0x44;
    lVar3 = FUN_0040c8e0((undefined4 *)param_1,local_64);
    if (lVar3 == 0) {
      lVar3 = FUN_0040ca70(param_1,0x23,&local_88,0x24);
      if (lVar3 == 0) {
        local_88._3_1_ = *(undefined1 *)(iVar5 + 0x1d8);
        if (*(int *)(param_3 + 0x38) == 0) {
          local_84 = (-((*(uint *)(param_3 + 8) & 2) != 0) & 0x40U) + 0x40;
        }
        else {
          local_84 = 0;
        }
        if ((*(uint *)(param_3 + 8) & 1) != 0) {
          local_84 = local_84 | 2;
        }
        local_83 = 0;
        SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x15);
        local_5b = 0x10;
        local_d8 = (uint)CONCAT11((char)param_2,uVar1) << 0x10;
        local_58 = 0x30;
        local_10 = 7000;
        *local_1c = 0x8000000;
        local_1c[1] = 0;
        local_1c[2] = local_d8;
        puVar6 = &local_88;
        puVar7 = local_1c + 3;
        for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        local_18 = 0x30;
        FUN_0040c8e0((undefined4 *)param_1,local_64);
      }
    }
  }
  return;
}


