/* Module: sfcd.cdd
   Function: FUN_00402280
   Address: 00402280
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00402280(HSFCD__ *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  DWORD local_68;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_55;
  undefined1 local_54;
  uint local_4e;
  char local_44;
  char local_43;
  undefined4 *local_1c;
  uint local_18;
  ulong local_c;
  
  iVar1 = *(int *)(param_1 + 0x160);
  if (*(int *)(iVar1 + 0x1c8) != 0) {
    if ((*(uint *)(iVar1 + 0x1d4) <= (uint)(*(int *)(iVar1 + 0x1d8) + param_3)) &&
       (uVar2 = cdr_GetWriteState(param_1), uVar2 != 4)) {
      cdr_SetWriteState(param_1,4);
    }
    uVar2 = cdr_GetWriteState(param_1);
    if (uVar2 == 2) {
      local_68 = timeGetTime();
    }
  }
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x2a);
  local_60 = 10;
  local_5b = 0;
  local_5a = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1dc) >> 0x18);
  local_59 = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1dc) >> 0x10);
  local_58 = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1dc) >> 8);
  local_57 = *(undefined1 *)(iVar1 + 0x1dc);
  uVar2 = param_3 * param_4;
  local_55 = 0;
  if (param_2 != (undefined4 *)0x0) {
    for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *local_1c = *param_2;
      param_2 = param_2 + 1;
      local_1c = local_1c + 1;
    }
    for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)local_1c = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      local_1c = (undefined4 *)((int)local_1c + 1);
    }
  }
  local_54 = (char)param_3;
  local_18 = uVar2;
  uVar5 = FUN_00402210((undefined4 *)param_1,local_64);
  while ((uVar5 != 0 && (iVar3 = SfScsi_IsCheckCondition(local_c), iVar3 != 0))) {
    switch(local_4e & 0xf) {
    case 0:
    case 1:
    case 6:
      goto switchD_0040239d_caseD_0;
    case 2:
      if (local_44 != '\x04') {
        return 0x8004e0c8;
      }
      if (local_43 != '\b') {
        return 0x8004e0c8;
      }
switchD_0040239d_caseD_0:
      SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x2a);
      local_60 = 10;
      local_5b = 0;
      local_5a = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1dc) >> 0x18);
      local_59 = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1dc) >> 0x10);
      local_58 = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1dc) >> 8);
      local_57 = *(undefined1 *)(iVar1 + 0x1dc);
      local_55 = 0;
      local_54 = (char)param_3;
      local_18 = uVar2;
      uVar5 = FUN_00402210((undefined4 *)param_1,local_64);
      break;
    default:
      return 0x8004e0c8;
    }
  }
  *(int *)(iVar1 + 0x1dc) = *(int *)(iVar1 + 0x1dc) + param_3;
  *(int *)(iVar1 + 0x1d8) = *(int *)(iVar1 + 0x1d8) + param_3;
  if (*(int *)(iVar1 + 0x1c8) == 0) {
    uVar2 = cdr_GetWriteState(param_1);
    if (uVar2 == 3) {
      return uVar5;
    }
  }
  else {
    uVar2 = cdr_GetWriteState(param_1);
    if (uVar2 != 2) {
      return uVar5;
    }
    DVar4 = timeGetTime();
    uVar2 = DVar4 - local_68;
    if (uVar2 < 0x3a99) {
      if (8000 < uVar2) {
        *(undefined4 *)(iVar1 + 0x1d0) = 1;
        return uVar5;
      }
      if (*(int *)(iVar1 + 0x1d0) == 0) {
        return uVar5;
      }
      if (299 < uVar2) {
        return uVar5;
      }
      cdr_SetWriteState(param_1,3);
      return uVar5;
    }
  }
  cdr_SetWriteState(param_1,3);
  return uVar5;
}


