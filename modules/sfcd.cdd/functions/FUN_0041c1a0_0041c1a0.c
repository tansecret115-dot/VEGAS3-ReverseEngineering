/* Module: sfcd.cdd
   Function: FUN_0041c1a0
   Address: 0041c1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041c1a0(HSFCD__ *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  _scsicommand local_e0 [12];
  undefined1 local_d4;
  drivedbentry local_7c [84];
  undefined4 local_28;
  int local_20;
  
  iVar1 = *(int *)(param_1 + 0x160);
  *param_2 = 0;
  FUN_004194f0((undefined4 *)param_1);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_e0,0x12);
  local_d4 = 0xff;
  iVar2 = FUN_004194d0((undefined4 *)param_1,local_e0);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x2d,(uchar *)"mmc.cpp");
  if (iVar2 == 0) {
    pbVar3 = SfScsi_GetIOBuffer(*(HSFSCSIPORT__ **)param_1);
    if (((*pbVar3 & 0x1f) == 5) || ((*pbVar3 & 0x1f) == 4)) {
      lVar4 = cdr_GetDriveEntry((tPARAMETERS_DEVDES *)(param_1 + 4),local_7c);
      if (-1 < lVar4) {
        *param_2 = local_28;
        if (local_20 != 0) {
          *(int *)(iVar1 + 0x40) = local_20;
        }
      }
      return 0;
    }
  }
  return 0x8004e0c4;
}


