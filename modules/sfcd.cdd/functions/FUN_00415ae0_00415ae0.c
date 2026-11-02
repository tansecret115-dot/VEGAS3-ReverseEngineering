/* Module: sfcd.cdd
   Function: FUN_00415ae0
   Address: 00415ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00415ae0(HSFCD__ *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uchar *puVar3;
  _scsicommand local_64 [12];
  undefined1 local_58;
  undefined1 local_57;
  
  iVar1 = *(int *)(param_1 + 0x160);
  *param_2 = 0;
  FUN_00414500((undefined4 *)param_1);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x12);
  local_58 = 0xff;
  local_57 = 0x80;
  uVar2 = FUN_004144a0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x83e,(uchar *)"pcd600.cpp");
  if (uVar2 == 0) {
    puVar3 = SfScsi_GetIOBuffer(*(HSFSCSIPORT__ **)param_1);
    FUN_0041f970(puVar3 + 0x36,1);
    *param_2 = (uint)*(ushort *)(puVar3 + 0x36) << 1;
  }
  return uVar2;
}


