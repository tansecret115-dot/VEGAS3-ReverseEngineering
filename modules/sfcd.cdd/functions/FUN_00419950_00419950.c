/* Module: sfcd.cdd
   Function: FUN_00419950
   Address: 00419950
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00419950(HSFCD__ *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_68;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_5b;
  undefined1 local_54;
  undefined4 *local_1c;
  int local_18;
  undefined4 local_10;
  
  iVar1 = *(int *)(param_1 + 0x160);
  FUN_004194f0((undefined4 *)param_1);
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x55);
  local_60 = 10;
  local_10 = 7000;
  local_18 = 8;
  local_68 = 0;
  if (param_2 != (undefined4 *)0x0) {
    local_68 = 0x80000;
    FUN_0041f970((undefined1 *)((int)&local_68 + 2),1);
  }
  *local_1c = 0;
  local_1c[1] = local_68;
  puVar4 = local_1c + 2;
  if (param_2 != (undefined4 *)0x0) {
    local_18 = 0x10;
    *puVar4 = *param_2;
    local_1c[3] = param_2[1];
    puVar4 = local_1c + 4;
  }
  if (param_3 != (undefined4 *)0x0) {
    for (uVar3 = param_4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = *param_3;
      param_3 = param_3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_18 = local_18 + param_4;
    for (uVar3 = param_4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)param_3;
      param_3 = (undefined4 *)((int)param_3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    local_5b = 0x10;
  }
  local_54 = (undefined1)local_18;
  iVar2 = FUN_004194d0((undefined4 *)param_1,local_64);
  if (iVar2 < 0) {
    FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x237,(uchar *)"comread.cpp");
  }
  return iVar2;
}


