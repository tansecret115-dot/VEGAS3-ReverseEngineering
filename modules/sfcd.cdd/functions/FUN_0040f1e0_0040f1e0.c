/* Module: sfcd.cdd
   Function: FUN_0040f1e0
   Address: 0040f1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_0040f1e0(HSFCD__ *param_1,undefined1 param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_5a;
  byte local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_53;
  
  iVar1 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0xe2);
  local_60 = 10;
  if (param_3 < 0x91d) {
    if (param_3 == 0x91c) {
      local_5a = 8;
    }
    else if (param_3 == 0x800) {
      local_5a = 2;
    }
    else if (param_3 == 0x808) {
      local_5a = 4;
    }
  }
  else if (param_3 == 0x920) {
    local_5a = 1;
  }
  else if (param_3 == 0x930) {
    local_5a = 0;
  }
  uVar2 = *(uint *)(param_4 + 8);
  if ((uVar2 & 1) != 0) {
    local_59 = local_59 | 0x10;
  }
  if ((uVar2 & 4) != 0) {
    local_59 = local_59 | 0x40;
  }
  if ((uVar2 & 2) != 0) {
    local_59 = local_59 | 0x20;
  }
  if (*(int *)(param_4 + 0x38) != 0) {
    local_59 = local_59 | 1;
  }
  local_58 = param_2;
  local_57 = 1;
  local_53 = 0x40;
  lVar3 = FUN_0040eb20((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x319,(uchar *)"cw7501.cpp");
  return lVar3;
}


