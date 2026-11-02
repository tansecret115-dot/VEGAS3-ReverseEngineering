/* Module: sfcd.cdd
   Function: FUN_0041bd10
   Address: 0041bd10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041bd10(HSFCD__ *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined4 *local_1c;
  
  iVar1 = *(int *)(param_1 + 0x160);
  if (param_2 == (int *)0x0) {
    return -0x7fffbffd;
  }
  if (*param_2 == 0) {
    return -0x7fffbffd;
  }
  iVar3 = param_2[6] + -0x96;
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0xd8);
  local_59 = (undefined1)((uint)iVar3 >> 0x10);
  iVar2 = param_2[7];
  local_57 = (undefined1)iVar3;
  local_5a = (undefined1)((uint)iVar3 >> 0x18);
  local_58 = (undefined1)((uint)iVar3 >> 8);
  local_54 = (undefined1)((uint)iVar2 >> 8);
  local_56 = (undefined1)((uint)iVar2 >> 0x18);
  local_53 = (undefined1)param_2[7];
  local_55 = (undefined1)((uint)iVar2 >> 0x10);
  local_52 = 4;
  local_60 = 0xc;
  iVar2 = FUN_004194d0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0xbe1,(uchar *)"comread.cpp");
  if (-1 < iVar2) {
    FUN_0041b2f0(local_1c,(undefined4 *)*param_2,(undefined4 *)param_2[4],param_2[7]);
    param_2[5] = param_2[7] * 0x126;
  }
  return iVar2;
}


