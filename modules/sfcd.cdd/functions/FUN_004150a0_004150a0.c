/* Module: sfcd.cdd
   Function: FUN_004150a0
   Address: 004150a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004150a0(HSFCD__ *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
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
  
  iVar1 = *(int *)(param_1 + 0x160);
  puVar4 = &local_80;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
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
  uVar2 = cdr_GetSpeed(param_1,0);
  if (uVar2 != 0xffff) {
    if ((uVar2 & 2) != 0) {
      local_72 = 2;
    }
    if ((uVar2 & 8) == 0) goto LAB_00415119;
  }
  local_72 = 6;
LAB_00415119:
  local_71 = 1;
  local_6c = 0x31;
  local_6b = 6;
  local_65 = 0xd3;
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x15);
  local_5b = 0x10;
  local_58 = 0x1c;
  puVar4 = &local_80;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *local_1c = *puVar4;
    puVar4 = puVar4 + 1;
    local_1c = local_1c + 1;
  }
  local_18 = 0x1c;
  uVar2 = FUN_004144a0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x480,(uchar *)"pcd600.cpp");
  return uVar2;
}


