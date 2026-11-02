/* Module: vegas30.exe
   Function: FUN_004159e0
   Address: 004159e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004159e0(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  LPRECT lprc;
  uint uVar12;
  HDWP local_38;
  int local_34;
  int local_2c;
  int local_18;
  int local_14;
  tagRECT local_10;
  
  GetClientRect(*(HWND *)(param_1 + 8),&local_10);
  iVar2 = **(int **)(param_1 + 0x8c);
  iVar4 = **(int **)(param_1 + 0x88);
  if (iVar2 != 0) {
    InflateRect(&local_10,-1,-1);
    local_34 = -1;
    iVar8 = *(int *)(*(int *)(param_1 + 0x8c) + 8);
    iVar3 = 0;
    iVar9 = local_34;
    if (0 < iVar2) {
      piVar11 = (int *)(iVar8 + 0x28);
      do {
        if ((*piVar11 != 0) && (iVar9 = iVar3, (*(uint *)(*piVar11 + 0xc) & 0x40000) != 0)) break;
        iVar3 = iVar3 + 1;
        piVar11 = piVar11 + 0x12;
        iVar9 = local_34;
      } while (iVar3 < iVar2);
    }
    local_34 = iVar9;
    local_38 = BeginDeferWindowPos(iVar2 + iVar4);
    local_14 = local_10.bottom;
    iVar4 = _SfGetUIFontSize_4(0x68);
    iVar4 = *(int *)(iVar4 + 4);
    if (((((((byte)DAT_0064761c & 1) != 0) && (local_34 < 0)) && (1 < iVar2)) &&
        ((param_4 == 0 &&
         (iVar9 = local_10.right - *(int *)(iVar8 + -0x30 + iVar2 * 0x48), iVar9 != 0)))) &&
       (*(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + iVar9, 1 < iVar2)) {
      lprc = (LPRECT)(iVar8 + 0x58);
      iVar3 = iVar2 + -1;
      do {
        OffsetRect(lprc,iVar9,0);
        lprc = (LPRECT)&lprc[4].right;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (0 < iVar2) {
      piVar11 = (int *)(iVar8 + 0x20);
      iVar8 = local_10.left;
      uVar10 = 0;
      local_2c = iVar2;
      do {
        local_2c = local_2c + -1;
        iVar9 = piVar11[2];
        uVar1 = uVar10 + 1;
        local_18 = local_10.right;
        if ((int)uVar1 < iVar2) {
          if (local_34 < 0) {
            iVar3 = local_10.right - *piVar11;
            if (piVar11[0xe] < local_10.right - *piVar11) {
              iVar3 = piVar11[0xe];
            }
          }
          else if ((int)uVar10 < local_34) {
            iVar3 = *piVar11 + iVar8;
          }
          else if (local_34 < (int)uVar10) {
            iVar3 = *piVar11 + iVar8;
          }
          else {
            iVar3 = local_10.right - local_2c * *piVar11;
          }
          local_18 = iVar3 + -7;
        }
        if (local_18 <= *piVar11 + iVar8) {
          local_18 = *piVar11 + iVar8;
        }
        if (local_10.right <= local_18) {
          local_18 = local_10.right;
        }
        piVar11[-8] = iVar8;
        piVar11[-7] = local_10.top;
        piVar11[-6] = local_18;
        piVar11[-5] = local_14;
        if (local_34 < 0) {
          piVar11[-4] = iVar8;
          piVar11[-3] = local_10.top;
          piVar11[-2] = local_18;
          piVar11[-1] = local_14;
        }
        if ((int *)piVar11[3] == (int *)0x0) {
          param_4 = 0;
        }
        else {
          param_4 = *(int *)piVar11[3];
        }
        if (piVar11[9] != 0) {
          piVar11[5] = iVar8;
          piVar11[6] = local_10.top;
          piVar11[7] = local_18;
          piVar11[8] = local_14;
          local_14 = local_14 - (iVar4 + 7);
          if (local_14 < local_10.top) {
            local_14 = local_10.top;
          }
          piVar11[6] = local_14;
          iVar3 = piVar11[5];
          local_38 = DeferWindowPos(local_38,(HWND)piVar11[9],(HWND)0x0,iVar3,piVar11[6],
                                    piVar11[7] - iVar3,piVar11[8] - piVar11[6],0x10);
        }
        if (iVar9 != 0) {
          local_38 = DeferWindowPos(local_38,*(HWND *)(iVar9 + 8),(HWND)0x0,iVar8,local_10.top,
                                    local_18 - iVar8,local_14 - local_10.top,0x14);
          *(uint *)(iVar9 + 0x10) =
               ((int)(short)piVar11[-8] << 8 | uVar10 & 0xf) << 8 | *(uint *)(iVar9 + 0x10) & 0xdf |
               0x20;
          BVar5 = IsWindowVisible(*(HWND *)(iVar9 + 8));
          if (BVar5 == 0) {
            SetWindowPos(*(HWND *)(iVar9 + 8),(HWND)0x0,0,0,0,0,0x53);
          }
        }
        if ((1 < param_4) && (uVar12 = 0, 0 < param_4)) {
          do {
            iVar3 = *(int *)(*(int *)(piVar11[3] + 8) + uVar12 * 4);
            uVar6 = ((int)(short)piVar11[-8] << 4 | uVar12 & 0xf) << 0xc |
                    *(uint *)(iVar3 + 0x10) & 0xef | (uVar10 & 0xf) << 8;
            uVar7 = uVar6 | 0x10;
            *(uint *)(iVar3 + 0x10) = uVar7;
            if (iVar3 != iVar9) {
              *(uint *)(iVar3 + 0x10) = CONCAT31((int3)(uVar6 >> 8),(char)uVar7) & 0xffffffdf;
              SetWindowPos(*(HWND *)(iVar3 + 8),(HWND)0x0,iVar8,local_10.top,local_18 - iVar8,
                           local_14 - local_10.top,0x94);
            }
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < param_4);
        }
        if ((param_3 != 0) && (iVar9 == param_2)) {
          *(int *)(param_3 + 0x1c) = iVar8;
          *(LONG *)(param_3 + 0x20) = local_10.top;
          *(int *)(param_3 + 0x24) = local_18;
          *(int *)(param_3 + 0x28) = local_14;
        }
        iVar8 = local_18 + 7;
        local_14 = local_10.bottom;
        piVar11 = piVar11 + 0x12;
        uVar10 = uVar1;
      } while ((int)uVar1 < iVar2);
    }
    EndDeferWindowPos(local_38);
    if (*(int *)(param_1 + 0xa4) != 2) {
      FUN_00415920(param_1,0x602,0,0,0);
    }
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,1);
  }
  return;
}


