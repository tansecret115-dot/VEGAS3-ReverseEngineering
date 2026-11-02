/* Module: sfcd.cdd
   Function: FUN_0041bf40
   Address: 0041bf40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041bf40(HSFCD__ *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_55;
  undefined1 local_54;
  undefined4 *local_1c;
  
  iVar2 = *(int *)(param_1 + 0x160);
  if (*param_2 == 0) {
    return -0x7fffbffd;
  }
  iVar3 = param_2[6] + -0x96;
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x28);
  local_58 = (undefined1)((uint)iVar3 >> 8);
  iVar1 = param_2[7];
  local_59 = (undefined1)((uint)iVar3 >> 0x10);
  local_54 = (undefined1)iVar1;
  local_57 = (undefined1)iVar3;
  local_5a = (undefined1)((uint)iVar3 >> 0x18);
  local_60 = 10;
  local_55 = (undefined1)((uint)iVar1 >> 8);
  iVar3 = FUN_004194d0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar2 + 100),0xc4c,(uchar *)"comread.cpp");
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)*param_2;
    for (iVar2 = (iVar1 * 0x93 & 0xfffffffU) << 2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *local_1c;
      local_1c = local_1c + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)local_1c;
      local_1c = (undefined4 *)((int)local_1c + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    if (param_3 != 0) {
      FUN_0041f970((undefined1 *)*param_2,(iVar1 * 0x93 & 0xfffffffU) << 3);
    }
  }
  return iVar3;
}


