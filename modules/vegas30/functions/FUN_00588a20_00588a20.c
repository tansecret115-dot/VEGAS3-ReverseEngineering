/* Module: vegas30.exe
   Function: FUN_00588a20
   Address: 00588a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00588a20(int param_1)

{
  HWND hWnd;
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  uint uVar11;
  LPSTR lpMultiByteStr;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  bool bVar15;
  uint local_158;
  undefined2 local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  tagRECT local_130;
  int local_120 [4];
  WCHAR aWStack_110 [136];
  
  *(undefined4 *)(param_1 + 0x14) = 1;
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x3e9);
  if (hWnd != (HWND)0x0) {
    GetWindowRect(hWnd,&local_130);
    MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 4),(LPPOINT)&local_130,2);
    DestroyWindow(hWnd);
    piVar5 = *(int **)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    uVar11 = 0;
    iVar1 = 0;
    local_158 = 0;
    if (0 < piVar5[1]) {
      do {
        *(int *)(param_1 + 0x34) =
             *(int *)(param_1 + 0x34) + *(int *)(*(int *)(*piVar5 + iVar1 * 4) + 0x10);
        iVar8 = *(int *)(*(int *)(*piVar5 + iVar1 * 4) + 0xc);
        uVar11 = uVar11 + iVar8 * 0x40;
        iVar1 = iVar1 + 1;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar8;
        local_158 = uVar11;
      } while (iVar1 < piVar5[1]);
    }
    pcVar9 = GlobalAlloc_exref;
    pvVar2 = GlobalAlloc(0x42,*(SIZE_T *)(param_1 + 0x34));
    pvVar3 = GlobalLock(pvVar2);
    *(LPVOID *)(param_1 + 0x30) = pvVar3;
    if (pvVar3 == (LPVOID)0x0) {
LAB_00588ada:
      EndDialog(*(HWND *)(param_1 + 4),3);
      return;
    }
    iVar8 = 0;
    iVar1 = 0;
    if (0 < (*(int **)(param_1 + 0x10))[1]) {
      iVar10 = **(int **)(param_1 + 0x10);
      do {
        iVar10 = *(int *)(iVar10 + iVar1 * 4);
        uVar11 = *(uint *)(iVar10 + 0x10);
        puVar4 = *(undefined4 **)(iVar10 + 4);
        puVar13 = (undefined4 *)(*(int *)(param_1 + 0x30) + iVar8);
        for (uVar7 = uVar11 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar13 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar13 = puVar13 + 1;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        iVar10 = **(int **)(param_1 + 0x10);
        iVar8 = iVar8 + *(int *)(*(int *)(iVar10 + iVar1 * 4) + 0x10);
        iVar1 = iVar1 + 1;
        pcVar9 = GlobalAlloc_exref;
      } while (iVar1 < (*(int **)(param_1 + 0x10))[1]);
    }
    pvVar2 = (HGLOBAL)(*pcVar9)(0x42,local_158);
    puVar4 = GlobalLock(pvVar2);
    *(undefined4 **)(param_1 + 0x38) = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      EndDialog(*(HWND *)(param_1 + 4),3);
      return;
    }
    for (local_158 = local_158 >> 2; local_158 != 0; local_158 = local_158 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar1 = 0;
    local_14c = 0;
    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    pvVar2 = (HGLOBAL)(*pcVar9)(0x42,*(int *)(param_1 + 0x24) * 0x18);
    puVar4 = GlobalLock(pvVar2);
    *(undefined4 **)(param_1 + 0x20) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      for (iVar8 = (*(int *)(param_1 + 0x24) * 3 & 0x1fffffffU) << 1; iVar8 != 0; iVar8 = iVar8 + -1
          ) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      piVar5 = *(int **)(param_1 + 0x10);
      local_140 = 0;
      if (0 < piVar5[1]) {
        local_158 = 0;
        do {
          local_150 = 0;
          iVar8 = *(int *)(*(int *)(local_158 + *piVar5) + 0xc);
          if (0 < iVar8) {
            iVar10 = iVar1 * 0x18;
            do {
              local_154 = 0;
              piVar5 = (int *)FUN_005880e0(local_150);
              if (piVar5 != (int *)0x0) {
                iVar1 = FUN_005880c0(piVar5);
                iVar6 = (**(code **)(*piVar5 + 8))(local_120);
                if (iVar6 < 0) goto LAB_00588ada;
                lpMultiByteStr = (LPSTR)(*(int *)(param_1 + 0x38) + local_148);
                if ((&stack0x00000000 == (undefined1 *)0x110) || (aWStack_110[0] != L'\0')) {
                  WideCharToMultiByte(0,0,aWStack_110,-1,lpMultiByteStr,0x40,(LPCSTR)0x0,(LPBOOL)0x0
                                     );
                }
                else if (lpMultiByteStr != (LPSTR)0x0) {
                  *lpMultiByteStr = '\0';
                }
                lpMultiByteStr[0x3f] = '\0';
                *(LPSTR *)(*(int *)(param_1 + 0x20) + iVar10) = lpMultiByteStr;
                *(int *)(*(int *)(param_1 + 0x20) + 4 + iVar10) = local_144;
                iVar6 = 4;
                *(int *)(*(int *)(param_1 + 0x20) + 8 + iVar10) = iVar1;
                bVar15 = true;
                piVar12 = &DAT_006291e0;
                piVar14 = local_120;
                do {
                  if (iVar6 == 0) break;
                  iVar6 = iVar6 + -1;
                  bVar15 = *piVar12 == *piVar14;
                  piVar12 = piVar12 + 1;
                  piVar14 = piVar14 + 1;
                } while (bVar15);
                if (bVar15) {
                  local_154 = 7;
                }
                else {
                  iVar6 = 4;
                  bVar15 = true;
                  piVar12 = &DAT_00629220;
                  piVar14 = local_120;
                  do {
                    if (iVar6 == 0) break;
                    iVar6 = iVar6 + -1;
                    bVar15 = *piVar12 == *piVar14;
                    piVar12 = piVar12 + 1;
                    piVar14 = piVar14 + 1;
                  } while (bVar15);
                  if (bVar15) {
                    local_154 = 1;
                  }
                  else {
                    iVar6 = 4;
                    bVar15 = true;
                    piVar12 = &DAT_00629200;
                    piVar14 = local_120;
                    do {
                      if (iVar6 == 0) break;
                      iVar6 = iVar6 + -1;
                      bVar15 = *piVar12 == *piVar14;
                      piVar12 = piVar12 + 1;
                      piVar14 = piVar14 + 1;
                    } while (bVar15);
                    if (bVar15) {
                      local_154 = 2;
                    }
                    else {
                      iVar6 = 4;
                      bVar15 = true;
                      piVar12 = &DAT_00629250;
                      piVar14 = local_120;
                      do {
                        if (iVar6 == 0) break;
                        iVar6 = iVar6 + -1;
                        bVar15 = *piVar12 == *piVar14;
                        piVar12 = piVar12 + 1;
                        piVar14 = piVar14 + 1;
                      } while (bVar15);
                      if (bVar15) {
                        local_154 = 9;
                      }
                      else {
                        iVar6 = 4;
                        bVar15 = true;
                        piVar12 = &DAT_00629210;
                        piVar14 = local_120;
                        do {
                          if (iVar6 == 0) break;
                          iVar6 = iVar6 + -1;
                          bVar15 = *piVar12 == *piVar14;
                          piVar12 = piVar12 + 1;
                          piVar14 = piVar14 + 1;
                        } while (bVar15);
                        if (bVar15) {
                          local_154 = 5;
                        }
                      }
                    }
                  }
                }
                *(undefined2 *)(*(int *)(param_1 + 0x20) + 0xc + iVar10) = local_154;
                local_148 = local_148 + 0x40;
                local_144 = local_144 + iVar1;
                local_14c = local_14c + 1;
                iVar10 = iVar10 + 0x18;
                FUN_00588100(piVar5);
              }
              local_150 = local_150 + 1;
              iVar1 = local_14c;
            } while (local_150 < iVar8);
          }
          piVar5 = *(int **)(param_1 + 0x10);
          local_140 = local_140 + 1;
          local_158 = local_158 + 4;
        } while (local_140 < piVar5[1]);
      }
      _SfViewField_CreateSpread_28
                (*(undefined4 *)(param_1 + 4),&local_130,0x3e9,*(undefined4 *)(param_1 + 0x30),0,
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


