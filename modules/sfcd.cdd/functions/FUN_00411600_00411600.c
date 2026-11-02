/* Module: sfcd.cdd
   Function: FUN_00411600
   Address: 00411600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00411600(HSFCD__ *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  drivedbentry local_e0 [64];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_84;
  _scsicommand local_64 [12];
  undefined1 local_58;
  
  puVar1 = *(undefined4 **)(param_1 + 0x160);
  FUN_00410d90((undefined4 *)param_1);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x12);
  local_58 = 0xff;
  lVar2 = FUN_00410cf0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(puVar1 + 0x19),0x43b,(uchar *)"gencd.cpp");
  puVar3 = (undefined4 *)FUN_00410c20();
  puVar6 = puVar1;
  for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar1[0xe] = 0xc330007;
  puVar1[0xd] = 0x155;
  if (lVar2 == 0) {
    pbVar4 = SfScsi_GetIOBuffer(*(HSFSCSIPORT__ **)param_1);
    if (((*pbVar4 & 0x1f) == 5) || ((*pbVar4 & 0x1f) == 4)) {
      lVar2 = cdr_GetDriveEntry((tPARAMETERS_DEVDES *)(param_1 + 4),local_e0);
      if (-1 < lVar2) {
        puVar1[0xd] = local_a0;
        puVar1[0xe] = local_9c;
        puVar1[0x10] = local_84;
      }
      return 0;
    }
  }
  return 0x8004e0c4;
}


