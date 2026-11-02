/* Module: sfcd.cdd
   Function: FUN_0040f460
   Address: 0040f460
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040f460(HSFCD__ *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined4 local_70;
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_58;
  undefined4 *local_1c;
  undefined4 local_18;
  
  puVar4 = &local_84;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  lVar1 = FUN_0040ecb0(param_1,0x24,&local_70,0xc);
  if (lVar1 != 0) {
    return;
  }
  local_84._1_1_ = 0;
  local_84._2_1_ = 0;
  local_84._3_1_ = 8;
  local_80 = 0;
  local_7f = 0;
  local_7e = 0;
  local_7d = 0;
  local_7b = 0;
  local_7a = (undefined1)((uint)param_4 >> 8);
  local_79 = (undefined1)param_4;
  local_78 = 0x23;
  local_77 = 2;
  iVar3 = cdr_GetTestMode(param_1);
  if (iVar3 != 0) {
    local_75 = 2;
  }
  local_74 = 0x20;
  local_73 = 2;
  uVar2 = cdr_GetSpeed(param_1,1);
  if (uVar2 != 0xffff) {
    if ((uVar2 & 1) != 0) {
      local_72 = 1;
    }
    if ((uVar2 & 2) == 0) goto LAB_0040f50f;
  }
  local_72 = 2;
LAB_0040f50f:
  local_70._2_1_ = 0;
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x15);
  local_5b = 0x10;
  local_58 = 0x20;
  puVar4 = &local_84;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *local_1c = *puVar4;
    puVar4 = puVar4 + 1;
    local_1c = local_1c + 1;
  }
  local_18 = 0x20;
  FUN_0040eb20((undefined4 *)param_1,local_64);
  return;
}


