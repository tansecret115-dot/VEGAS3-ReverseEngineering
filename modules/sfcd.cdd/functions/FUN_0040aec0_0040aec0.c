/* Module: sfcd.cdd
   Function: FUN_0040aec0
   Address: 0040aec0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040aec0(HSFCD__ *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_58;
  uint local_4e;
  char local_44;
  undefined4 *local_1c;
  uint local_18;
  ulong local_c;
  
  iVar1 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,10);
  local_60 = 6;
  uVar4 = param_3 * param_4;
  if (param_2 != (undefined4 *)0x0) {
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *local_1c = *param_2;
      param_2 = param_2 + 1;
      local_1c = local_1c + 1;
    }
    for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)local_1c = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      local_1c = (undefined4 *)((int)local_1c + 1);
    }
  }
  local_58 = (char)param_3;
  local_18 = uVar4;
  uVar3 = FUN_0040aaa0((undefined4 *)param_1,local_64);
joined_r0x0040af36:
  if ((uVar3 != 0) && (iVar2 = SfScsi_IsCheckCondition(local_c), iVar2 != 0)) {
    switch(local_4e & 0xf) {
    case 0:
    case 1:
    case 6:
    case 9:
      goto switchD_0040af62_caseD_0;
    default:
      return 0x8004e0c8;
    }
  }
  uVar4 = cdr_GetWriteState(param_1);
  if (uVar4 == 2) {
    cdr_SetWriteState(param_1,3);
  }
  return uVar3;
switchD_0040af62_caseD_0:
  if (((*(int *)(iVar1 + 0x1cc) != 0) && (local_44 == -0x48)) &&
     (uVar3 = cdr_GetWriteState(param_1), uVar3 != 2)) {
    cdr_SetWriteState(param_1,2);
  }
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,10);
  local_60 = 6;
  local_58 = (char)param_3;
  local_18 = uVar4;
  uVar3 = FUN_0040aaa0((undefined4 *)param_1,local_64);
  goto joined_r0x0040af36;
}


