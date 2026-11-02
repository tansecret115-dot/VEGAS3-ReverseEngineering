/* Module: sfcd.cdd
   Function: FUN_00413bd0
   Address: 00413bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00413bd0(HSFCD__ *param_1)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  _scsicommand local_64 [12];
  undefined1 local_58;
  
  iVar1 = *(int *)(param_1 + 0x160);
  FUN_00411b10((undefined4 *)param_1);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x12);
  local_58 = 0xff;
  lVar2 = FUN_00411a60((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0xb41,(uchar *)"jvc20xx.cpp");
  if (lVar2 == 0) {
    pbVar3 = SfScsi_GetIOBuffer(*(HSFSCSIPORT__ **)param_1);
    if (((*pbVar3 & 0x1f) == 5) || ((*pbVar3 & 0x1f) == 4)) {
      return 0;
    }
  }
  return 0x8004e0c4;
}


