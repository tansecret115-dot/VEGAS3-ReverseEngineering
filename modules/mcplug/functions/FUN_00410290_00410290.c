/* Module: mcplug.dll
   Function: FUN_00410290
   Address: 00410290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00410290(void *this,HWND param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  short sVar2;
  HWND hWnd;
  HWND pHVar3;
  uint uVar4;
  uchar local_40 [64];
  
  pHVar3 = param_1;
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x44) + 0x424) + 0x3e);
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      *(HWND *)((int)this + 0x10) = param_1;
      FUN_00410a10(this);
      return 1;
    }
    if (param_2 != 2) {
      if (param_2 != 0x53) {
        return 0;
      }
      FUN_00418240(0,param_1,0,*(int *)(param_4 + 8),(int *)&DAT_00486208,(uchar *)0x0);
      return 1;
    }
    *(undefined4 *)((int)this + 0x10) = 0;
    return 0;
  }
  if (param_2 != 0x111) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x24) = 1;
  switch(param_3 & 0xffff) {
  case 0x40c:
    FUN_004167c0(&param_4,param_1,(int *)&param_2,(int *)&param_1,0,
                 *(undefined1 **)((int)this + 0x5c));
    FUN_00415880(pHVar3,*(int *)((int)this + 0x5c));
    return 0;
  default:
    goto switchD_00410351_caseD_40d;
  case 0x418:
  case 0x41b:
  case 0x41c:
  case 0x41e:
  case 0x425:
  case 0x428:
  case 0x429:
  case 0x42e:
  case 0x44a:
  case 1099:
  case 0x451:
  case 0x452:
  case 0x453:
  case 0x454:
  case 0x45a:
  case 0x45c:
  case 0x46f:
switchD_00410351_caseD_418:
    *(undefined4 *)((int)this + 0x24) = 1;
    return 0;
  case 0x471:
    break;
  }
  sVar2 = (short)(param_3 >> 0x10);
  if ((sVar2 == 5) || (sVar2 == 1)) goto switchD_00410351_caseD_418;
  if (sVar2 != 4) {
    return 0;
  }
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(int *)(iVar1 + 0x90) == 0) || (*(int *)(iVar1 + 0x90) == 1)) {
    hWnd = GetDlgItem(param_1,0x471);
    GetWindowTextA(hWnd,(LPSTR)local_40,0x40);
    uVar4 = FUN_00430020((LPCSTR)local_40,(undefined4 *)0x0);
    if ((int)uVar4 < 0x14) {
      uVar4 = 0x14;
    }
    else if (0x7fe < (int)uVar4) {
      uVar4 = 0x7fe;
    }
    goto LAB_00410513;
  }
  switch(*(undefined4 *)(iVar1 + 0xfc)) {
  case 4:
    hWnd = GetDlgItem(param_1,0x471);
    GetWindowTextA(hWnd,(LPSTR)local_40,0x40);
    uVar4 = FUN_00430020((LPCSTR)local_40,(undefined4 *)0x0);
    if ((int)uVar4 < 0x14) {
      uVar4 = 0x14;
    }
    else if (0x4aa < (int)uVar4) {
      uVar4 = 0x4aa;
    }
    break;
  default:
    goto switchD_004103c1_caseD_5;
  case 6:
    hWnd = GetDlgItem(param_1,0x471);
    GetWindowTextA(hWnd,(LPSTR)local_40,0x40);
    uVar4 = FUN_00430020((LPCSTR)local_40,(undefined4 *)0x0);
    if ((int)uVar4 < 0x14) {
      uVar4 = 0x14;
    }
    else if (0x380 < (int)uVar4) {
      uVar4 = 0x380;
    }
    goto LAB_004104c7;
  case 8:
    hWnd = GetDlgItem(param_1,0x471);
    GetWindowTextA(hWnd,(LPSTR)local_40,0x40);
    uVar4 = FUN_00430020((LPCSTR)local_40,(undefined4 *)0x0);
    if ((int)uVar4 < 0x14) {
      uVar4 = 0x14;
    }
    else if (0xe0 < (int)uVar4) {
      uVar4 = 0xe0;
    }
    break;
  case 10:
    hWnd = GetDlgItem(param_1,0x471);
    GetWindowTextA(hWnd,(LPSTR)local_40,0x40);
    uVar4 = FUN_00430020((LPCSTR)local_40,(undefined4 *)0x0);
    if ((int)uVar4 < 0x14) {
      uVar4 = 0x14;
    }
    else if (0x3a < (int)uVar4) {
      uVar4 = 0x3a;
    }
LAB_004104c7:
    FUN_0042f8b0(uVar4,local_40,0);
    goto LAB_00410525;
  }
LAB_00410513:
  FUN_0042f8b0(uVar4,local_40,0);
LAB_00410525:
  SetWindowTextA(hWnd,(LPCSTR)local_40);
switchD_004103c1_caseD_5:
  pHVar3 = GetDlgItem(pHVar3,0x471);
  GetWindowTextA(pHVar3,(LPSTR)local_40,0x40);
  uVar4 = FUN_00430020((LPCSTR)local_40,(undefined4 *)0x0);
  uVar4 = uVar4 + (uVar4 & 1);
  FUN_0042f8b0(uVar4,local_40,0);
  SetWindowTextA(pHVar3,(LPCSTR)local_40);
  if ((*(int *)(iVar1 + 0x98) == 1) && (0x28 < (int)uVar4)) {
    *(undefined4 *)(iVar1 + 0x98) = 0;
    return 0;
  }
switchD_00410351_caseD_40d:
  return 0;
}


