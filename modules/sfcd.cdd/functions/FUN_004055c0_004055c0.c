/* Module: sfcd.cdd
   Function: FUN_004055c0
   Address: 004055c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004055c0(HSFCD__ *param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_74;
  undefined1 local_73;
  byte local_71;
  char local_6f [5];
  byte abStack_6a [6];
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_5b;
  undefined1 local_58;
  undefined1 local_54;
  ushort *local_1c;
  undefined4 local_18;
  
  iVar5 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0xee);
  local_60 = 10;
  local_54 = 4;
  local_18 = 4;
  uVar4 = FUN_00404d50((undefined4 *)param_1,local_64);
  FUN_0041f970((undefined1 *)local_1c,2);
  if (uVar4 == 0) {
    *(uint *)(iVar5 + 0x1d0) = (uint)*local_1c;
    uVar2 = local_1c[1];
    puVar9 = &local_88;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    local_88._1_1_ = 0;
    local_88._2_1_ = 0;
    local_84 = 0;
    local_83 = 0;
    local_82 = 0;
    local_81 = 0;
    local_7f = 0;
    *(uint *)(iVar5 + 0x1d4) = (uint)uVar2;
    local_88._3_1_ = 8;
    local_7e = 9;
    local_7d = 0x30;
    local_74 = 0x21;
    local_73 = 0xe;
    bVar3 = local_71 | 4;
    if (param_2 != 0) {
      uVar4 = *(uint *)(param_2 + 8);
      if ((uVar4 & 4) == 0) {
        bVar3 = local_71 | 4;
        if ((uVar4 & 1) != 0) {
          bVar3 = local_71 & 0xfd | 5;
        }
        local_71 = bVar3;
        if ((uVar4 & 2) != 0) {
          local_71 = bVar3 & 0xbf | 0x20;
        }
        if (*(int *)(param_2 + 0x38) != 0) {
          local_71 = local_71 & 0xdf | 0x40;
        }
      }
      else {
        local_71 = local_71 & 0xfd | 5;
      }
      bVar3 = local_71;
      if (*(int *)(param_2 + 0x1c) != 0) {
        pcVar7 = local_6f;
        pcVar8 = (char *)(param_2 + 0x20);
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar7 = cVar1 + -0x30;
          pcVar7 = pcVar7 + 1;
        } while ((int)(pcVar8 + (-0x20 - param_2)) < 5);
        iVar5 = 0;
        pcVar8 = (char *)(param_2 + 0x25);
        do {
          pcVar7 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 2;
          abStack_6a[iVar5] = *pcVar7 - 0x30U | cVar1 << 4;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 3);
        abStack_6a[3] = *(char *)(param_2 + 0x2b) << 4;
      }
    }
    local_71 = bVar3;
    local_7c = 0x23;
    local_7b = 6;
    uVar4 = cdr_GetSpeed(param_1,1);
    if (uVar4 == 0xffff) {
      local_7a = 0;
    }
    else {
      if ((uVar4 & 1) != 0) {
        local_7a = 1;
      }
      if ((uVar4 & 2) != 0) {
        local_7a = 2;
      }
    }
    iVar5 = cdr_GetTestMode(param_1);
    local_79 = iVar5 != 0;
    SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x15);
    local_5b = 0x10;
    local_58 = 0x24;
    puVar9 = &local_88;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)local_1c = *puVar9;
      puVar9 = puVar9 + 1;
      local_1c = local_1c + 2;
    }
    local_18 = 0x24;
    uVar4 = FUN_00404d50((undefined4 *)param_1,local_64);
    return uVar4;
  }
  return uVar4;
}


