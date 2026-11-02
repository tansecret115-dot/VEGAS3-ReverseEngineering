/* Module: vegas30k.dll
   Function: _SfVideoPlugin_GetAutomationParamsAt@56
   Address: 010256b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x01025812) */
/* WARNING: Removing unreachable block (ram,0x01025790) */
/* WARNING: Removing unreachable block (ram,0x010257f0) */
/* WARNING: Removing unreachable block (ram,0x01025844) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
_SfVideoPlugin_GetAutomationParamsAt_56
          (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
          double *param_5,int param_6,uint param_7,int param_8,uint param_9,int param_10,
          uint param_11,int param_12,double param_13)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  HGLOBAL pvVar9;
  LPVOID pvVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  longlong lVar17;
  int local_38;
  int local_34;
  double local_28;
  int local_1c;
  
                    /* 0x256b0  1272  _SfVideoPlugin_GetAutomationParamsAt@56 */
  lVar5 = CONCAT44(param_12,param_11);
  iVar13 = 0;
  uVar15 = param_7 - param_9;
  iVar12 = (param_8 - param_10) - (uint)(param_7 < param_9);
  lVar7 = CONCAT44(iVar12,uVar15);
  local_38 = 0;
  piVar1 = *(int **)(param_6 + 0x60);
  if ((piVar1 != (int *)0x0) && (iVar2 = *piVar1, iVar2 != 0)) {
    local_34 = 0;
    if (0 < iVar2) {
      iVar3 = piVar1[1];
      iVar4 = piVar1[2];
      local_28 = (double)CONCAT44(local_28._4_4_,iVar4);
      lVar8 = 0;
      do {
        local_1c = (int)((ulonglong)lVar8 >> 0x20);
        iVar13 = iVar3 * local_34;
        lVar17 = CONCAT44(*(undefined4 *)(iVar13 + 4 + iVar4),*(undefined4 *)(iVar13 + iVar4));
        iVar13 = iVar13 + iVar4;
        if (param_13 != _DAT_011db3f0) {
          ftol();
          lVar17 = ftol();
        }
        if (lVar17 == lVar7) {
LAB_010258fd:
          local_28 = 0.0;
          local_38 = iVar13;
          break;
        }
        if (lVar7 <= lVar17) {
          if (local_38 == 0) goto LAB_010258fd;
          if ((param_11 != 0xffffffff) || (lVar6 = CONCAT44(iVar12,uVar15), param_12 != -1)) {
            if ((lVar8 < 0x100000000) && (lVar8 < 0)) {
              local_1c = 0;
              uVar11 = 0;
            }
            else {
              uVar11 = (uint)lVar8;
              if (lVar5 < lVar8) {
                local_1c = param_12;
                uVar11 = param_11;
              }
            }
            if ((lVar17 < 0x100000000) && (lVar17 < 0)) {
              lVar17 = 0;
            }
            else if (lVar5 < lVar17) {
              lVar17 = lVar5;
            }
            if ((local_1c < iVar12) || ((local_1c <= iVar12 && (uVar11 <= uVar15)))) {
              lVar6 = CONCAT44(iVar12,uVar15);
              lVar8 = CONCAT44(local_1c,uVar11);
              if (lVar17 < lVar7) {
                lVar6 = lVar17;
                lVar8 = CONCAT44(local_1c,uVar11);
              }
            }
            else {
              lVar6 = CONCAT44(local_1c,uVar11);
              lVar8 = CONCAT44(local_1c,uVar11);
            }
          }
          if (lVar17 - lVar8 == 0) {
            local_28 = 0.0;
          }
          else {
            local_28 = (double)(lVar6 - lVar8) / (double)(lVar17 - lVar8);
            switch(*(undefined4 *)(local_38 + 0x18)) {
            case 1:
              if (_DAT_011dad58 <= local_28) {
                local_28 = _DAT_011dad58;
              }
              else {
                local_28 = _DAT_011db3f0;
              }
              break;
            case 2:
              local_28 = local_28 * local_28;
              break;
            case 3:
              local_28 = _DAT_011dad58 - (_DAT_011dad58 - local_28) * (_DAT_011dad58 - local_28);
              break;
            case 4:
              local_28 = (_DAT_011dba48 - (local_28 + local_28)) * local_28 * local_28;
            }
          }
          break;
        }
        local_34 = local_34 + 1;
        local_38 = iVar13;
        lVar8 = lVar17;
      } while (local_34 < iVar2);
    }
    if (iVar2 + -1 < local_34) {
      local_28 = 0.0;
    }
    *param_1 = 0;
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 0;
    pvVar9 = GlobalAlloc(2,*(SIZE_T *)(local_38 + 0x10));
    pvVar10 = GlobalLock(pvVar9);
    *param_1 = pvVar10;
    if (param_1 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    *param_2 = *(undefined4 *)(local_38 + 0x10);
    pvVar9 = GlobalAlloc(2,*(SIZE_T *)(iVar13 + 0x10));
    pvVar10 = GlobalLock(pvVar9);
    *param_3 = pvVar10;
    if (param_3 == (undefined4 *)0x0) {
      pvVar9 = GlobalHandle(pvVar10);
      GlobalUnlock(pvVar9);
      pvVar9 = GlobalHandle(pvRam00000000);
      GlobalFree(pvVar9);
      return 0x8007000e;
    }
    *param_4 = *(undefined4 *)(iVar13 + 0x10);
    uVar15 = *(uint *)(local_38 + 0x10);
    puVar14 = *(undefined4 **)(local_38 + 0x14);
    puVar16 = (undefined4 *)*param_1;
    for (uVar11 = uVar15 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar16 = puVar16 + 1;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined1 *)puVar16 = *(undefined1 *)puVar14;
      puVar14 = (undefined4 *)((int)puVar14 + 1);
      puVar16 = (undefined4 *)((int)puVar16 + 1);
    }
    uVar15 = *(uint *)(iVar13 + 0x10);
    puVar14 = *(undefined4 **)(iVar13 + 0x14);
    puVar16 = (undefined4 *)*param_3;
    for (uVar11 = uVar15 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar16 = puVar16 + 1;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined1 *)puVar16 = *(undefined1 *)puVar14;
      puVar14 = (undefined4 *)((int)puVar14 + 1);
      puVar16 = (undefined4 *)((int)puVar16 + 1);
    }
    *param_5 = local_28;
  }
  return 0;
}


