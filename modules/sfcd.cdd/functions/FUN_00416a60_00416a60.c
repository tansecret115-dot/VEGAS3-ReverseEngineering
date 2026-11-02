/* Module: sfcd.cdd
   Function: FUN_00416a60
   Address: 00416a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416a60(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  byte local_71;
  char local_6f [5];
  byte abStack_6a [6];
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_58;
  undefined4 *local_1c;
  undefined4 local_18;
  
  puVar7 = &local_80;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_75 = (undefined1)param_2;
  uVar2 = *(uint *)(param_3 + 8);
  local_80._1_1_ = 0;
  local_80._2_1_ = 0;
  local_80._3_1_ = 8;
  local_7c = 0;
  local_7b = 0;
  local_7a = 0;
  local_79 = 0;
  local_77 = 0;
  local_76 = (undefined1)((uint)param_2 >> 8);
  local_74 = 0x21;
  local_73 = 0xe;
  if ((uVar2 & 4) == 0) {
    bVar3 = local_71 | 4;
    if ((uVar2 & 1) != 0) {
      bVar3 = local_71 & 0xfd | 5;
    }
    local_71 = bVar3;
    if ((uVar2 & 2) != 0) {
      local_71 = bVar3 & 0xbf | 0x20;
    }
    if (*(int *)(param_3 + 0x38) != 0) {
      local_71 = local_71 & 0xdf | 0x40;
    }
  }
  else {
    local_71 = local_71 & 0xfd | 1;
  }
  if (*(int *)(param_3 + 0x1c) != 0) {
    pcVar5 = local_6f;
    pcVar6 = (char *)(param_3 + 0x20);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar5 = cVar1 + -0x30;
      pcVar5 = pcVar5 + 1;
    } while ((int)(pcVar6 + (-0x20 - param_3)) < 5);
    iVar4 = 0;
    pcVar6 = (char *)(param_3 + 0x25);
    do {
      pcVar5 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 2;
      abStack_6a[iVar4] = *pcVar5 - 0x30U | cVar1 << 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    abStack_6a[3] = *(char *)(param_3 + 0x2b) << 4;
  }
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0x15);
  local_5b = 0x10;
  local_58 = 0x1c;
  puVar7 = &local_80;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *local_1c = *puVar7;
    puVar7 = puVar7 + 1;
    local_1c = local_1c + 1;
  }
  local_18 = 0x1c;
  FUN_00415eb0(param_1,local_64);
  return;
}


