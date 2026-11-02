/* Module: sfcd.cdd
   Function: FUN_00412020
   Address: 00412020
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00412020(HSFCD__ *param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_55;
  undefined1 local_54;
  undefined4 *local_1c;
  
  iVar2 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x51);
  local_60 = 10;
  local_55 = 0x10;
  local_54 = 0;
  lVar1 = FUN_00411a60((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar2 + 100),0x2f5,(uchar *)"jvc20xx.cpp");
  if (lVar1 == 0) {
    puVar3 = param_2;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *local_1c;
      local_1c = local_1c + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = *(undefined2 *)local_1c;
    FUN_0041f970((undefined1 *)param_2,1);
    FUN_0041f9a0((undefined1 *)(param_2 + 3),3);
    return 0;
  }
  return lVar1;
}


