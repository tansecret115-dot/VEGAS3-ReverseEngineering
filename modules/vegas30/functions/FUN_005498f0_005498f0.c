/* Module: vegas30.exe
   Function: FUN_005498f0
   Address: 005498f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005498f0(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  HGLOBAL pvVar10;
  int iVar11;
  uint uVar12;
  WPARAM wParam;
  LRESULT LVar13;
  WPARAM wParam_00;
  int iVar14;
  int *piVar15;
  undefined4 *local_60;
  int local_54;
  undefined4 *local_50;
  int local_40 [6];
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  
  DAT_006577fc = 1;
  iVar14 = 0;
  if ((*(int *)(param_1 + 0xb4) == 0) &&
     (iVar14 = _SfList_CreateExZ_32((int *)(param_1 + 0xb4),4,0xffffffff,0xffffffff,2,0,0),
     iVar14 < 0)) goto LAB_00549eaf;
  piVar2 = *(int **)(param_1 + 0xb4);
  pcVar8 = (char *)FUN_005bad20();
  iVar11 = *piVar2;
  iVar9 = 0;
  bVar4 = false;
  bVar5 = false;
  if (0 < iVar11) {
    do {
      iVar9 = iVar9 + 1;
      *(undefined1 *)(*(int *)(piVar2[2] + -4 + iVar9 * 4) + 0x798) = 0;
    } while (iVar9 < iVar11);
  }
  if (*pcVar8 == '\0') {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(pcVar8 + 4);
  }
  local_54 = 0;
  local_60 = (undefined4 *)0x0;
  if (0 < iVar11) {
    pvVar10 = GlobalAlloc(0x40,iVar11 << 2);
    local_60 = GlobalLock(pvVar10);
  }
  iVar11 = 0;
  if ((*pcVar8 != '\0') && (iVar11 = *(int *)(pcVar8 + 8), (*(byte *)(iVar11 + 0x18) & 2) != 2)) {
    bVar1 = *(byte *)(*(int *)(iVar11 + 0x10) + 0x18);
    iVar9 = *(int *)(iVar11 + 0x10);
    while ((bVar1 & 2) != 2) {
      bVar1 = *(byte *)(*(int *)(iVar9 + 0x10) + 0x18);
      iVar11 = iVar9;
      iVar9 = *(int *)(iVar9 + 0x10);
    }
  }
  local_50 = local_60;
  while( true ) {
    if (*pcVar8 == '\0') {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(pcVar8 + 0xc);
    }
    if (iVar11 == iVar9) break;
    iVar9 = *(int *)(iVar11 + 4);
    piVar15 = (int *)0x0;
    iVar3 = *(int *)(iVar9 + 0x164);
    uVar12 = FUN_00549ed0();
    iVar14 = -0x7fffbffb;
    if (*(char *)(param_1 + 0xa4) != '\0') {
      if ((uVar12 < *(uint *)(param_1 + 0xac)) && (&stack0x00000000 != (undefined1 *)0xfffffffc)) {
        iVar14 = -0x7ffb1ff6;
        if (*(int *)(param_1 + 0xa8) != 0) {
          piVar6 = (int *)0x0;
          for (piVar7 = *(int **)(*(int *)(param_1 + 0xb0) + uVar12 * 4); piVar7 != (int *)0x0;
              piVar7 = (int *)piVar7[2]) {
            if (*piVar7 == iVar3) {
              piVar15 = piVar7 + 1;
              if (piVar6 != (int *)0x0) {
                piVar6[2] = piVar7[2];
                piVar7[2] = *(int *)(*(int *)(param_1 + 0xb0) + uVar12 * 4);
                *(int **)(*(int *)(param_1 + 0xb0) + uVar12 * 4) = piVar7;
              }
              iVar14 = 0;
              break;
            }
            piVar6 = piVar7;
          }
        }
      }
      else {
        iVar14 = -0x7ff8ffa9;
      }
    }
    if (iVar14 < 0) {
      if (iVar14 == -0x7ffb1ff6) {
        iVar14 = _SfList_AllocItem_12(piVar2,0x7a0);
        if (iVar14 < 0) goto LAB_00549e8d;
        FUN_0054a600();
        iVar14 = FUN_0054a6d0();
        if (iVar14 < 0) {
          _SfList_DeleteList_16(piVar2,0xffffffff,0xffffffff);
        }
        else {
          iVar14 = _SfList_InsertList_16(piVar2,0xffffffff,0);
          if (iVar14 < 0) goto LAB_00549e8d;
          bVar4 = true;
          bVar5 = true;
          uRam00000798 = 1;
          uVar12 = FUN_00549ed0();
          iVar14 = -0x7fffbffb;
          if (*(char *)(param_1 + 0xa4) != '\0') {
            if (uVar12 < *(uint *)(param_1 + 0xac)) {
              for (piVar15 = *(int **)(*(int *)(param_1 + 0xb0) + uVar12 * 4); piVar15 != (int *)0x0
                  ; piVar15 = (int *)piVar15[2]) {
                if (*piVar15 == iVar3) {
                  iVar14 = -0x7ffb1f57;
                  goto LAB_00549bdb;
                }
              }
              iVar14 = -0x7ff8fff2;
              pvVar10 = GlobalAlloc(0x40,0xc);
              piVar15 = GlobalLock(pvVar10);
              if (piVar15 != (int *)0x0) {
                *piVar15 = iVar3;
                piVar15[1] = 0;
                piVar15[2] = *(int *)(*(int *)(param_1 + 0xb0) + uVar12 * 4);
                *(int **)(*(int *)(param_1 + 0xb0) + uVar12 * 4) = piVar15;
                iVar14 = 0;
                *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
              }
            }
            else {
              iVar14 = -0x7ff8ffa9;
            }
          }
LAB_00549bdb:
          if (((iVar14 < 0) || (iVar14 = FUN_00549680(param_1), iVar14 < 0)) ||
             (iVar14 = FUN_00549ef0(param_1), iVar14 < 0)) goto LAB_00549e8d;
          if (local_60 != (undefined4 *)0x0) {
            *local_50 = 0;
            local_54 = local_54 + 1;
            local_50 = local_50 + 1;
          }
        }
      }
    }
    else {
      *(undefined1 *)(*piVar15 + 0x798) = 1;
      if ((*(byte *)(iVar9 + 0x134) & 0x10) != 0) {
        iVar14 = FUN_0054a6d0();
        if (iVar14 < 0) goto LAB_00549e8d;
        bVar4 = true;
        iVar14 = FUN_00549680(param_1);
      }
    }
    if (iVar14 < 0) goto LAB_00549e8d;
    FUN_00436e20();
  }
  if (-1 < iVar14) {
    iVar11 = *piVar2;
    if (iVar11 < 1) goto LAB_00549e26;
    goto joined_r0x00549c7c;
  }
  goto LAB_00549e8d;
LAB_00549e26:
  if (-1 < iVar14) {
    if (bVar4) {
      iVar14 = _SfList_Sort_12(piVar2,param_1);
    }
    if (-1 < iVar14) {
      if ((bVar5) &&
         (LVar13 = SendMessageA(*(HWND *)(param_1 + 0x9c),0x1030,0,0x54a320), LVar13 != 1)) {
        iVar14 = -0x7fffbffb;
      }
      else {
        if (local_60 == (undefined4 *)0x0) goto LAB_00549eaf;
        if (local_54 != 0) {
          FUN_0054a0e0(param_1,local_54);
        }
      }
    }
  }
  goto LAB_00549e8d;
  while (-1 < iVar14) {
joined_r0x00549c7c:
    iVar11 = iVar11 + -1;
    if (iVar11 < 0) goto LAB_00549e26;
    iVar9 = *(int *)(piVar2[2] + iVar11 * 4);
    if (*(char *)(iVar9 + 0x798) == '\0') {
      bVar4 = true;
      iVar3 = *(int *)(iVar9 + 0x794);
      uVar12 = FUN_00549ed0();
      iVar14 = -0x7fffbffb;
      if (*(char *)(param_1 + 0xa4) != '\0') {
        if (uVar12 < *(uint *)(param_1 + 0xac)) {
          iVar14 = -0x7ffb1ff6;
          if (*(int *)(param_1 + 0xa8) != 0) {
            piVar15 = (int *)0x0;
            for (piVar6 = *(int **)(*(int *)(param_1 + 0xb0) + uVar12 * 4); piVar6 != (int *)0x0;
                piVar6 = (int *)piVar6[2]) {
              if (*piVar6 == iVar3) {
                if (piVar15 == (int *)0x0) {
                  *(int *)(*(int *)(param_1 + 0xb0) + uVar12 * 4) = piVar6[2];
                }
                else {
                  piVar15[2] = piVar6[2];
                }
                pvVar10 = GlobalHandle(piVar6);
                GlobalUnlock(pvVar10);
                pvVar10 = GlobalHandle(piVar6);
                GlobalFree(pvVar10);
                iVar14 = 0;
                *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
                break;
              }
              piVar15 = piVar6;
            }
          }
        }
        else {
          iVar14 = -0x7ff8ffa9;
        }
      }
      if (iVar14 < 0) break;
      piVar15 = local_40;
      for (iVar14 = 6; iVar14 != 0; iVar14 = iVar14 + -1) {
        *piVar15 = 0;
        piVar15 = piVar15 + 1;
      }
      iVar14 = -0x7fffbffb;
      local_40[0] = 1;
      local_40[2] = iVar9;
      wParam = SendMessageA(*(HWND *)(param_1 + 0x9c),0x100d,0xffffffff,(LPARAM)local_40);
      if (wParam == 0xffffffff) break;
      LVar13 = SendMessageA(*(HWND *)(param_1 + 0x9c),0x102c,wParam,1);
      if (LVar13 != 0) {
        LVar13 = SendMessageA(*(HWND *)(param_1 + 0x9c),0x1004,0,0);
        if (LVar13 != 1) {
          wParam_00 = wParam - 1;
          if (wParam != LVar13 - 1U) {
            wParam_00 = wParam + 1;
          }
          local_18 = 3;
          local_1c = 3;
          SendMessageA(*(HWND *)(param_1 + 0x9c),0x102b,wParam_00,(LPARAM)local_28);
        }
      }
      LVar13 = SendMessageA(*(HWND *)(param_1 + 0x9c),0x1008,wParam,0);
      if (LVar13 != 1) break;
      iVar14 = _SfList_DeleteList_16(piVar2,iVar11,1);
    }
  }
LAB_00549e8d:
  if (local_60 != (undefined4 *)0x0) {
    pvVar10 = GlobalHandle(local_60);
    GlobalUnlock(pvVar10);
    pvVar10 = GlobalHandle(local_60);
    GlobalFree(pvVar10);
  }
LAB_00549eaf:
  DAT_006577fc = 0;
  FUN_0054d0c0();
  return iVar14;
}


