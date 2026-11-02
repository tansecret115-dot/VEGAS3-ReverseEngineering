/* Module: sfcd.cdd
   Function: FUN_0041ca40
   Address: 0041ca40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041ca40(HSFCD__ *param_1,undefined4 *param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_5b;
  undefined1 local_57;
  undefined1 local_55;
  undefined1 local_54;
  undefined4 *local_1c;
  
  iVar2 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x52);
  local_60 = 10;
  local_5b = 1;
  local_57 = param_3;
  local_55 = 0x10;
  local_54 = 0;
  iVar1 = FUN_004194d0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar2 + 100),0x2e6,(uchar *)"mmc.cpp");
  if (iVar1 == 0) {
    puVar3 = param_2;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *local_1c;
      local_1c = local_1c + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_0041f970((undefined1 *)param_2,1);
    FUN_0041f9a0((undefined1 *)(param_2 + 2),5);
    return 0;
  }
  return iVar1;
}


