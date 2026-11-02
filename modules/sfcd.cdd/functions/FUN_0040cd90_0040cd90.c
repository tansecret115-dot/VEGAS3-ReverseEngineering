/* Module: sfcd.cdd
   Function: FUN_0040cd90
   Address: 0040cd90
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040cd90(HSFCD__ *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  DWORD DVar6;
  uint uVar7;
  undefined1 uVar8;
  DWORD local_68;
  _scsicommand local_64 [4];
  undefined4 local_60;
  byte local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  byte local_4e;
  char local_44;
  undefined4 *local_1c;
  uint local_18;
  ulong local_c;
  
  iVar1 = *(int *)(param_1 + 0x160);
  if (*(int *)(iVar1 + 0x1d0) != 0) {
    if (*(uint *)(iVar1 + 0x1c8) <= (uint)(*(int *)(iVar1 + 0x1cc) + param_3)) {
      cdr_SetWriteState(param_1,4);
    }
    uVar4 = cdr_GetWriteState(param_1);
    if (uVar4 == 2) {
      local_68 = timeGetTime();
    }
  }
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0xe1);
  local_60 = 10;
  uVar4 = param_3 * param_4;
  bVar3 = (byte)(uVar4 >> 0x10);
  local_5b = bVar3 & 0xf;
  local_18._0_1_ = (undefined1)uVar4;
  uVar2 = (undefined1)local_18;
  uVar8 = (undefined1)(uVar4 >> 8);
  local_59 = (undefined1)local_18;
  if (param_2 != (undefined4 *)0x0) {
    for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *local_1c = *param_2;
      param_2 = param_2 + 1;
      local_1c = local_1c + 1;
    }
    for (uVar7 = uVar4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)local_1c = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      local_1c = (undefined4 *)((int)local_1c + 1);
    }
  }
  local_5a = uVar8;
  local_18 = uVar4;
  uVar7 = FUN_0040c8e0((undefined4 *)param_1,local_64);
  while( true ) {
    if ((uVar7 == 0) || (iVar5 = SfScsi_IsCheckCondition(local_c), iVar5 == 0)) {
      if ((*(int *)(iVar1 + 0x1d0) != 0) &&
         ((uVar4 = cdr_GetWriteState(param_1), uVar4 == 2 &&
          (DVar6 = timeGetTime(), 15000 < DVar6 - local_68)))) {
        cdr_SetWriteState(param_1,3);
      }
      *(int *)(iVar1 + 0x1cc) = *(int *)(iVar1 + 0x1cc) + param_3;
      return uVar7;
    }
    if (1 < (local_4e & 0xf)) {
      return -(uint)(local_44 != -0x80) & 0x8004e0c8;
    }
    if (local_44 == -0x80) break;
    SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0xe1);
    local_5b = bVar3 & 0xf;
    local_60 = 10;
    local_59 = uVar2;
    local_5a = uVar8;
    local_18 = uVar4;
    uVar7 = FUN_0040c8e0((undefined4 *)param_1,local_64);
  }
  return 0;
}


