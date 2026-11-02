/* Module: sfcd.cdd
   Function: FUN_0041e040
   Address: 0041e040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041e040(HSFCD__ *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  _scsicommand local_64 [12];
  undefined1 local_58;
  
  iVar1 = *(int *)(param_1 + 0x160);
  FUN_004194f0((undefined4 *)param_1);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x12);
  local_58 = 0xff;
  iVar2 = FUN_004194d0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x19e,(uchar *)"testdrv.cpp");
  if (iVar2 == 0) {
    pbVar3 = SfScsi_GetIOBuffer(*(HSFSCSIPORT__ **)param_1);
    if (((*pbVar3 & 0x1f) == 5) || ((*pbVar3 & 0x1f) == 4)) {
      return 0;
    }
  }
  return 0x8004e0c4;
}


