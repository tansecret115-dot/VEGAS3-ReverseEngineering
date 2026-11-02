/* Module: sftrkfx1.dll
   Function: FUN_5cbaf550
   Address: 5cbaf550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbaf550(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  tagRECT local_10;
  
  if (1 < *(uint *)(param_2 + 0xa4)) {
    GetClientRect(param_1,&local_10);
    uVar4 = *(uint *)(param_2 + 0x80) & 0xffffff8f;
    *(uint *)(param_2 + 0x80) = uVar4;
    if (local_10.right < *(int *)(param_2 + 0x94)) {
      local_10.right = *(int *)(param_2 + 0x60) - *(int *)(param_2 + 0x58) / 2;
      *(uint *)(param_2 + 0x80) = uVar4 | 0x40;
    }
    iVar6 = *(int *)(param_2 + 0x58);
    iVar8 = iVar6;
    if (*(int *)(param_2 + 0xd0) < iVar6) {
      iVar8 = iVar6 * 2;
    }
    iVar5 = *(int *)(param_2 + 0xd0) - iVar8;
    *(int *)(param_2 + 0x9c) = (iVar6 - iVar8) + local_10.right;
    *(LONG *)(param_2 + 0xa0) = local_10.bottom - local_10.top;
    uVar4 = 0;
    if (*(int *)(param_2 + 0xa4) != 0) {
      piVar3 = (int *)(param_2 + 0xd8);
      do {
        piVar3[-2] = piVar3[-2] - iVar5;
        uVar4 = uVar4 + 1;
        *piVar3 = *piVar3 - iVar5;
        piVar3 = piVar3 + 0xe;
      } while (uVar4 < *(uint *)(param_2 + 0xa4));
    }
    if (((param_3 == 0) || (iVar6 = *(int *)(param_2 + 0x10), iVar6 < 0)) ||
       (*(int *)(param_2 + 0xa4) <= iVar6)) {
      iVar7 = *(int *)(param_2 + 0x58);
      iVar8 = iVar7;
      if (0 < *(int *)(param_2 + 0x90)) {
        iVar8 = iVar7 * 2;
      }
      iVar5 = iVar8 - *(int *)(param_2 + 0xd0 + *(int *)(param_2 + 0x90) * 0x38);
    }
    else {
      iVar1 = *(int *)(param_2 + 0xd8 + iVar6 * 0x38);
      iVar7 = *(int *)(param_2 + 0x58);
      if (local_10.right < iVar1 + iVar7 + iVar5) {
        iVar5 = (local_10.right - iVar1) - iVar7;
      }
      else {
        iVar6 = *(int *)(param_2 + 0xd0 + iVar6 * 0x38);
        if (iVar6 + iVar5 < iVar8) {
          iVar5 = iVar8 - iVar6;
        }
      }
    }
    iVar6 = (local_10.right - iVar7) - *(int *)(param_2 + 0x94);
    if ((iVar6 <= iVar5) && (iVar6 = iVar5, iVar8 < iVar5)) {
      iVar6 = iVar8;
    }
    uVar4 = 0;
    if (*(int *)(param_2 + 0xa4) != 0) {
      piVar3 = (int *)(param_2 + 0xd8);
      do {
        piVar3[-2] = piVar3[-2] + iVar6;
        uVar4 = uVar4 + 1;
        *piVar3 = *piVar3 + iVar6;
        piVar3 = piVar3 + 0xe;
      } while (uVar4 < *(uint *)(param_2 + 0xa4));
    }
    uVar4 = *(uint *)(param_2 + 0xa4);
    uVar2 = 0;
    *(undefined4 *)(param_2 + 0x90) = 0;
    if (uVar4 != 0) {
      piVar3 = (int *)(param_2 + 0xd0);
      do {
        if (iVar8 <= *piVar3) break;
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 0xe;
        *(uint *)(param_2 + 0x90) = uVar2;
      } while (uVar2 < uVar4);
    }
    if (*(int *)(param_2 + 0x90) == 0) {
      iVar6 = *(int *)(param_2 + 0x58) - *(int *)(param_2 + 0xd0);
      uVar2 = 0;
      if (uVar4 != 0) {
        piVar3 = (int *)(param_2 + 0xd8);
        do {
          piVar3[-2] = piVar3[-2] + iVar6;
          uVar2 = uVar2 + 1;
          *piVar3 = *piVar3 + iVar6;
          piVar3 = piVar3 + 0xe;
        } while (uVar2 < *(uint *)(param_2 + 0xa4));
      }
    }
    if (*(int *)(param_2 + 0xd0) < iVar8) {
      *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) | 0x10;
    }
    if (local_10.right <
        *(int *)(param_2 + 0xa0 + *(int *)(param_2 + 0xa4) * 0x38) + *(int *)(param_2 + 0x58)) {
      *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) | 0x20;
    }
  }
  return;
}


