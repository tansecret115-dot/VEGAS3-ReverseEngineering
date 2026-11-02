/* Module: sfcd.cdd
   Function: FUN_0041aa10
   Address: 0041aa10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041aa10(HSFCD__ *param_1,uint *param_2,byte param_3,int *param_4)

{
  int iVar1;
  HSFCD__ *pHVar2;
  uint *puVar3;
  int iVar4;
  ulong uVar5;
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  ushort *local_1c;
  
  pHVar2 = param_1;
  if (DAT_004418fc != 0) {
    return -0x7ffb1f3f;
  }
  iVar1 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x43);
  if ((param_3 & 0x20) != 0) {
    local_5b = 2;
  }
  local_55 = 0x10;
  local_54 = 0;
  local_53 = 0x80;
  iVar4 = FUN_004194d0((undefined4 *)pHVar2,local_64);
  FUN_00419270(pHVar2,(tCDR_ERRORDATA *)(iVar1 + 100),0x690,(uchar *)"comread.cpp");
  if (iVar4 == 0) {
    if (((byte)*(uint *)(pHVar2 + 0x2ce) & 1) == 1) {
      *(uint *)(pHVar2 + 0x2ce) = *(uint *)(pHVar2 + 0x2ce) | 4;
    }
    if (*(int *)(pHVar2 + 0x2d2) != 0) {
      uVar5 = CONCAT11((char)*local_1c,*(undefined1 *)((int)local_1c + 1)) + 2;
      if (0xfff < uVar5) {
        uVar5 = 0x1000;
      }
      TestDrive_AddResult(pHVar2,2,local_1c,uVar5);
    }
    iVar4 = FUN_00419cf0((int)pHVar2,local_1c,param_4);
    puVar3 = param_2;
    if (-1 < iVar4) {
      iVar4 = FUN_00419fa0(param_2,local_1c,(int *)&param_3,(int *)&param_1);
      if (-1 < iVar4) {
        puVar3[3] = (puVar3[1] - *puVar3) + 1;
        iVar4 = FUN_0041f8c0((int)puVar3);
      }
    }
  }
  return iVar4;
}


