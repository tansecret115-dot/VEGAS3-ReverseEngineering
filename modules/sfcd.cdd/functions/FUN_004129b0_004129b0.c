/* Module: sfcd.cdd
   Function: FUN_004129b0
   Address: 004129b0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_004129b0(HSFCD__ *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_55;
  undefined1 local_54;
  undefined4 *local_1c;
  
  iVar1 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0xc2);
  local_60 = 10;
  local_54 = (undefined1)param_3;
  local_55 = (undefined1)(param_3 >> 8);
  for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *local_1c = *param_2;
    param_2 = param_2 + 1;
    local_1c = local_1c + 1;
  }
  for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)local_1c = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    local_1c = (undefined4 *)((int)local_1c + 1);
  }
  lVar2 = FUN_00411a60((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x60c,(uchar *)"jvc20xx.cpp");
  return lVar2;
}


