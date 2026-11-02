/* Module: sfcd.cdd
   Function: FUN_0040e5a0
   Address: 0040e5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040e5a0(HSFCD__ *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  _scsicommand local_e0 [12];
  undefined1 local_d4;
  drivedbentry local_7c [68];
  undefined4 local_38;
  
  puVar1 = *(undefined4 **)(param_1 + 0x160);
  puVar5 = &DAT_0043d8d0;
  puVar6 = puVar1;
  for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_0040c980((undefined4 *)param_1);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_e0,0x12);
  local_d4 = 0xff;
  lVar2 = FUN_0040c8e0((undefined4 *)param_1,local_e0);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(puVar1 + 0x19),0x8ee,(uchar *)"cdu92x.cpp");
  puVar1[0xe] = 0xc230003;
  if (lVar2 == 0) {
    pbVar3 = SfScsi_GetIOBuffer(*(HSFSCSIPORT__ **)param_1);
    if (((*pbVar3 & 0x1f) == 5) || ((*pbVar3 & 0x1f) == 4)) {
      lVar2 = cdr_GetDriveEntry((tPARAMETERS_DEVDES *)(param_1 + 4),local_7c);
      if (-1 < lVar2) {
        puVar1[0xe] = local_38;
      }
      return 0;
    }
  }
  return 0x8004e0c4;
}


