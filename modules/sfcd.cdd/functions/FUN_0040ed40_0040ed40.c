/* Module: sfcd.cdd
   Function: FUN_0040ed40
   Address: 0040ed40
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_0040ed40(HSFCD__ *param_1,undefined4 *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined4 *local_1c;
  
  iVar3 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0xe9);
  local_60 = 10;
  local_55 = 0x10;
  local_54 = 0;
  if (param_3 == -1) {
    local_56 = 0;
    local_53 = 0x40;
  }
  else {
    local_56 = (undefined1)param_3;
    local_53 = 0;
  }
  puVar4 = local_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = param_2;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  lVar1 = FUN_0040eb20((undefined4 *)param_1,local_64);
  if (lVar1 == 0) {
    if (param_3 == -1) {
      *(undefined2 *)param_2 = *(undefined2 *)local_1c;
      param_2[3] = local_1c[1];
      param_2[4] = local_1c[2];
      *(char *)((int)param_2 + 3) = *(char *)((int)local_1c + 3) + -1;
      FUN_0041f970((undefined1 *)param_2,1);
      FUN_0041f9a0((undefined1 *)(param_2 + 3),2);
      return 0;
    }
    puVar4 = param_2;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *local_1c;
      local_1c = local_1c + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_0041f970((undefined1 *)param_2,1);
    FUN_0041f9a0((undefined1 *)(param_2 + 2),4);
    return 0;
  }
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar3 + 100),0x19f,(uchar *)"cw7501.cpp");
  return lVar1;
}


