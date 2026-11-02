/* Module: sfcd.cdd
   Function: FUN_0040b080
   Address: 0040b080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040b080(HSFCD__ *param_1,undefined1 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  byte local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_58;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_10;
  
  puVar3 = &local_7c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_7c._1_1_ = 0;
  local_7c._2_1_ = 0;
  local_7c._3_1_ = 8;
  local_78 = 0;
  local_77 = 0;
  local_76 = 0;
  local_75 = 0;
  local_73 = 0;
  local_72 = (undefined1)((uint)param_3 >> 8);
  local_71 = (undefined1)param_3;
  local_70 = 0x31;
  local_6f = 2;
  uVar1 = cdr_GetSpeed(param_1,1);
  if (uVar1 != 0xffff) {
    if ((uVar1 & 1) != 0) {
      local_6d = 0;
    }
    if ((uVar1 & 2) != 0) {
      local_6d = 0x10;
    }
    if ((uVar1 & 4) == 0) goto LAB_0040b105;
  }
  local_6d = 0x20;
LAB_0040b105:
  iVar2 = cdr_GetTestMode(param_1);
  if (iVar2 != 0) {
    local_6d = local_6d | 1;
  }
  local_6c = 0x32;
  local_6b = 6;
  local_6a = 0;
  local_69 = param_2;
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x15);
  local_5b = 0x10;
  local_58 = 0x18;
  local_10 = 7000;
  puVar3 = &local_7c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *local_1c = *puVar3;
    puVar3 = puVar3 + 1;
    local_1c = local_1c + 1;
  }
  local_18 = 0x18;
  FUN_0040aaa0((undefined4 *)param_1,local_64);
  return;
}


