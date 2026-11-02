/* Module: vegas30.exe
   Function: FUN_00524ad0
   Address: 00524ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00524ad0(int param_1)

{
  int *piVar1;
  LRESULT LVar2;
  uint uVar3;
  BOOL BVar4;
  int iVar5;
  code *pcVar6;
  HWND pHVar7;
  int iVar8;
  HWND pHVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  HWND local_124;
  BOOL local_120;
  undefined1 local_11c [276];
  byte local_8;
  
  iVar8 = 0;
  piVar1 = *(int **)(param_1 + 0x84);
  if (piVar1 == (int *)0x0) {
    return;
  }
  local_120 = 0;
  if ((*piVar1 == -1) || (piVar1[1] <= *piVar1)) {
    iVar5 = 0;
    _SfList_CreateExZ_32(&local_124,4,10,0x40,2,0,0,0);
    LVar2 = SendMessageA(*(HWND *)(param_1 + 0xb0),0x605,0,(LPARAM)local_124);
    if (0 < LVar2) {
      do {
        FUN_00508ba0(*(undefined4 *)(*(int *)(local_124[2].unused + iVar8 * 4) + 0x20c),local_11c);
        if ((local_8 & 0x22) == 0) {
          iVar5 = iVar5 + 1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < LVar2);
    }
    _SfList_Destroy_4(local_124);
    if (0 < iVar5) {
      iVar8 = **(int **)(param_1 + 0x84);
      if ((iVar8 == -1) ||
         (((iVar8 == 1 && (iVar5 == 1)) || (iVar5 <= iVar8 - (*(int **)(param_1 + 0x84))[1])))) {
        local_120 = 1;
      }
    }
  }
  pHVar9 = (HWND)0x0;
  uVar3 = GetWindowLongA(*(HWND *)(param_1 + 0xc4),-0x10);
  if ((uVar3 & 1) == 0) {
    uVar3 = GetWindowLongA(*(HWND *)(param_1 + 200),-0x10);
    if ((uVar3 & 1) == 0) {
      uVar3 = GetWindowLongA(*(HWND *)(param_1 + 0xcc),-0x10);
      if ((uVar3 & 1) == 0) {
        uVar3 = GetWindowLongA(*(HWND *)(param_1 + 0xd0),-0x10);
        if ((uVar3 & 1) == 0) {
          uVar3 = GetWindowLongA(*(HWND *)(param_1 + 0xd4),-0x10);
          if ((uVar3 & 1) != 0) {
            pHVar9 = *(HWND *)(param_1 + 0xd4);
          }
        }
        else {
          pHVar9 = *(HWND *)(param_1 + 0xd0);
        }
      }
      else {
        pHVar9 = *(HWND *)(param_1 + 0xcc);
      }
    }
    else {
      pHVar9 = *(HWND *)(param_1 + 200);
    }
  }
  else {
    pHVar9 = *(HWND *)(param_1 + 0xc4);
  }
  local_124 = GetFocus();
  if (((local_124 != *(HWND *)(param_1 + 0xc4)) && (local_124 != *(HWND *)(param_1 + 200))) &&
     ((local_124 != *(HWND *)(param_1 + 0xcc) &&
      ((local_124 != *(HWND *)(param_1 + 0xd0) && (local_124 != *(HWND *)(param_1 + 0xd4))))))) {
    local_124 = (HWND)0x0;
  }
  EnableWindow(*(HWND *)(param_1 + 0xcc),local_120);
  uVar3 = (uint)(0 < *(int *)(*(int *)(param_1 + 0x84) + 4));
  EnableWindow(*(HWND *)(param_1 + 0xd0),uVar3);
  EnableWindow(*(HWND *)(param_1 + 0xd4),uVar3);
  pcVar6 = SendMessageA_exref;
  pHVar7 = local_124;
  if (pHVar9 == (HWND)0x0) {
LAB_00524ce1:
    if (pHVar7 != (HWND)0x0) goto LAB_00524ced;
LAB_00524d2f:
    BVar4 = IsWindowEnabled(*(HWND *)(param_1 + 0xcc));
    if (BVar4 == 0) {
      pHVar7 = *(HWND *)(param_1 + 0xc4);
    }
    else {
      pHVar7 = *(HWND *)(param_1 + 0xcc);
    }
    uVar3 = GetWindowLongA(pHVar7,-0x10);
    pHVar9 = (HWND)(uVar3 & 0xffff | 1);
    uVar11 = 0xf4;
  }
  else {
    BVar4 = IsWindowEnabled(pHVar9);
    pHVar7 = local_124;
    if (BVar4 == 0) {
LAB_00524cb4:
      uVar3 = GetWindowLongA(pHVar9,-0x10);
      pcVar6 = SendMessageA_exref;
      SendMessageA(pHVar9,0xf4,uVar3 & 0xfffe,1);
      goto LAB_00524ce1;
    }
    pcVar6 = SendMessageA_exref;
    if ((local_120 == 0) || (pHVar9 != *(HWND *)(param_1 + 0xc4))) goto LAB_00524ce1;
    if (local_124 == (HWND)0x0) goto LAB_00524cb4;
LAB_00524ced:
    BVar4 = IsWindowEnabled(pHVar7);
    if (BVar4 != 0) {
      if (pHVar7 != (HWND)0x0) goto LAB_00524d69;
      goto LAB_00524d2f;
    }
    pHVar9 = *(HWND *)(param_1 + 0xcc);
    if (((pHVar7 == pHVar9) || (local_120 == 0)) ||
       ((pHVar7 != *(HWND *)(param_1 + 0xd0) && (pHVar7 != *(HWND *)(param_1 + 0xd4))))) {
      pHVar9 = *(HWND *)(param_1 + 0xc4);
    }
    pHVar7 = *(HWND *)(param_1 + 8);
    uVar11 = 0x28;
  }
  (*pcVar6)(pHVar7,uVar11,pHVar9,1);
LAB_00524d69:
  uVar11 = 0x10;
  uVar10 = 0x10;
  if ((1 < *(int *)(*(int *)(param_1 + 0x84) + 4)) && (0 < *(int *)(param_1 + 0xec))) {
    uVar11 = 4;
  }
  (*pcVar6)(*(undefined4 *)(param_1 + 0xe4),0x411,0x193,uVar11);
  iVar8 = *(int *)(*(int *)(param_1 + 0x84) + 4);
  if ((1 < iVar8) && (*(int *)(param_1 + 0xec) < iVar8 + -1)) {
    uVar10 = 4;
  }
  (*pcVar6)(*(undefined4 *)(param_1 + 0xe4),0x411,0x194,uVar10);
  return;
}


