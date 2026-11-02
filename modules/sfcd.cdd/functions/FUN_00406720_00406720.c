/* Module: sfcd.cdd
   Function: FUN_00406720
   Address: 00406720
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00406720(HSFCD__ *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uchar *puVar3;
  _scsicommand local_64 [12];
  undefined1 local_58;
  undefined1 local_57;
  
  iVar1 = *(int *)(param_1 + 0x160);
  *param_2 = 0;
  FUN_00404db0((undefined4 *)param_1);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x12);
  local_58 = 0xff;
  local_57 = 0x80;
  uVar2 = FUN_00404d50((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x886,(uchar *)"cdd2600.cpp");
  if (uVar2 == 0) {
    puVar3 = SfScsi_GetIOBuffer(*(HSFSCSIPORT__ **)param_1);
    FUN_0041f970(puVar3 + 0x36,1);
    *param_2 = (uint)*(ushort *)(puVar3 + 0x36) << 1;
  }
  return uVar2;
}


