/* Module: vegas30.exe
   Function: FUN_00416ab0
   Address: 00416ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00416ab0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  POINT pt;
  HWND pHVar4;
  BOOL BVar5;
  HWND pHVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  RECT local_30;
  RECT local_20;
  RECT local_10;
  
  iVar9 = (int)(short)param_4;
  iVar10 = (int)(short)((uint)param_4 >> 0x10);
  local_30.left = iVar9;
  local_30.top = iVar10;
  if (param_2 < 0x203) {
    if (param_2 == 0x202) {
      iVar9 = *(int *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0xa4) = 0;
      pHVar6 = GetCapture();
      if (pHVar6 == *(HWND *)(param_1 + 8)) {
        ReleaseCapture();
      }
      if (iVar9 == 2) {
        FUN_00415920(param_1,0x602,0,0,0);
        return 0;
      }
    }
    else if (param_2 == 0x1f) {
      puVar2 = *(uint **)(param_1 + 0x8c);
      if (puVar2 == (uint *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *puVar2;
      }
      if ((int)(uVar7 - 1) < 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = puVar2[2];
      }
      if (*(int *)(param_1 + 0xa4) == 2) {
        if (puVar2 == (uint *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *puVar2;
        }
        uVar3 = *(uint *)(param_1 + 0x94);
        if ((uVar3 != 0) && (uVar3 <= uVar8)) {
          *(undefined4 *)(uVar7 + uVar3 * 0x48) = *(undefined4 *)(param_1 + 0x98);
          *(undefined4 *)(uVar7 + 0x10 + *(int *)(param_1 + 0x94) * 0x48) =
               *(undefined4 *)(param_1 + 0x98);
          FUN_004159e0(param_1,0,0,0);
        }
        FUN_00415920(param_1,0x602,0,0,0);
      }
      *(undefined4 *)(param_1 + 0xa4) = 0;
      pHVar6 = GetCapture();
      if (pHVar6 == *(HWND *)(param_1 + 8)) {
        ReleaseCapture();
        return 0;
      }
    }
    else if (param_2 == 0x200) {
      pHVar6 = *(HWND *)(param_1 + 8);
      pHVar4 = GetCapture();
      if (pHVar4 == pHVar6) {
        piVar1 = *(int **)(param_1 + 0x8c);
        if (piVar1 == (int *)0x0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *piVar1;
        }
        if (iVar10 + -1 < 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = piVar1[2];
        }
        if (*(int *)(param_1 + 0xa4) == 1) {
          iVar9 = GetSystemMetrics(0x44);
          iVar11 = (iVar9 + 1) / 2;
          iVar9 = GetSystemMetrics(0x45);
          local_10.left = *(int *)(param_1 + 0xa8) - iVar11;
          local_10.right = *(int *)(param_1 + 0xa8) + iVar11;
          local_10.top = (iVar9 + 1) / 2;
          local_10.bottom = *(int *)(param_1 + 0xac) + local_10.top;
          local_10.top = *(int *)(param_1 + 0xac) - local_10.top;
          pt.y = local_30.top;
          pt.x = local_30.left;
          BVar5 = PtInRect(&local_10,pt);
          if (BVar5 == 0) {
            FUN_004165e0(param_1,0);
            uVar7 = *(uint *)(param_1 + 0x94);
            *(undefined4 *)(param_1 + 0xa4) = 2;
            iVar9 = iVar10 + uVar7 * 0x48;
            *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar10 + uVar7 * 0x48);
            *(undefined4 *)(param_1 + 0x9c) = 0;
            if (1 < uVar7) {
              *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(iVar9 + -0x48);
            }
            iVar10 = *(int *)(iVar9 + 8);
            *(int *)(param_1 + 0xa0) = iVar10;
            iVar11 = *(int *)(iVar9 + 0x20) + *(int *)(param_1 + 0x9c);
            if (iVar10 <= iVar11) {
              iVar11 = iVar10;
            }
            *(int *)(param_1 + 0x9c) = iVar11;
            iVar9 = *(int *)(param_1 + 0xa0) - *(int *)(iVar9 + 0x20);
            if (iVar9 < iVar11) {
              iVar9 = iVar11;
            }
            *(int *)(param_1 + 0xa0) = iVar9;
            *(undefined4 *)(param_1 + 0xb4) = 0;
            *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0x98);
            return 0;
          }
        }
        else if (*(int *)(param_1 + 0xa4) == 2) {
          iVar11 = *(int *)(param_1 + 0x9c);
          iVar9 = (*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0xa8)) + iVar9;
          if ((iVar9 < iVar11) || (iVar11 = *(int *)(param_1 + 0xa0), iVar11 < iVar9)) {
            iVar9 = iVar11;
          }
          if (*(int *)(iVar10 + *(int *)(param_1 + 0x94) * 0x48) != iVar9) {
            local_30.left = iVar9 + -7;
            local_30.top = 0;
            local_30.bottom = *(LONG *)(*(int *)(param_1 + 4) + 0xc);
            local_30.right = iVar9;
            InvalidateRect(pHVar6,&local_30,1);
            local_20.right = *(LONG *)(param_1 + 0x80);
            local_20.left = 0;
            local_20.top = 0;
            local_20.bottom = 1;
            InvalidateRect(*(HWND *)(param_1 + 8),&local_20,1);
            local_10.bottom = *(int *)(param_1 + 0x84);
            local_10.right = *(LONG *)(param_1 + 0x80);
            local_10.top = local_10.bottom + -1;
            local_10.left = 0;
            InvalidateRect(*(HWND *)(param_1 + 8),&local_10,1);
            *(int *)(iVar10 + *(int *)(param_1 + 0x94) * 0x48) = iVar9;
            *(int *)(iVar10 + 0x10 + *(int *)(param_1 + 0x94) * 0x48) = iVar9;
            FUN_004159e0(param_1,0,0,0);
            UpdateWindow(*(HWND *)(param_1 + 8));
            return 0;
          }
        }
      }
    }
    else if ((param_2 == 0x201) && (*(int *)(param_1 + 0xa4) == 0)) {
      if (((byte)DAT_0064761c & 2) == 0) {
        SetFocus(DAT_00647624);
      }
      if (*(int *)(param_1 + 0x90) == 1) {
        *(undefined4 *)(param_1 + 0xa4) = 1;
        SetCapture(*(HWND *)(param_1 + 8));
        *(int *)(param_1 + 0xa8) = iVar9;
        *(int *)(param_1 + 0xac) = iVar10;
        return 0;
      }
    }
  }
  else if (((param_2 == 0x204) || (param_2 == 0x207)) && (((byte)DAT_0064761c & 2) == 0)) {
    SetFocus(DAT_00647624);
  }
  return 0;
}


