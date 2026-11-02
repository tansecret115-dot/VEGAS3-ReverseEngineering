/* Module: sfcd.cdd
   Function: FUN_00416040
   Address: 00416040
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00416040(HSFCD__ *param_1,undefined1 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  _scsicommand local_64 [10];
  undefined1 local_5a;
  undefined1 local_58;
  int local_1c;
  
  iVar1 = *(int *)(param_1 + 0x160);
  FUN_00415f50((undefined4 *)param_1);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x1a);
  local_58 = 0xff;
  local_5a = param_2;
  lVar2 = FUN_00415eb0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x14d,(uchar *)"r1420.cpp");
  if (lVar2 == 0) {
    puVar4 = (undefined4 *)(local_1c + 0xc);
    for (uVar3 = param_4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_3 = *puVar4;
      puVar4 = puVar4 + 1;
      param_3 = param_3 + 1;
    }
    for (uVar3 = param_4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)param_3 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      param_3 = (undefined4 *)((int)param_3 + 1);
    }
  }
  return lVar2;
}


