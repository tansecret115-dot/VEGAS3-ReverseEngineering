/* Module: sfcd.cdd
   Function: FUN_00419870
   Address: 00419870
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00419870(HSFCD__ *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  HSFCD__ *pHVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_58;
  undefined4 *local_1c;
  int local_18;
  undefined4 local_10;
  
  pHVar2 = param_1;
  iVar1 = *(int *)(param_1 + 0x160);
  FUN_004194f0((undefined4 *)param_1);
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x15);
  local_10 = 7000;
  local_18 = 4;
  param_1 = (HSFCD__ *)0x0;
  if (param_2 != (undefined4 *)0x0) {
    param_1 = (HSFCD__ *)0x8000000;
  }
  *local_1c = param_1;
  puVar5 = local_1c + 1;
  if (param_2 != (undefined4 *)0x0) {
    *puVar5 = *param_2;
    local_1c[2] = param_2[1];
    puVar5 = local_1c + 3;
    local_18 = 0xc;
  }
  if (param_3 != (undefined4 *)0x0) {
    for (uVar4 = param_4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = *param_3;
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 1;
    }
    local_18 = local_18 + param_4;
    for (uVar4 = param_4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_3;
      param_3 = (undefined4 *)((int)param_3 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    local_5b = 0x10;
  }
  local_58 = (undefined1)local_18;
  iVar3 = FUN_004194d0((undefined4 *)pHVar2,local_64);
  if (iVar3 < 0) {
    FUN_00419270(pHVar2,(tCDR_ERRORDATA *)(iVar1 + 100),500,(uchar *)"comread.cpp");
  }
  return iVar3;
}


