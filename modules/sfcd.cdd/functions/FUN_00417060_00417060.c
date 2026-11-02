/* Module: sfcd.cdd
   Function: FUN_00417060
   Address: 00417060
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00417060(undefined4 param_1,HSFCD__ *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_55;
  undefined1 local_54;
  undefined4 *local_1c;
  
  iVar1 = *(int *)(param_2 + 0x160);
  if (param_3 == (int *)0x0) {
    return -0x7fffbffd;
  }
  if (*param_3 != 0) {
    SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_2,local_64,0x28);
    iVar2 = param_3[6];
    local_58 = (undefined1)((uint)iVar2 >> 8);
    local_57 = (undefined1)param_3[6];
    iVar3 = param_3[7];
    uVar6 = param_3[9] * iVar3;
    local_5a = (undefined1)((uint)iVar2 >> 0x18);
    local_59 = (undefined1)((uint)iVar2 >> 0x10);
    local_55 = (undefined1)((uint)iVar3 >> 8);
    local_54 = (undefined1)iVar3;
    local_60 = 10;
    puVar7 = (undefined4 *)*param_3;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    lVar4 = FUN_00415eb0((undefined4 *)param_2,local_64);
    FUN_00419270(param_2,(tCDR_ERRORDATA *)(iVar1 + 100),0x628,(uchar *)"r1420.cpp");
    if (lVar4 == 0) {
      puVar7 = (undefined4 *)*param_3;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *local_1c;
        local_1c = local_1c + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)local_1c;
        local_1c = (undefined4 *)((int)local_1c + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
    }
    return lVar4;
  }
  return -0x7fffbffd;
}


