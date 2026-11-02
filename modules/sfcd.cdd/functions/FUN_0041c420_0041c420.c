/* Module: sfcd.cdd
   Function: FUN_0041c420
   Address: 0041c420
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041c420(HSFCD__ *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  HSFCD__ *pHVar3;
  int iVar4;
  undefined2 uVar5;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  
  pHVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0x160);
  uVar5 = 0xffff;
  param_1._0_2_ = 0xffff;
  uVar2 = param_1._0_2_;
  param_1._0_2_ = 0xffff;
  if (param_3 == 0) {
    if (*(int *)(iVar1 + 0x274) != 0) {
      param_1._0_2_ = *(undefined2 *)(iVar1 + 0x28c);
    }
    if (param_2 == 0xffff) {
      uVar5 = 0xffff;
    }
    else {
      if ((param_2 & 1) != 0) {
        uVar5 = 0xb0;
      }
      if ((param_2 & 2) != 0) {
        uVar5 = 0x161;
      }
      if ((param_2 & 4) != 0) {
        uVar5 = 0x2c2;
      }
      if ((param_2 & 8) != 0) {
        uVar5 = 0x422;
      }
      if ((param_2 & 0x10) != 0) {
        uVar5 = 0x583;
      }
      if ((param_2 & 0x40) != 0) {
        uVar5 = 0x844;
      }
    }
  }
  else {
    if (*(int *)(iVar1 + 0x274) != 0) {
      uVar5 = *(undefined2 *)(iVar1 + 0x286);
    }
    if (param_2 == 0xffff) {
      param_1._0_2_ = 0xffff;
    }
    else {
      param_1._0_2_ = uVar2;
      if ((param_2 & 1) != 0) {
        param_1._0_2_ = 0xb0;
      }
      if ((param_2 & 2) != 0) {
        param_1._0_2_ = 0x161;
      }
      if ((param_2 & 4) != 0) {
        param_1._0_2_ = 0x2c2;
      }
      if ((param_2 & 8) != 0) {
        param_1._0_2_ = 0x422;
      }
      if ((param_2 & 0x10) != 0) {
        param_1._0_2_ = 0x583;
      }
      if ((param_2 & 0x40) != 0) {
        param_1._0_2_ = 0x844;
      }
    }
  }
  FUN_004194f0((undefined4 *)pHVar3);
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)pHVar3,local_64,0xbb);
  local_60 = 0xc;
  local_59 = (undefined1)uVar5;
  local_5a = (undefined1)((ushort)uVar5 >> 8);
  local_57 = (undefined1)param_1._0_2_;
  local_58 = (undefined1)((ushort)param_1._0_2_ >> 8);
  iVar4 = FUN_004194d0((undefined4 *)pHVar3,local_64);
  FUN_00419270(pHVar3,(tCDR_ERRORDATA *)(iVar1 + 100),0x13a,(uchar *)"mmc.cpp");
  if (iVar4 < 0) {
    return 0;
  }
  return iVar4;
}


