/* Module: vegas30.exe
   Function: FUN_00471c40
   Address: 00471c40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 *
FUN_00471c40(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5,uint param_6)

{
  HGLOBAL pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint local_50;
  undefined4 *local_4c;
  int local_38;
  int iStack_34;
  
  iVar4 = param_1;
  uVar5 = (uint)*(ushort *)(*(int *)(param_2 + 0x2c) + 2);
  puVar7 = *(undefined4 **)(param_1 + 0x218);
  ftol();
  uVar2 = *(uint *)(iVar4 + 0x10);
  ftol();
  lVar14 = ftol();
  ftol();
  uVar15 = ftol();
  if ((uVar2 & 0x100000) == 0) {
    if (((uVar2 & 0x100) == 0) && (*(int *)(param_2 + 0x6c) == 0)) {
      local_50 = 0;
    }
    else {
      local_50 = 1;
      if (lVar14 != 0) {
        uVar15 = __allrem(uVar15,lVar14);
      }
    }
  }
  else {
    local_50 = 0;
  }
  iStack_34 = (int)((ulonglong)uVar15 >> 0x20);
  local_38 = (int)uVar15;
  ftol();
  uVar16 = ftol();
  iVar6 = (int)((ulonglong)uVar16 >> 0x20);
  iVar4 = (int)uVar16;
  local_4c = (undefined4 *)puVar7[0x31];
  iVar8 = puVar7[10] - puVar7[8];
  *puVar7 = &LAB_0046fc90;
  puVar7[0x2c] = 2;
  if (local_4c != (undefined4 *)0x0) {
    if ((int)(iVar8 * uVar5) <= (int)puVar7[0x2f]) goto LAB_00471e78;
    pvVar1 = GlobalHandle(local_4c);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(local_4c);
    GlobalFree(pvVar1);
  }
  uVar11 = iVar8 * uVar5;
  puVar7[0x2e] = puVar7[0x2e] | 1;
  uVar2 = uVar11;
  if (uVar11 < 2) {
    uVar2 = 1;
  }
  pvVar1 = GlobalAlloc(0,uVar2 << 2);
  local_4c = GlobalLock(pvVar1);
  puVar7[0x31] = local_4c;
  if (local_4c == (undefined4 *)0x0) {
    puVar7 = param_3;
    for (uVar2 = uVar5 * param_6 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    return param_3;
  }
  puVar7[0x2f] = uVar11;
LAB_00471e78:
  iVar9 = iVar8 * uVar5;
  if ((((((puVar7[0x2e] & 1) != 0) || ((*(uint *)(param_1 + 0x10) & 0x100000) != 0)) ||
       (((uint)puVar7[0x2e] >> 1 & 1) != local_50)) ||
      (((puVar7[0x32] != local_38 || (puVar7[0x33] != iStack_34)) ||
       ((puVar7[0x34] != iVar4 || (puVar7[0x35] != iVar6)))))) ||
     ((puVar7[0x30] != iVar8 && (puVar7[0x30] != iVar8 + 1)))) {
    param_1 = 0;
    iVar3 = (**(code **)(**(int **)(param_2 + 0x60) + 0x34))
                      (*(int **)(param_2 + 0x60),uVar15,uVar16,local_4c,iVar8,&param_1);
    iVar12 = param_1;
    puVar10 = local_4c;
    if (iVar3 < 0) {
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      puVar7[0x32] = local_38;
      puVar7[0x34] = iVar4;
      puVar7[0x2e] = local_50 << 1 | puVar7[0x2e] & 0xfffffffc;
      puVar7[0x33] = iStack_34;
      puVar7[0x35] = iVar6;
    }
    else {
      if (param_1 < iVar8) {
        if ((local_50 == 0) || (iVar8 < 1)) {
          puVar10 = local_4c + param_1 * uVar5;
          for (uVar2 = (iVar8 - param_1) * uVar5 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(undefined1 *)puVar10 = 0;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
        }
        else {
          iVar9 = iVar8 - param_1;
          __alldiv(iVar8,iVar8 >> 0x1f,2,0);
          uVar15 = ftol();
          if (0 < iVar9) {
LAB_00471fa8:
            puVar10 = puVar10 + iVar12 * uVar5;
            (**(code **)(**(int **)(param_2 + 0x60) + 0x34))
                      (*(int **)(param_2 + 0x60),0,0,uVar15,puVar10,iVar9,&param_1);
            iVar12 = param_1;
            if (0 < param_1) goto code_r0x00471fdb;
            for (uVar2 = iVar9 * uVar5 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
              *(undefined1 *)puVar10 = 0;
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
          }
        }
      }
LAB_00472083:
      puVar7[0x32] = local_38;
      puVar7[0x2e] = local_50 << 1 | puVar7[0x2e] & 0xfffffffc;
      puVar7[0x34] = iVar4;
      puVar7[0x33] = iStack_34;
      puVar7[0x35] = iVar6;
    }
    puVar7[0x30] = iVar8;
  }
  iVar4 = param_5 - puVar7[8];
  if (((param_4 == 0) && (-1 < iVar4)) && (-1 < (int)((puVar7[10] - param_5) - param_6))) {
    return local_4c + iVar4 * uVar5;
  }
  iVar6 = uVar5 * 4;
  puVar7 = param_3;
  if (iVar4 < 0) {
    uVar2 = param_6;
    if (-iVar4 <= (int)param_6) {
      uVar2 = -iVar4;
    }
    for (uVar11 = iVar6 * uVar2 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    param_6 = param_6 - uVar2;
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar7 = param_3 + uVar2 * uVar5;
    iVar4 = 0;
  }
  uVar2 = (iVar8 - iVar4 < 0) - 1 & iVar8 - iVar4;
  if ((int)param_6 <= (int)uVar2) {
    uVar2 = param_6;
  }
  if (0 < (int)uVar2) {
    puVar10 = local_4c + iVar4 * uVar5;
    puVar13 = puVar7;
    for (uVar11 = uVar2 * iVar6 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar13 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    param_6 = param_6 - uVar2;
    puVar7 = puVar7 + uVar2 * uVar5;
  }
  if (0 < (int)param_6) {
    for (uVar2 = iVar6 * param_6 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  return param_3;
code_r0x00471fdb:
  iVar9 = iVar9 - param_1;
  __alldiv(iVar8,iVar8 >> 0x1f,2,0);
  uVar15 = ftol();
  if (iVar9 < 1) goto LAB_00472083;
  goto LAB_00471fa8;
}


