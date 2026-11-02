/* Module: sfcd.cdd
   Function: FUN_0041acf0
   Address: 0041acf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041acf0(HSFCD__ *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  HSFCD__ *pHVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_55;
  undefined1 local_54;
  uint *local_1c;
  
  pHVar2 = param_1;
  iVar1 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x43);
  uVar4 = param_3;
  if ((param_3 & 0x20) != 0) {
    local_5b = 2;
  }
  local_55 = 0x10;
  local_54 = 0;
  iVar5 = FUN_004194d0((undefined4 *)pHVar2,local_64);
  FUN_00419270(pHVar2,(tCDR_ERRORDATA *)(iVar1 + 100),0x766,(uchar *)"comread.cpp");
  if (iVar5 == 0) {
    if (*(int *)(pHVar2 + 0x2d2) != 0) {
      uVar6 = CONCAT11((char)*local_1c,*(undefined1 *)((int)local_1c + 1)) + 2;
      if (0xfff < uVar6) {
        uVar6 = 0x1000;
      }
      TestDrive_AddResult(pHVar2,3,local_1c,uVar6);
    }
    puVar3 = param_2;
    FUN_0041a790(param_2,local_1c,(int *)&param_1,(byte)uVar4);
    puVar3[3] = (uint)param_1;
    if ((uVar4 & 0x2000) == 0) {
      FUN_0041ac10(pHVar2,(int *)puVar3,uVar4);
    }
  }
  if (((byte)*(uint *)(pHVar2 + 0x2ce) & 1) == 1) {
    *(uint *)(pHVar2 + 0x2ce) = *(uint *)(pHVar2 + 0x2ce) & 0xfffffff9;
  }
  return iVar5;
}


