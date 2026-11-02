/* Module: sfcd.cdd
   Function: FUN_00414930
   Address: 00414930
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00414930(HSFCD__ *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  HSFSCSIPORT__ *pHVar6;
  DWORD local_68;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_55;
  undefined1 local_54;
  byte local_4e;
  undefined4 *local_1c;
  int local_18;
  ulong local_c;
  
  iVar1 = *(int *)(param_1 + 0x160);
  uVar2 = cdr_GetWriteState(param_1);
  if (uVar2 == 2) {
    local_68 = timeGetTime();
  }
  if (*(int *)(iVar1 + 0x1d0) == 0) {
    pHVar6 = *(HSFSCSIPORT__ **)param_1;
    uVar2 = 0x2a;
  }
  else {
    pHVar6 = *(HSFSCSIPORT__ **)param_1;
    uVar2 = 0xf0;
  }
  SfScsi_InitCmdOut(pHVar6,local_64,uVar2);
  local_60 = 10;
  local_55 = 0;
  if (param_2 != (undefined4 *)0x0) {
    for (iVar5 = (param_3 * 0x93 & 0xfffffffU) << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
      *local_1c = *param_2;
      param_2 = param_2 + 1;
      local_1c = local_1c + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)local_1c = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      local_1c = (undefined4 *)((int)local_1c + 1);
    }
  }
  local_54 = (char)param_3;
  local_18 = param_3 * 0x930;
  uVar2 = FUN_004144a0((undefined4 *)param_1,local_64);
  while( true ) {
    if ((uVar2 == 0) || (iVar5 = SfScsi_IsCheckCondition(local_c), iVar5 == 0)) {
      *(undefined4 *)(iVar1 + 0x1d0) = 0;
      *(int *)(iVar1 + 0x1d4) = *(int *)(iVar1 + 0x1d4) + param_3;
      *(int *)(iVar1 + 0x1d8) = *(int *)(iVar1 + 0x1d8) + param_3;
      uVar3 = cdr_GetWriteState(param_1);
      if ((uVar3 == 2) && (DVar4 = timeGetTime(), 15000 < DVar4 - local_68)) {
        cdr_SetWriteState(param_1,3);
      }
      return uVar2;
    }
    if ((1 < (local_4e & 0xf)) && ((local_4e & 0xf) != 6)) break;
    if (*(int *)(iVar1 + 0x1d0) == 0) {
      pHVar6 = *(HSFSCSIPORT__ **)param_1;
      uVar2 = 0x2a;
    }
    else {
      pHVar6 = *(HSFSCSIPORT__ **)param_1;
      uVar2 = 0xf0;
    }
    SfScsi_InitCmdOut(pHVar6,local_64,uVar2);
    local_60 = 10;
    local_55 = 0;
    local_54 = (char)param_3;
    local_18 = param_3 * 0x930;
    uVar2 = FUN_004144a0((undefined4 *)param_1,local_64);
  }
  return 0x8004e0c8;
}


