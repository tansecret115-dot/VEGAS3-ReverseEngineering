/* Module: mp3plug.dll
   Function: FUN_5f6990b0
   Address: 5f6990b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5f6990b0(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  longlong lVar5;
  int local_84;
  SIZE_T local_80;
  int local_7c;
  LPCVOID local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 *local_5c;
  int local_58 [4];
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  undefined4 local_38;
  DWORD local_30 [5];
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f72d298;
  puStack_10 = &DAT_5f72a230;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff54;
  local_5c = param_1;
  local_70 = param_1[0xb];
  local_30[0] = param_1[0xc];
  piVar4 = local_58;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_58[0] = 0x28;
  local_58[1] = param_1[5] << 3;
  local_58[2] = (int)*(ushort *)((int)param_1 + 0xe);
  local_58[3] = param_1[4];
  local_48 = (uint)*(ushort *)(param_1 + 9);
  local_44 = (uint)*(ushort *)((int)param_1 + 0x26);
  local_38 = 0x10;
  local_30[1] = 0x10;
  local_30[4] = 0;
  local_30[2] = 0x2000;
  local_30[3] = 0;
  local_84 = 0x10;
  local_78 = (LPCVOID)0x0;
  local_80 = 0;
  local_7c = 0;
  local_6c = local_58[2] * 2;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  ExceptionList = &local_14;
  local_40 = local_58[2];
  local_3c = local_58[3];
  iVar2 = FUN_5f70faa0(local_58,(int *)(local_30 + 1),&local_84,1);
  if (iVar2 != 0) {
    FUN_5f697d90((void *)param_1[1],0x8004e007);
    FUN_5f697b30(param_1[1]);
    ExceptionList = local_14;
    return (undefined4 *)0x8004e007;
  }
  pvVar1 = GlobalAlloc(0x42,local_80);
  local_78 = GlobalLock(pvVar1);
  if (local_78 == (LPVOID)0x0) {
    FUN_5f697d90((void *)param_1[1],0x8004e007);
    FUN_5f697b30(param_1[1]);
    ExceptionList = local_14;
    return (undefined4 *)0x8007000e;
  }
  iVar2 = FUN_5f70fc30(local_58,0);
  if (iVar2 != 0) {
    pvVar1 = GlobalHandle(local_78);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(local_78);
    GlobalFree(pvVar1);
    FUN_5f697d90((void *)param_1[1],0x8004e007);
    FUN_5f697b30(param_1[1]);
    ExceptionList = local_14;
    return (undefined4 *)0x8004e007;
  }
  (**(code **)(*(int *)param_1[2] + 0xc))((int *)param_1[2],3,0,0);
  puVar3 = (undefined4 *)0x0;
  while ((puVar3 == (undefined4 *)0x0 && (param_1[0x11] != 0))) {
    local_30[4] = local_70;
    lVar5 = local_68;
    while (local_68 = lVar5, 0 < (int)local_30[0]) {
      local_30[3] = 0;
      local_7c = 0;
      local_30[2] = local_30[0];
      local_8 = 0;
      local_74 = FUN_5f70ffe0(local_58,(int *)(local_30 + 1),&local_84);
      if (local_74 != 0) {
        puVar3 = (undefined4 *)0x8004e012;
        local_60 = 0x8004e012;
      }
      local_8 = 0xffffffff;
      if ((int)puVar3 < 0) {
        FUN_5f697b30(param_1[1]);
        lVar5 = local_68;
      }
      else {
        local_30[0] = local_30[0] - local_30[3];
        local_30[4] = local_30[4] + local_30[3];
        lVar5 = local_68;
        if (local_30[0] == 0) {
          FUN_5f697b30(param_1[1]);
          lVar5 = local_68;
        }
        local_68._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
        local_68._0_4_ = (undefined4)lVar5;
        if (0 < local_7c) {
          puVar3 = (undefined4 *)
                   FUN_5f699b00((void *)*param_1,(undefined4)local_68,local_68._4_4_,local_78,
                                local_7c);
          local_68 = lVar5;
          if (local_3c == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = ftol();
          }
          *(longlong *)(param_1 + 0xe) = lVar5 + local_68;
          lVar5 = lVar5 + local_68;
        }
      }
    }
    WaitForSingleObject((HANDLE)param_1[0x10],0xffffffff);
    if ((int)puVar3 < 0) break;
    puVar3 = FUN_5f697990((void *)param_1[1],&local_70,local_30);
  }
  FUN_5f70ff50(local_58);
  if (local_78 != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(local_78);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(local_78);
    GlobalFree(pvVar1);
    local_78 = (LPCVOID)0x0;
  }
  FUN_5f697d90((void *)param_1[1],puVar3);
  (**(code **)(*(int *)param_1[2] + 0xc))((int *)param_1[2],4,0,0);
  ExceptionList = local_14;
  return puVar3;
}


