/* Module: sfcd.cdd
   Function: FUN_0040f2d0
   Address: 0040f2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_0040f2d0(HSFCD__ *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_58;
  byte local_4e;
  undefined4 *local_1c;
  int local_18;
  ulong local_c;
  
  iVar1 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,10);
  local_60 = 6;
  if (param_2 != (undefined4 *)0x0) {
    for (iVar3 = (param_3 * 0x93 & 0xfffffffU) << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
      *local_1c = *param_2;
      param_2 = param_2 + 1;
      local_1c = local_1c + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)local_1c = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      local_1c = (undefined4 *)((int)local_1c + 1);
    }
  }
  local_58 = (char)param_3;
  local_18 = param_3 * 0x930;
  lVar2 = FUN_0040eb20((undefined4 *)param_1,local_64);
  if (lVar2 != 0) {
    while (iVar3 = SfScsi_IsCheckCondition(local_c), iVar3 != 0) {
      if ((1 < (local_4e & 0xf)) && ((local_4e & 0xf) != 6)) {
        return -0x7ffb1f38;
      }
      SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,10);
      local_60 = 6;
      local_58 = (char)param_3;
      local_18 = param_3 * 0x930;
      lVar2 = FUN_0040eb20((undefined4 *)param_1,local_64);
      if (lVar2 == 0) {
        return 0;
      }
    }
    if (lVar2 != 0) {
      FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x35a,(uchar *)"cw7501.cpp");
    }
  }
  return lVar2;
}


