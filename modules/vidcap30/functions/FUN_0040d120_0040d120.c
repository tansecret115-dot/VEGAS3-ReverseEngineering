/* Module: vidcap30.exe
   Function: FUN_0040d120
   Address: 0040d120
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040d120(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  LPRECT lprc;
  int iVar12;
  HDWP local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_14;
  tagRECT local_10;
  
  GetClientRect(*(HWND *)(param_1 + 8),&local_10);
  iVar2 = **(int **)(param_1 + 0x8c);
  iVar5 = **(int **)(param_1 + 0x88);
  if (iVar2 != 0) {
    InflateRect(&local_10,-1,-1);
    iVar4 = 0;
    iVar10 = *(int *)(*(int *)(param_1 + 0x8c) + 8);
    local_3c = -1;
    iVar12 = local_3c;
    if (0 < iVar2) {
      piVar9 = (int *)(iVar10 + 0x28);
      do {
        if ((*piVar9 != 0) && (iVar12 = iVar4, (*(byte *)(*piVar9 + 0xe) & 4) != 0)) break;
        iVar4 = iVar4 + 1;
        piVar9 = piVar9 + 0x12;
        iVar12 = local_3c;
      } while (iVar4 < iVar2);
    }
    local_3c = iVar12;
    local_40 = BeginDeferWindowPos(iVar5 + iVar2);
    local_14 = local_10.bottom;
    iVar5 = _SfGetUIFontSize_4(0x68);
    iVar5 = *(int *)(iVar5 + 4);
    if (((((((byte)DAT_005ba4b4 & 1) != 0) && (local_3c < 0)) && (1 < iVar2)) &&
        ((param_4 == 0 &&
         (iVar12 = local_10.right - *(int *)(iVar10 + -0x30 + iVar2 * 0x48), iVar12 != 0)))) &&
       (*(int *)(iVar10 + 0x18) = *(int *)(iVar10 + 0x18) + iVar12, 1 < iVar2)) {
      param_4 = iVar2 + -1;
      lprc = (LPRECT)(iVar10 + 0x58);
      do {
        OffsetRect(lprc,iVar12,0);
        lprc = (LPRECT)&lprc[4].right;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    local_38 = 0;
    if (0 < iVar2) {
      piVar9 = (int *)(iVar10 + 0x20);
      iVar10 = local_10.left;
      local_34 = iVar2;
      do {
        local_34 = local_34 + -1;
        iVar12 = piVar9[2];
        uVar1 = local_38 + 1;
        iVar4 = local_10.right;
        if ((int)uVar1 < iVar2) {
          if (local_3c < 0) {
            iVar4 = piVar9[0xe];
            if (local_10.right - *piVar9 <= piVar9[0xe]) {
              iVar4 = local_10.right - *piVar9;
            }
          }
          else if ((int)local_38 < local_3c) {
            iVar4 = *piVar9 + iVar10;
          }
          else if (local_3c < (int)local_38) {
            iVar4 = *piVar9 + iVar10;
          }
          else {
            iVar4 = local_10.right - local_34 * *piVar9;
          }
          iVar4 = iVar4 + -7;
        }
        if (iVar4 <= *piVar9 + iVar10) {
          iVar4 = *piVar9 + iVar10;
        }
        if (local_10.right <= iVar4) {
          iVar4 = local_10.right;
        }
        piVar9[-8] = iVar10;
        piVar9[-7] = local_10.top;
        piVar9[-6] = iVar4;
        piVar9[-5] = local_14;
        if (local_3c < 0) {
          piVar9[-4] = iVar10;
          piVar9[-3] = local_10.top;
          piVar9[-2] = iVar4;
          piVar9[-1] = local_14;
        }
        if ((int *)piVar9[3] == (int *)0x0) {
          param_4 = 0;
        }
        else {
          param_4 = *(int *)piVar9[3];
        }
        if (piVar9[9] != 0) {
          piVar9[5] = iVar10;
          piVar9[6] = local_10.top;
          piVar9[7] = iVar4;
          piVar9[8] = local_14;
          local_14 = local_14 - (iVar5 + 7);
          if (local_14 < local_10.top) {
            local_14 = local_10.top;
          }
          iVar3 = piVar9[5];
          piVar9[6] = local_14;
          local_40 = DeferWindowPos(local_40,(HWND)piVar9[9],(HWND)0x0,iVar3,local_14,
                                    piVar9[7] - iVar3,piVar9[8] - local_14,0x10);
        }
        if (iVar12 != 0) {
          local_40 = DeferWindowPos(local_40,*(HWND *)(iVar12 + 8),(HWND)0x0,iVar10,local_10.top,
                                    iVar4 - iVar10,local_14 - local_10.top,0x14);
          *(uint *)(iVar12 + 0x10) =
               ((int)(short)piVar9[-8] << 8 | local_38 & 0xf) << 8 | *(uint *)(iVar12 + 0x10) & 0xdf
               | 0x20;
          BVar6 = IsWindowVisible(*(HWND *)(iVar12 + 8));
          if (BVar6 == 0) {
            SetWindowPos(*(HWND *)(iVar12 + 8),(HWND)0x0,0,0,0,0,0x53);
          }
        }
        if ((1 < param_4) && (uVar11 = 0, 0 < param_4)) {
          do {
            iVar3 = *(int *)(*(int *)(piVar9[3] + 8) + uVar11 * 4);
            uVar7 = ((int)(short)piVar9[-8] << 4 | uVar11 & 0xf) << 0xc |
                    *(uint *)(iVar3 + 0x10) & 0xef | (local_38 & 0xf) << 8;
            uVar8 = uVar7 | 0x10;
            *(uint *)(iVar3 + 0x10) = uVar8;
            if (iVar3 != iVar12) {
              *(uint *)(iVar3 + 0x10) = CONCAT31((int3)(uVar7 >> 8),(char)uVar8) & 0xffffffdf;
              SetWindowPos(*(HWND *)(iVar3 + 8),(HWND)0x0,iVar10,local_10.top,iVar4 - iVar10,
                           local_14 - local_10.top,0x94);
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < param_4);
        }
        if ((param_3 != 0) && (iVar12 == param_2)) {
          *(int *)(param_3 + 0x1c) = iVar10;
          *(LONG *)(param_3 + 0x20) = local_10.top;
          *(int *)(param_3 + 0x24) = iVar4;
          *(int *)(param_3 + 0x28) = local_14;
        }
        local_14 = local_10.bottom;
        iVar10 = iVar4 + 7;
        piVar9 = piVar9 + 0x12;
        local_38 = uVar1;
      } while ((int)uVar1 < iVar2);
    }
    EndDeferWindowPos(local_40);
    if (*(int *)(param_1 + 0xa4) != 4) {
      FUN_0040d060(param_1,0x602,0,0,0);
    }
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,1);
  }
  return;
}


