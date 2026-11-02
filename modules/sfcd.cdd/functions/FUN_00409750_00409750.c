/* Module: sfcd.cdd
   Function: FUN_00409750
   Address: 00409750
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00409750(HSFCD__ *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_55;
  undefined1 local_54;
  char local_53;
  byte local_4e;
  undefined4 *local_1c;
  uint local_18;
  undefined4 local_10;
  ulong local_c;
  
  iVar1 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x2a);
  local_10 = 180000;
  local_60 = 10;
  local_5a = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1d0) >> 0x18);
  local_59 = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1d0) >> 0x10);
  local_58 = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1d0) >> 8);
  local_57 = *(undefined1 *)(iVar1 + 0x1d0);
  uVar5 = (undefined1)((uint)param_3 >> 8);
  uVar2 = param_3 * param_4;
  local_53 = (-(param_5 != 0) & 0x80U) + 0x80;
  if (param_2 != (undefined4 *)0x0) {
    for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_1c = *param_2;
      param_2 = param_2 + 1;
      local_1c = local_1c + 1;
    }
    for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)local_1c = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      local_1c = (undefined4 *)((int)local_1c + 1);
    }
  }
  local_55 = uVar5;
  local_54 = (char)param_3;
  local_18 = uVar2;
  iVar3 = FUN_004082c0((undefined4 *)param_1,local_64);
  while( true ) {
    if ((iVar3 == 0) || (iVar4 = SfScsi_IsCheckCondition(local_c), iVar4 == 0)) {
      *(int *)(iVar1 + 0x1d0) = *(int *)(iVar1 + 0x1d0) + param_3;
      FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x799,(uchar *)"cdr50s.cpp");
      return iVar3;
    }
    if (((local_4e & 0xf) != 1) && ((local_4e & 0xf) != 6)) break;
    SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x2a);
    local_10 = 180000;
    local_60 = 10;
    local_5a = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1d0) >> 0x18);
    local_59 = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1d0) >> 0x10);
    local_58 = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1d0) >> 8);
    local_57 = *(undefined1 *)(iVar1 + 0x1d0);
    local_53 = (-(param_5 != 0) & 0x80U) + 0x80;
    local_55 = uVar5;
    local_54 = (char)param_3;
    local_18 = uVar2;
    iVar3 = FUN_004082c0((undefined4 *)param_1,local_64);
  }
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x779,(uchar *)"cdr50s.cpp");
  return -0x7ffb1f38;
}


