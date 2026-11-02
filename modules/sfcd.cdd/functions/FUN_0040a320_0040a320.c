/* Module: sfcd.cdd
   Function: FUN_0040a320
   Address: 0040a320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040a320(HSFCD__ *param_1)

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
  int local_38;
  int local_34;
  
  puVar1 = *(undefined4 **)(param_1 + 0x160);
  FUN_00408370((undefined4 *)param_1);
  puVar5 = &DAT_0043cdd0;
  puVar6 = puVar1;
  for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_e0,0x12);
  local_d4 = 0xff;
  lVar2 = FUN_004082c0((undefined4 *)param_1,local_e0);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(puVar1 + 0x19),0xae3,(uchar *)"cdr50s.cpp");
  puVar1[0xe] = 0xc330007;
  puVar1[0xf] = 0x17b0007;
  if (lVar2 == 0) {
    pbVar3 = SfScsi_GetIOBuffer(*(HSFSCSIPORT__ **)param_1);
    if (((*pbVar3 & 0x1f) == 5) || ((*pbVar3 & 0x1f) == 4)) {
      lVar2 = cdr_GetDriveEntry((tPARAMETERS_DEVDES *)(param_1 + 4),local_7c);
      if (-1 < lVar2) {
        if (local_38 != 0) {
          puVar1[0xe] = local_38;
        }
        if (local_34 != 0) {
          puVar1[0xf] = local_34;
        }
      }
      return 0;
    }
  }
  return 0x8004e0c4;
}


