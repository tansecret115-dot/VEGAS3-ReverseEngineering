/* Module: sfcd.cdd
   Function: FUN_00416520
   Address: 00416520
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00416520(HSFCD__ *param_1,_scsicommand *param_2,int param_3,undefined4 *param_4,int param_5
                 )

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar1 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,param_2,0xe6);
  *(undefined4 *)(param_2 + 4) = 10;
  if ((*(byte *)(param_3 + 8) & 4) == 0) {
    param_2[0xe] = (_scsicommand)0x4;
    if ((*(byte *)(param_3 + 8) & 1) != 0) {
      param_2[0xe] = (_scsicommand)0x5;
    }
    if ((*(byte *)(param_3 + 8) & 2) != 0) {
      param_2[0xe] = (_scsicommand)((byte)param_2[0xe] | 0x10);
    }
    if (*(int *)(param_3 + 0x38) != 0) {
      param_2[0xe] = (_scsicommand)((byte)param_2[0xe] | 0x20);
    }
  }
  else {
    param_2[0xe] = (_scsicommand)0x1;
  }
  if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
    uVar3 = param_5 * *(int *)(param_3 + 0x48);
    puVar5 = *(undefined4 **)(param_2 + 0x48);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = *param_4;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_4;
      param_4 = (undefined4 *)((int)param_4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    param_2[0x10] = SUB41(param_5,0);
    uVar4 = param_5 * *(int *)(param_3 + 0x48);
    *(uint *)(param_2 + 0x4c) = uVar4;
    FUN_0041f970(*(undefined1 **)(param_2 + 0x48),uVar4 >> 1);
  }
  lVar2 = FUN_00415eb0((undefined4 *)param_1,param_2);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x2f0,(uchar *)"r1420.cpp");
  return lVar2;
}


