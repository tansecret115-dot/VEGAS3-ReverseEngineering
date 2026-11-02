/* Module: sfcd.cdd
   Function: FUN_0041b9d0
   Address: 0041b9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041b9d0(HSFCD__ *param_1,undefined4 *param_2)

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
  undefined1 local_54;
  undefined1 local_53;
  undefined4 *local_1c;
  
  iVar2 = *(int *)(param_1 + 0x160);
  iVar1 = param_2[7];
  iVar3 = param_2[6];
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0xd4);
  iVar3 = iVar3 + -0x96;
  local_60 = 0xc;
  local_5a = (undefined1)((uint)iVar3 >> 0x18);
  local_57 = (undefined1)iVar3;
  local_58 = (undefined1)((uint)iVar3 >> 8);
  local_59 = (undefined1)((uint)iVar3 >> 0x10);
  local_53 = *(undefined1 *)(param_2 + 7);
  local_54 = (undefined1)((uint)param_2[7] >> 8);
  iVar3 = FUN_004194d0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar2 + 100),0xb15,(uchar *)"comread.cpp");
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
  }
  return iVar3;
}


