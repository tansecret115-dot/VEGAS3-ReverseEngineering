/* Module: qt4plug.dll
   Function: FUN_5f515000
   Address: 5f515000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f515000(int *param_1,int param_2)

{
  HGLOBAL pvVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  int *piVar8;
  bool bVar9;
  int *local_9c [2];
  int local_94;
  undefined4 local_90;
  float *local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  LPCVOID local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  LPCVOID local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  LPVOID local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38 [14];
  
  ppiVar7 = local_9c;
  for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppiVar7 = (int *)0x0;
    ppiVar7 = ppiVar7 + 1;
  }
  if ((param_1 != (int *)0x0) && (param_1[2] != 0 || param_1[3] != 0)) {
    piVar5 = param_1;
    piVar8 = local_38;
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar8 = piVar8 + 1;
    }
    local_9c[1] = local_38;
    local_94 = param_1[2] / 0x14;
    local_38[0] = 0;
    local_38[1] = 0;
    local_9c[0] = param_1;
    local_90 = 0;
    pvVar1 = GlobalAlloc(0,param_1[2] * 8);
    local_8c = GlobalLock(pvVar1);
    local_88 = 0.0;
    local_84 = 0.0;
    local_80 = 0;
    pvVar1 = GlobalAlloc(0,local_9c[0][2] << 3);
    local_7c = GlobalLock(pvVar1);
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    pvVar1 = GlobalAlloc(0,local_9c[0][2] * 8);
    local_6c = GlobalLock(pvVar1);
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    pvVar1 = GlobalAlloc(0,local_9c[0][2] * 8);
    local_5c = GlobalLock(pvVar1);
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    pvVar1 = GlobalAlloc(0,local_9c[0][2] * 8);
    local_4c = GlobalLock(pvVar1);
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    uVar2 = 0;
    local_88 = (float)*(uint *)*param_1;
    iVar4 = 0;
    if ((-1 < param_1[3]) && ((0 < param_1[3] || (param_1[2] != 0)))) {
      do {
        do {
          iVar6 = uVar2 * 8;
          bVar9 = 0xfffffffe < uVar2;
          uVar2 = uVar2 + 1;
          iVar4 = iVar4 + (uint)bVar9;
          local_8c[uVar2 * 2 + -2] = (float)*(uint *)(*param_1 + iVar6);
          *(undefined2 *)(local_8c + uVar2 * 2 + -1) = *(undefined2 *)(*param_1 + -4 + uVar2 * 8);
        } while (iVar4 < param_1[3]);
      } while ((iVar4 <= param_1[3]) && (uVar2 < (uint)param_1[2]));
    }
    iVar4 = param_1[3];
    local_84 = local_88;
    if (param_1[2] != 0 || iVar4 != 0) {
      local_88 = *local_8c;
      iVar6 = 0;
      uVar2 = 0;
      local_84 = local_88;
      if ((-1 < iVar4) && ((0 < iVar4 || (param_1[2] != 0)))) {
        do {
          if (local_8c[uVar2 * 2] < local_88) {
            local_88 = local_8c[uVar2 * 2];
          }
          if (local_84 < local_8c[uVar2 * 2]) {
            local_84 = local_8c[uVar2 * 2];
          }
          bVar9 = 0xfffffffe < uVar2;
          uVar2 = uVar2 + 1;
          iVar6 = iVar6 + (uint)bVar9;
        } while ((iVar6 < iVar4) || ((iVar6 <= iVar4 && (uVar2 < (uint)param_1[2]))));
      }
    }
    local_80 = 1;
    if (param_2 == 0) {
      if (&stack0x00000000 != (undefined1 *)0x9c) {
        FUN_5f514560(local_7c,(int)local_8c,local_6c,(int)local_9c[1]);
        FUN_5f519350(&local_7c,local_9c[0][2],local_9c[0][3]);
        local_70 = 1;
      }
      local_3c = 1;
    }
    else {
      iVar4 = FUN_5f526cf0(DAT_5f5a4158,(LPCSTR)0x3ea,(HWND)0x0,(DLGPROC)&LAB_5f5153f0,
                           (LPARAM)local_9c);
      if (iVar4 == 1) {
        local_3c = 1;
      }
      GetLastError();
    }
    uVar2 = 0;
    iVar4 = 0;
    if ((-1 < param_1[3]) && ((0 < param_1[3] || (param_1[2] != 0)))) {
      do {
        do {
          uVar3 = ftol();
          bVar9 = 0xfffffffe < uVar2;
          uVar2 = uVar2 + 1;
          iVar4 = iVar4 + (uint)bVar9;
          *(undefined4 *)(param_1[1] + -8 + uVar2 * 8) = uVar3;
          *(undefined2 *)(param_1[1] + -4 + uVar2 * 8) = *(undefined2 *)(*param_1 + -4 + uVar2 * 8);
        } while (iVar4 < param_1[3]);
      } while ((iVar4 <= param_1[3]) && (uVar2 < (uint)param_1[2]));
    }
    if (local_8c != (float *)0x0) {
      pvVar1 = GlobalHandle(local_8c);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(local_8c);
      GlobalFree(pvVar1);
      local_8c = (float *)0x0;
    }
    local_88 = 0.0;
    local_84 = 0.0;
    local_80 = 0;
    if (local_7c != (float *)0x0) {
      pvVar1 = GlobalHandle(local_7c);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(local_7c);
      GlobalFree(pvVar1);
      local_7c = (float *)0x0;
    }
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    if (local_6c != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(local_6c);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(local_6c);
      GlobalFree(pvVar1);
      local_6c = (LPCVOID)0x0;
    }
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    if (local_5c != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(local_5c);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(local_5c);
      GlobalFree(pvVar1);
      local_5c = (LPCVOID)0x0;
    }
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    if (local_4c != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(local_4c);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(local_4c);
      GlobalFree(pvVar1);
    }
    return local_3c;
  }
  return 0;
}


