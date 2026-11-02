/* Module: vegas30.exe
   Function: FUN_004fb8c0
   Address: 004fb8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fb8c0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)param_1[0x5f];
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  iVar3 = param_1[0x1f];
  iVar2 = param_1[0x70];
  if ((iVar3 < 0) || (iVar4 <= iVar3)) {
    param_1[0x70] = 0xffffffff;
  }
  else {
    param_1[0x70] = iVar3;
  }
  if (param_1[0x70] != iVar2) {
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if ((iVar2 < 0) || (iVar4 + -1 < iVar2)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(piVar1[2] + iVar2 * 4);
    }
    if (iVar4 != 0) {
      InvalidateRect((HWND)*param_1,(RECT *)(iVar4 + 0x108),0);
    }
    param_1[3] = param_1[3] | 0x800;
  }
  if (param_1[0xd] == 9) {
    if ((param_1[0x70] == -1) || (param_2 != 0)) {
      ReleaseCapture();
      param_1[0xd] = 0;
      FUN_004fa590(param_1,0);
      return;
    }
  }
  else if (param_1[0x70] != -1) {
    FUN_004fa590(param_1,1);
    SetCapture((HWND)*param_1);
    piVar1 = (int *)param_1[0x5e];
    iVar4 = param_1[0x60];
    param_1[0xd] = 9;
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if ((iVar4 < 0) || (iVar3 + -1 < iVar4)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(piVar1[2] + iVar4 * 4);
    }
    iVar3 = -1;
    if (iVar4 != 0) {
      iVar3 = *(int *)(iVar4 + 0x150);
    }
    piVar1 = (int *)param_1[0x5f];
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if ((iVar3 < 0) || (iVar4 + -1 < iVar3)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(piVar1[2] + iVar3 * 4);
    }
    if (iVar4 != 0) {
      InvalidateRect((HWND)*param_1,(RECT *)(iVar4 + 0x108),0);
    }
  }
  return;
}


