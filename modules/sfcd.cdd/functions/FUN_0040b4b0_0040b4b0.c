/* Module: sfcd.cdd
   Function: FUN_0040b4b0
   Address: 0040b4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040b4b0(HSFCD__ *param_1,undefined4 *param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_57;
  undefined1 local_54;
  undefined4 *local_1c;
  
  iVar1 = *(int *)(param_1 + 0x160);
  *(undefined1 *)param_2 = 0x13;
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0xe5);
  local_60 = 10;
  local_57 = param_3;
  local_54 = 0x13;
  *local_1c = *param_2;
  local_1c[1] = param_2[1];
  local_1c[2] = param_2[2];
  local_1c[3] = param_2[3];
  *(undefined2 *)(local_1c + 4) = *(undefined2 *)(param_2 + 4);
  *(undefined1 *)((int)local_1c + 0x12) = *(undefined1 *)((int)param_2 + 0x12);
  uVar2 = FUN_0040aaa0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x3fc,(uchar *)"cdr100.cpp");
  if (uVar2 == 0) {
    *param_2 = *local_1c;
    param_2[1] = local_1c[1];
    param_2[2] = local_1c[2];
    param_2[3] = local_1c[3];
    *(undefined2 *)(param_2 + 4) = *(undefined2 *)(local_1c + 4);
    *(undefined1 *)((int)param_2 + 0x12) = *(undefined1 *)((int)local_1c + 0x12);
    FUN_0041f9a0((undefined1 *)((int)param_2 + 2),2);
    FUN_0041f9a0((undefined1 *)(param_2 + 3),1);
  }
  return uVar2;
}


