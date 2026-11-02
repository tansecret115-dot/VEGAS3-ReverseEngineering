/* Module: sfcd.cdd
   Function: FUN_0040d050
   Address: 0040d050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040d050(HSFCD__ *param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined1 local_9c;
  undefined1 local_9b;
  byte local_99;
  undefined1 local_97;
  undefined4 local_94;
  undefined1 local_90;
  undefined1 local_81;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_70;
  undefined1 local_6f;
  byte local_6e;
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_58;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_10;
  
  puVar4 = &local_a8;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_a8._1_1_ = 0;
  local_a8._2_1_ = 0;
  local_a8._3_1_ = 8;
  local_a4 = 0;
  local_a3 = 0;
  local_a2 = 0;
  local_a1 = 0;
  local_9f = 0;
  local_9e = (undefined1)((uint)param_2 >> 8);
  local_9d = (undefined1)param_2;
  local_74 = 0x31;
  local_73 = 2;
  uVar1 = cdr_GetSpeed(param_1,1);
  if (uVar1 != 0xffff) {
    if ((uVar1 & 1) != 0) {
      local_72 = 0;
    }
    if ((uVar1 & 2) == 0) goto LAB_0040d0ce;
  }
  local_72 = 1;
LAB_0040d0ce:
  local_6e = local_6e | 4;
  local_70 = 8;
  local_6f = 10;
  local_9c = 0x20;
  local_9b = 6;
  local_97 = 3;
  iVar3 = cdr_GetTestMode(param_1);
  local_99 = -(iVar3 != 0) & 2;
  lVar2 = FUN_0040ca70(param_1,0x22,&local_94,0x20);
  if (lVar2 == 0) {
    local_94._2_1_ = 0;
    local_94._3_1_ = 0;
    local_90 = 1;
    local_81 = 0;
    SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x15);
    local_5b = 0x10;
    local_58 = 0x44;
    local_10 = 7000;
    puVar4 = &local_a8;
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
      *local_1c = *puVar4;
      puVar4 = puVar4 + 1;
      local_1c = local_1c + 1;
    }
    local_18 = 0x44;
    FUN_0040c8e0((undefined4 *)param_1,local_64);
  }
  return;
}


