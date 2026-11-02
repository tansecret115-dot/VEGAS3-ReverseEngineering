/* Module: vidcap30.exe
   Function: FUN_0040e1c0
   Address: 0040e1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040e1c0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  HWND pHVar7;
  HWND pHVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  RECT local_30;
  RECT local_20;
  RECT local_10;
  
  iVar6 = param_1;
  iVar11 = (int)(short)param_4;
  iVar12 = (int)(short)((uint)param_4 >> 0x10);
  local_30.left = iVar11;
  local_30.top = iVar12;
  if (param_2 < 0x203) {
    if (param_2 == 0x202) {
      iVar6 = *(int *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0xa4) = 0;
      pHVar8 = GetCapture();
      if (pHVar8 == *(HWND *)(param_1 + 8)) {
        ReleaseCapture();
      }
      if (iVar6 == 4) {
        FUN_0040d060(param_1,0x602,0,0,0);
        return 0;
      }
    }
    else if (param_2 == 0x1f) {
      puVar4 = *(uint **)(param_1 + 0x8c);
      if (puVar4 == (uint *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *puVar4;
      }
      if ((int)(uVar9 - 1) < 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = puVar4[2];
      }
      if (*(int *)(param_1 + 0xa4) == 4) {
        if (puVar4 == (uint *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *puVar4;
        }
        uVar5 = *(uint *)(param_1 + 0x94);
        if ((uVar5 != 0) && (uVar5 <= uVar10)) {
          *(undefined4 *)(uVar9 + uVar5 * 0x48) = *(undefined4 *)(param_1 + 0x98);
          *(undefined4 *)(uVar9 + 0x10 + *(int *)(param_1 + 0x94) * 0x48) =
               *(undefined4 *)(param_1 + 0x98);
          FUN_0040d120(param_1,0,0,0);
        }
        FUN_0040d060(param_1,0x602,0,0,0);
      }
      *(undefined4 *)(param_1 + 0xa4) = 0;
      pHVar8 = GetCapture();
      if (pHVar8 == *(HWND *)(param_1 + 8)) {
        ReleaseCapture();
        return 0;
      }
    }
    else if (param_2 == 0x200) {
      pHVar8 = *(HWND *)(param_1 + 8);
      pHVar7 = GetCapture();
      if (pHVar7 == pHVar8) {
        piVar2 = *(int **)(param_1 + 0x8c);
        if (piVar2 == (int *)0x0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *piVar2;
        }
        if (iVar12 + -1 < 0) {
          param_1 = 0;
        }
        else {
          param_1 = piVar2[2];
        }
        if (*(int *)(iVar6 + 0xa4) == 4) {
          iVar12 = *(int *)(iVar6 + 0x9c);
          iVar11 = (*(int *)(iVar6 + 0x98) - *(int *)(iVar6 + 0xa8)) + iVar11;
          if ((iVar11 < iVar12) || (iVar12 = *(int *)(iVar6 + 0xa0), iVar12 < iVar11)) {
            iVar11 = iVar12;
          }
          if (*(int *)(param_1 + *(int *)(iVar6 + 0x94) * 0x48) != iVar11) {
            local_30.left = iVar11 + -7;
            local_30.top = 0;
            local_30.bottom = *(LONG *)(*(int *)(iVar6 + 4) + 0xc);
            local_30.right = iVar11;
            InvalidateRect(pHVar8,&local_30,1);
            local_20.right = *(LONG *)(iVar6 + 0x80);
            local_20.left = 0;
            local_20.top = 0;
            local_20.bottom = 1;
            InvalidateRect(*(HWND *)(iVar6 + 8),&local_20,1);
            local_10.bottom = *(int *)(iVar6 + 0x84);
            local_10.right = *(LONG *)(iVar6 + 0x80);
            local_10.top = local_10.bottom + -1;
            local_10.left = 0;
            InvalidateRect(*(HWND *)(iVar6 + 8),&local_10,1);
            *(int *)(param_1 + *(int *)(iVar6 + 0x94) * 0x48) = iVar11;
            *(int *)(param_1 + 0x10 + *(int *)(iVar6 + 0x94) * 0x48) = iVar11;
            FUN_0040d120(iVar6,0,0,0);
            UpdateWindow(*(HWND *)(iVar6 + 8));
            return 0;
          }
        }
        else if (*(int *)(iVar6 + 0xa4) == 5) {
          iVar11 = GetSystemMetrics(0x44);
          iVar12 = (iVar11 + 1) / 2;
          iVar11 = GetSystemMetrics(0x45);
          iVar11 = (iVar11 + 1) / 2;
          if ((((local_30.left < *(int *)(iVar6 + 0xa8) - iVar12) ||
               (iVar12 + *(int *)(iVar6 + 0xa8) <= local_30.left)) ||
              (local_30.top < *(int *)(iVar6 + 0xac) - iVar11)) ||
             (iVar11 + *(int *)(iVar6 + 0xac) <= local_30.top)) {
            FUN_0040dcf0(iVar6,0);
            *(undefined4 *)(iVar6 + 0xa4) = 4;
            puVar1 = (undefined4 *)(param_1 + *(uint *)(iVar6 + 0x94) * 0x48);
            uVar3 = *puVar1;
            *(undefined4 *)(iVar6 + 0x9c) = 0;
            *(undefined4 *)(iVar6 + 0x98) = uVar3;
            if (1 < *(uint *)(iVar6 + 0x94)) {
              *(undefined4 *)(iVar6 + 0x9c) = puVar1[-0x12];
            }
            iVar11 = puVar1[2];
            *(int *)(iVar6 + 0xa0) = iVar11;
            iVar12 = puVar1[8] + *(int *)(iVar6 + 0x9c);
            if (iVar11 <= iVar12) {
              iVar12 = iVar11;
            }
            *(int *)(iVar6 + 0x9c) = iVar12;
            iVar11 = *(int *)(iVar6 + 0xa0) - puVar1[8];
            if (iVar11 < iVar12) {
              iVar11 = iVar12;
            }
            *(int *)(iVar6 + 0xa0) = iVar11;
            *(undefined4 *)(iVar6 + 0xb4) = 0;
            *(int *)(iVar6 + 0xb0) = *(int *)(iVar6 + 0xa8) - *(int *)(iVar6 + 0x98);
            return 0;
          }
        }
      }
    }
    else if ((param_2 == 0x201) && (*(int *)(param_1 + 0xa4) == 0)) {
      if (((byte)DAT_005ba4b4 & 2) == 0) {
        SetFocus(DAT_005ba4bc);
      }
      if (*(int *)(param_1 + 0x90) == 1) {
        *(undefined4 *)(param_1 + 0xa4) = 5;
        SetCapture(*(HWND *)(param_1 + 8));
        *(int *)(param_1 + 0xa8) = iVar11;
        *(int *)(param_1 + 0xac) = iVar12;
        return 0;
      }
    }
  }
  else if (((param_2 == 0x204) || (param_2 == 0x207)) && (((byte)DAT_005ba4b4 & 2) == 0)) {
    SetFocus(DAT_005ba4bc);
  }
  return 0;
}


