/* Module: sfcd.cdd
   Function: FUN_00403270
   Address: 00403270
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00403270(HSFCD__ *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  _scsicommand local_64 [4];
  undefined4 local_60;
  byte local_56;
  
  iVar1 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0xe6);
  local_60 = 10;
  local_56 = (-((*(uint *)(param_2 + 8) & 4) != 0) & 0xfdU) + 4;
  if ((*(uint *)(param_2 + 8) & 1) != 0) {
    local_56 = local_56 | 1;
  }
  uVar2 = FUN_00402d20((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x25f,(uchar *)"cdd2000.cpp");
  return uVar2;
}


