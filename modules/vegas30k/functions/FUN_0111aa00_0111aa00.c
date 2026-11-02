/* Module: vegas30k.dll
   Function: FUN_0111aa00
   Address: 0111aa00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0111aa00(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  RECT local_20;
  tagRECT local_10;
  
  if (1 < *(uint *)(param_2 + 0xb0)) {
    GetClientRect(param_1,&local_10);
    bVar9 = false;
    local_20.top = local_10.top;
    local_20.left = local_10.left;
    local_20.right = local_10.right;
    local_20.bottom = local_10.bottom;
    if ((param_3 != 0) || (*(int *)(param_2 + 0xc4) != 0)) {
      BVar2 = IsRectEmpty(&local_20);
      bVar9 = BVar2 == 0;
      if (bVar9) {
        *(undefined4 *)(param_2 + 0xc4) = 0;
      }
      else {
        *(undefined4 *)(param_2 + 0xc4) = 1;
      }
    }
    uVar8 = *(uint *)(param_2 + 0x8c) & 0xffffff8f;
    *(uint *)(param_2 + 0x8c) = uVar8;
    if (local_20.right < *(int *)(param_2 + 0xa0)) {
      local_20.right = *(int *)(param_2 + 0x68) - *(int *)(param_2 + 0x60) / 2;
      *(uint *)(param_2 + 0x8c) = uVar8 | 0x40;
    }
    iVar6 = *(int *)(param_2 + 0x60);
    local_20.left = iVar6;
    if (*(int *)(param_2 + 0x158) < iVar6) {
      local_20.left = iVar6 * 2;
    }
    iVar5 = *(int *)(param_2 + 0x158) - local_20.left;
    *(int *)(param_2 + 0xa8) = (iVar6 - local_20.left) + local_20.right;
    uVar8 = 0;
    *(LONG *)(param_2 + 0xac) = local_20.bottom - local_20.top;
    if (*(int *)(param_2 + 0xb0) != 0) {
      piVar4 = (int *)(param_2 + 0x160);
      do {
        piVar4[-2] = piVar4[-2] - iVar5;
        uVar8 = uVar8 + 1;
        *piVar4 = *piVar4 - iVar5;
        piVar4 = piVar4 + 0xe;
      } while (uVar8 < *(uint *)(param_2 + 0xb0));
    }
    if (((bVar9) && (iVar6 = *(int *)(param_2 + 0x10), -1 < iVar6)) &&
       (iVar6 < *(int *)(param_2 + 0xb0))) {
      iVar7 = *(int *)(param_2 + 0x60);
      iVar1 = *(int *)(param_2 + 0x160 + iVar6 * 0x38);
      if (local_20.right < iVar1 + iVar7 + iVar5) {
        iVar5 = (local_20.right - iVar1) - iVar7;
      }
      else {
        iVar6 = *(int *)(param_2 + 0x158 + iVar6 * 0x38);
        if (iVar6 + iVar5 < local_20.left) {
          iVar5 = local_20.left - iVar6;
        }
      }
      local_10.left = iVar7;
      if (*(int *)(param_2 + 0x158) + iVar5 < iVar7) {
        local_10.left = iVar7 * 2;
      }
      if (local_10.left != local_20.left) {
        local_20.left = local_10.left;
      }
    }
    else {
      iVar7 = *(int *)(param_2 + 0x60);
      local_20.left = iVar7;
      if (0 < *(int *)(param_2 + 0x9c)) {
        local_20.left = iVar7 * 2;
      }
      iVar5 = local_20.left - *(int *)(param_2 + 0x158 + *(int *)(param_2 + 0x9c) * 0x38);
    }
    iVar7 = (local_20.right - *(int *)(param_2 + 0xa0)) - iVar7;
    if ((iVar7 <= iVar5) && (iVar7 = iVar5, local_20.left < iVar5)) {
      iVar7 = local_20.left;
    }
    uVar8 = 0;
    if (*(int *)(param_2 + 0xb0) != 0) {
      piVar4 = (int *)(param_2 + 0x160);
      do {
        piVar4[-2] = piVar4[-2] + iVar7;
        uVar8 = uVar8 + 1;
        *piVar4 = *piVar4 + iVar7;
        piVar4 = piVar4 + 0xe;
      } while (uVar8 < *(uint *)(param_2 + 0xb0));
    }
    uVar8 = *(uint *)(param_2 + 0xb0);
    uVar3 = 0;
    *(undefined4 *)(param_2 + 0x9c) = 0;
    if (uVar8 != 0) {
      piVar4 = (int *)(param_2 + 0x158);
      do {
        if (local_20.left <= *piVar4) break;
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 0xe;
        *(uint *)(param_2 + 0x9c) = uVar3;
      } while (uVar3 < uVar8);
    }
    if (*(int *)(param_2 + 0x9c) == 0) {
      iVar6 = *(int *)(param_2 + 0x60) - *(int *)(param_2 + 0x158);
      uVar3 = 0;
      if (uVar8 != 0) {
        piVar4 = (int *)(param_2 + 0x160);
        do {
          piVar4[-2] = piVar4[-2] + iVar6;
          uVar3 = uVar3 + 1;
          *piVar4 = *piVar4 + iVar6;
          piVar4 = piVar4 + 0xe;
        } while (uVar3 < *(uint *)(param_2 + 0xb0));
      }
    }
    if (*(int *)(param_2 + 0x158) < local_20.left) {
      *(uint *)(param_2 + 0x8c) = *(uint *)(param_2 + 0x8c) | 0x10;
    }
    if (local_20.right <
        *(int *)(param_2 + 0x128 + *(int *)(param_2 + 0xb0) * 0x38) + *(int *)(param_2 + 0x60)) {
      *(uint *)(param_2 + 0x8c) = *(uint *)(param_2 + 0x8c) | 0x20;
    }
    FUN_011169e0(param_1,param_2);
  }
  return;
}


