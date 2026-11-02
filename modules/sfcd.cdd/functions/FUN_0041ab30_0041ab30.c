/* Module: sfcd.cdd
   Function: FUN_0041ab30
   Address: 0041ab30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041ab30(HSFCD__ *param_1,undefined4 param_2,byte param_3,uint *param_4,undefined4 *param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  HSFCD__ *pHVar4;
  int iVar5;
  ulong uVar6;
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 *local_1c;
  
  pHVar4 = param_1;
  iVar3 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x43);
  if ((param_3 & 0x20) != 0) {
    local_5b = 2;
  }
  local_55 = 0x10;
  local_54 = 0;
  local_53 = 0x40;
  iVar5 = FUN_004194d0((undefined4 *)pHVar4,local_64);
  FUN_00419270(pHVar4,(tCDR_ERRORDATA *)(iVar3 + 100),0x6d6,(uchar *)"comread.cpp");
  if (iVar5 == 0) {
    if (*(int *)(pHVar4 + 0x2d2) != 0) {
      uVar6 = CONCAT11(*local_1c,local_1c[1]) + 2;
      if (0xfff < uVar6) {
        uVar6 = 0x1000;
      }
      TestDrive_AddResult(pHVar4,4,local_1c,uVar6);
    }
    bVar1 = local_1c[2];
    bVar2 = local_1c[3];
    param_1 = *(HSFCD__ **)(local_1c + 8);
    FUN_0041f9a0((undefined1 *)&param_1,1);
    if (param_4 != (uint *)0x0) {
      *param_4 = (uint)bVar1;
      param_4[1] = (uint)bVar2;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = param_1;
    }
  }
  return iVar5;
}


