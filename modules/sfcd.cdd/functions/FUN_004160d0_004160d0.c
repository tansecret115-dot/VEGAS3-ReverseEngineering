/* Module: sfcd.cdd
   Function: FUN_004160d0
   Address: 004160d0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_004160d0(HSFCD__ *param_1,undefined4 *param_2,undefined1 param_3)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_57;
  undefined1 local_54;
  undefined4 *local_1c;
  
  iVar2 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0xe5);
  local_60 = 10;
  local_57 = param_3;
  local_54 = 0xff;
  lVar1 = FUN_00415eb0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar2 + 100),0x16b,(uchar *)"r1420.cpp");
  if (lVar1 == 0) {
    puVar3 = param_2;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *local_1c;
      local_1c = local_1c + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_0041f9a0((undefined1 *)((int)param_2 + 2),2);
    FUN_0041f9a0((undefined1 *)(param_2 + 3),2);
    return 0;
  }
  return lVar1;
}


