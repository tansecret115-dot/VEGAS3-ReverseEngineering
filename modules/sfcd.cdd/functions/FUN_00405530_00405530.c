/* Module: sfcd.cdd
   Function: FUN_00405530
   Address: 00405530
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00405530(HSFCD__ *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  _scsicommand local_64 [4];
  undefined4 local_60;
  byte local_56;
  
  iVar1 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0xe6);
  local_60 = 10;
  uVar2 = *(uint *)(param_2 + 8);
  local_56 = (-((uVar2 & 4) != 0) & 0xfdU) + 4;
  if ((uVar2 & 1) != 0) {
    local_56 = local_56 | 1;
  }
  if ((uVar2 & 2) != 0) {
    local_56 = local_56 | 0x10;
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    local_56 = local_56 | 0x20;
  }
  uVar2 = FUN_00404d50((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x30e,(uchar *)"cdd2600.cpp");
  return uVar2;
}


