/* Module: sfcd.cdd
   Function: FUN_00414b40
   Address: 00414b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00414b40(HSFCD__ *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
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
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_65;
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_58;
  undefined4 *local_1c;
  undefined4 local_18;
  
  iVar2 = *(int *)(param_1 + 0x160);
  *(undefined4 *)(iVar2 + 0x1c4) = 0x1a5e;
  *(undefined4 *)(iVar2 + 0x1c8) = 0x1a5e;
  puVar3 = &local_80;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_80._1_1_ = 0;
  local_80._2_1_ = 0;
  local_80._3_1_ = 8;
  local_7c = 0;
  local_7b = 0;
  local_7a = 0;
  local_79 = 0;
  local_77 = 0;
  local_76 = 9;
  local_75 = 0x30;
  local_74 = 0x23;
  local_73 = 6;
  uVar1 = cdr_GetSpeed(param_1,1);
  if (uVar1 != 0xffff) {
    if ((uVar1 & 2) != 0) {
      local_72 = 2;
    }
    if ((uVar1 & 8) == 0) goto LAB_00414bcd;
  }
  local_72 = 6;
LAB_00414bcd:
  iVar2 = cdr_GetTestMode(param_1);
  local_71 = iVar2 != 0;
  local_6c = 0x31;
  local_6b = 6;
  local_65 = 0xd3;
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x15);
  local_5b = 0x10;
  local_58 = 0x1c;
  puVar3 = &local_80;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *local_1c = *puVar3;
    puVar3 = puVar3 + 1;
    local_1c = local_1c + 1;
  }
  local_18 = 0x1c;
  FUN_004144a0((undefined4 *)param_1,local_64);
  return;
}


