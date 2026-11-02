/* Module: sfcd.cdd
   Function: FUN_0040ae30
   Address: 0040ae30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040ae30(HSFCD__ *param_1,undefined1 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_57;
  byte local_56;
  undefined4 local_10;
  
  iVar1 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0xe6);
  local_60 = 10;
  local_57 = param_2;
  local_56 = (-((param_3 & 4) != 0) & 0xfdU) + 4;
  if ((param_3 & 1) != 0) {
    local_56 = local_56 | 1;
  }
  if ((param_3 & 2) != 0) {
    local_56 = local_56 | 8;
  }
  local_10 = 30000;
  uVar2 = FUN_0040aaa0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x227,(uchar *)"cdr100.cpp");
  return uVar2;
}


