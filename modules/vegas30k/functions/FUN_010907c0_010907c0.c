/* Module: vegas30k.dll
   Function: FUN_010907c0
   Address: 010907c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010907c0(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  HWND hWnd;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  if (param_3 == 0) {
    if (param_2 == 0xc) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_2 + 1;
    }
    if ((*(int *)(param_1 + 0x134) == 0) && (iVar2 == 1)) {
      iVar2 = 2;
    }
    if ((uVar1 & 2) == 0) {
      if (iVar2 == 6) {
        iVar2 = 7;
      }
      else if (iVar2 == 0xc) {
        iVar2 = 0;
      }
    }
    if ((((uVar1 & 0x40) == 0) || (*(int *)(param_1 + 0x1f8) == 0)) && (iVar2 == 7)) {
      iVar2 = 8;
    }
    if (((uVar1 & 0x20) != 0) ||
       (((iVar2 != 9 && (iVar2 != 10)) && ((iVar2 != 0xb && (iVar2 != 0xc)))))) goto LAB_010908b0;
  }
  else {
    iVar2 = 0xc;
    if (param_2 != 0) {
      iVar2 = param_2 + -1;
    }
    if ((((uVar1 & 0x40) == 0) || (*(int *)(param_1 + 0x1f8) == 0)) && (iVar2 == 7)) {
      iVar2 = 6;
    }
    if (((uVar1 & 2) == 0) && ((iVar2 == 6 || (iVar2 == 0xc)))) {
      iVar2 = iVar2 + -1;
    }
    if (((uVar1 & 0x20) == 0) &&
       ((((iVar2 == 9 || (iVar2 == 10)) || (iVar2 == 0xb)) || (iVar2 == 0xc)))) {
      iVar2 = 8;
    }
    if ((*(int *)(param_1 + 0x134) != 0) || (iVar2 != 1)) goto LAB_010908b0;
  }
  iVar2 = 0;
LAB_010908b0:
  if (param_4 != 0) {
    *(int *)(param_1 + 0x140) = iVar2;
    if (iVar2 == 0) {
      hWnd = GetParent(*(HWND *)(param_1 + 8));
    }
    else if (iVar2 == 9) {
      hWnd = *(HWND *)(param_1 + 0x2dc);
    }
    else if (iVar2 == 10) {
      hWnd = *(HWND *)(param_1 + 0x2e0);
    }
    else if (iVar2 == 0xb) {
      hWnd = *(HWND *)(param_1 + 0x2e4);
    }
    else if (iVar2 == 0xc) {
      hWnd = *(HWND *)(param_1 + 0x2e8);
    }
    else {
      hWnd = *(HWND *)(param_1 + 8);
    }
    SetFocus(hWnd);
    FUN_0108ffa0(*(undefined4 *)(param_1 + 8));
  }
  return iVar2;
}


