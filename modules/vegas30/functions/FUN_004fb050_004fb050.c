/* Module: vegas30.exe
   Function: FUN_004fb050
   Address: 004fb050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fb050(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  int *piVar1;
  HWND pHVar2;
  undefined4 uVar3;
  HWND pHVar4;
  int iVar5;
  
  piVar1 = (int *)param_1[0x5f];
  if (*piVar1 != 0) {
    if (param_3 < -1) {
      param_3 = -1;
    }
    else {
      iVar5 = *piVar1 + -1;
      if (iVar5 < param_3) {
        param_3 = iVar5;
      }
    }
    if (param_4 == 0) {
      if (piVar1 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar1;
      }
      if ((param_3 < 0) || (iVar5 + -1 < param_3)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(piVar1[2] + param_3 * 4);
      }
    }
    else {
      if (piVar1 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar1;
      }
      if ((param_3 < 0) || (iVar5 + -1 < param_3)) {
        uVar3 = 0;
        param_6 = 0;
      }
      else {
        param_6 = 0;
        uVar3 = *(undefined4 *)(piVar1[2] + param_3 * 4);
      }
    }
    FUN_004faed0(param_1,uVar3,param_6);
    piVar1 = (int *)param_1[0x5e];
    if (piVar1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    if ((param_2 < 0) || (iVar5 + -1 < param_2)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(piVar1[2] + param_2 * 4);
    }
    if ((iVar5 != 0) && (param_3 != *(int *)(iVar5 + 0x150))) {
      pHVar4 = GetFocus();
      pHVar2 = (HWND)*param_1;
      if (pHVar4 == pHVar2) {
        FUN_004fabd0(param_1);
      }
      *(int *)(iVar5 + 0x150) = param_3;
      param_1[3] = param_1[3] | 0x800;
      InvalidateRect((HWND)*param_1,(RECT *)0x0,0);
      if (pHVar4 == pHVar2) {
        FUN_004fac30(param_1);
      }
    }
    if (param_5 != 0) {
      FUN_004fb160(param_1,param_3,0);
    }
  }
  return;
}


