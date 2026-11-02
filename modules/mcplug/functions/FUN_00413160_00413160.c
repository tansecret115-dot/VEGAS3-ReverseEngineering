/* Module: mcplug.dll
   Function: FUN_00413160
   Address: 00413160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00413160(void *this,HWND param_1)

{
  int iVar1;
  HWND hWnd;
  HWND hWnd_00;
  HWND hWnd_01;
  HWND hWnd_02;
  HWND hWnd_03;
  HWND hWnd_04;
  HWND hWnd_05;
  HWND hWnd_06;
  HWND hWnd_07;
  HWND hWnd_08;
  HWND hWnd_09;
  HWND hWnd_10;
  HWND hWnd_11;
  HWND hWnd_12;
  HWND hWnd_13;
  HWND hWnd_14;
  HWND hWnd_15;
  HWND hWnd_16;
  HWND hWnd_17;
  HWND hWnd_18;
  HWND hWnd_19;
  HWND hWnd_20;
  LRESULT LVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  CHAR local_40 [64];
  
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x44) + 0x424) + 0x3e);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  hWnd = GetDlgItem(param_1,0x482);
  hWnd_00 = GetDlgItem(param_1,0x430);
  hWnd_01 = GetDlgItem(param_1,0x433);
  hWnd_02 = GetDlgItem(param_1,0x435);
  hWnd_03 = GetDlgItem(param_1,0x431);
  hWnd_04 = GetDlgItem(param_1,0x427);
  hWnd_05 = GetDlgItem(param_1,0x436);
  hWnd_06 = GetDlgItem(param_1,0x43f);
  hWnd_07 = GetDlgItem(param_1,0x441);
  hWnd_08 = GetDlgItem(param_1,0x443);
  hWnd_09 = GetDlgItem(param_1,0x445);
  hWnd_10 = GetDlgItem(param_1,0x481);
  hWnd_11 = GetDlgItem(param_1,0x420);
  GetDlgItem(param_1,0x421);
  hWnd_12 = GetDlgItem(param_1,0x439);
  hWnd_13 = GetDlgItem(param_1,0x417);
  hWnd_14 = GetDlgItem(param_1,0x43c);
  hWnd_15 = GetDlgItem(param_1,0x419);
  hWnd_16 = GetDlgItem(param_1,0x41a);
  hWnd_17 = GetDlgItem(param_1,0x429);
  hWnd_18 = GetDlgItem(param_1,0x42b);
  hWnd_19 = GetDlgItem(param_1,0x42e);
  hWnd_20 = GetDlgItem(param_1,0x471);
  LVar2 = SendMessageA(hWnd,0xf0,0,0);
  *(uint *)(iVar1 + 0x408) = (uint)(LVar2 == 1);
  LVar2 = SendMessageA(hWnd_00,0x147,0,0);
  if (*(int *)((int)this + 0x5c) == 2) {
    if (LVar2 != 1) {
      if (LVar2 == 2) goto switchD_004132f0_caseD_4;
      goto switchD_004132f0_caseD_2;
    }
    *(undefined4 *)(iVar1 + 0x90) = 3;
    *(undefined4 *)(iVar1 + 0x3c1) = 1;
    *(undefined4 *)(iVar1 + 0x50) = 3;
    *(undefined4 *)(iVar1 + 0x88) = 1;
    goto LAB_004133b0;
  }
  switch(LVar2) {
  case 1:
    *(undefined4 *)(iVar1 + 0x3c1) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 1;
    *(undefined4 *)(iVar1 + 0x50) = 1;
    *(undefined4 *)(iVar1 + 0x88) = 1;
    break;
  case 2:
switchD_004132f0_caseD_2:
    *(undefined4 *)(iVar1 + 0x90) = 2;
    *(undefined4 *)(iVar1 + 0x3c1) = 0;
    *(undefined4 *)(iVar1 + 0x50) = 2;
    *(undefined4 *)(iVar1 + 0x88) = 1;
    break;
  case 3:
    *(undefined4 *)(iVar1 + 0x90) = 3;
    *(undefined4 *)(iVar1 + 0x3c1) = 1;
    *(undefined4 *)(iVar1 + 0x50) = 3;
    *(undefined4 *)(iVar1 + 0x88) = 1;
    break;
  case 4:
switchD_004132f0_caseD_4:
    *(undefined4 *)(iVar1 + 0x3c1) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 4;
    *(undefined4 *)(iVar1 + 0x50) = 4;
    *(undefined4 *)(iVar1 + 0x88) = 0;
    *(undefined4 *)(iVar1 + 100) = 1;
    goto LAB_004133b3;
  default:
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined4 *)(iVar1 + 0x3c1) = 0;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x88) = 1;
  }
LAB_004133b0:
  *(undefined4 *)(iVar1 + 100) = 0;
LAB_004133b3:
  LVar2 = SendMessageA(hWnd_01,0x147,0,0);
  *(LRESULT *)(iVar1 + 0xc0) = LVar2 + 1;
  LVar2 = SendMessageA(hWnd_02,0x147,0,0);
  switch(LVar2) {
  case 1:
    *(undefined4 *)(iVar1 + 0xc4) = 2;
    break;
  case 2:
    *(undefined4 *)(iVar1 + 0xc4) = 3;
    break;
  case 3:
    *(undefined4 *)(iVar1 + 0xc4) = 4;
    break;
  case 4:
    *(undefined4 *)(iVar1 + 0xc4) = 5;
    break;
  case 5:
    *(undefined4 *)(iVar1 + 0xc4) = 6;
    break;
  case 6:
    *(undefined4 *)(iVar1 + 0xc4) = 7;
    break;
  case 7:
    *(undefined4 *)(iVar1 + 0xc4) = 8;
    break;
  default:
    *(undefined4 *)(iVar1 + 0xc4) = 1;
  }
  if (*(int *)((int)this + 0x5c) == 1) goto LAB_00413549;
  LVar2 = SendMessageA(hWnd_07,0x147,0,0);
  if (LVar2 == 1) {
    *(undefined4 *)(iVar1 + 0xf8) = 4;
  }
  else if (LVar2 == 2) {
    *(undefined4 *)(iVar1 + 0xf8) = 5;
  }
  else {
    *(undefined4 *)(iVar1 + 0xf8) = 1;
  }
  LVar2 = SendMessageA(hWnd_08,0x147,0,0);
  iVar4 = *(int *)(iVar1 + 0xf8);
  if (iVar4 == 1) {
    if (LVar2 == 0) {
switchD_004134d0_caseD_0:
      *(undefined4 *)(iVar1 + 0xfc) = 4;
    }
    else {
      if (LVar2 == 1) goto switchD_004134d0_caseD_1;
      if (LVar2 == 2) goto switchD_004134d0_caseD_2;
    }
  }
  else if (iVar4 == 4) {
    switch(LVar2) {
    case 0:
      goto switchD_004134d0_caseD_0;
    case 1:
switchD_004134d0_caseD_1:
      *(undefined4 *)(iVar1 + 0xfc) = 6;
      break;
    case 2:
switchD_004134d0_caseD_2:
      *(undefined4 *)(iVar1 + 0xfc) = 8;
      break;
    case 3:
      *(undefined4 *)(iVar1 + 0xfc) = 10;
    }
  }
  else if (iVar4 == 5) {
    *(undefined4 *)(iVar1 + 0xfc) = 10;
  }
  LVar2 = SendMessageA(hWnd_09,0x147,0,0);
  if (LVar2 == 1) {
    *(undefined4 *)(iVar1 + 0x248) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x248) = 1;
    if (LVar2 == 2) {
      *(undefined4 *)(iVar1 + 0x100) = 1;
      *(undefined4 *)(iVar1 + 0x28c) = 1;
      goto LAB_00413549;
    }
  }
  *(undefined4 *)(iVar1 + 0x100) = 0;
  *(undefined4 *)(iVar1 + 0x28c) = 0;
LAB_00413549:
  LVar2 = SendMessageA(hWnd_10,0x60a,0,0);
  *(LRESULT *)(iVar1 + 0x404) = LVar2;
  LVar2 = SendMessageA(hWnd_03,0xf0,0,0);
  *(uint *)(iVar1 + 0xf0) = (uint)(LVar2 == 1);
  LVar2 = SendMessageA(hWnd_04,0xf0,0,0);
  *(uint *)(iVar1 + 0x98) = (uint)(LVar2 == 1);
  *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(iVar1 + 0xe8);
  LVar2 = SendMessageA(hWnd_11,0xf0,0,0);
  if (LVar2 == 1) {
    *(undefined4 *)(iVar1 + 0xe8) = 1;
    *(undefined4 *)(iVar1 + 0x2b0) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0xe8) = 0;
    *(undefined4 *)(iVar1 + 0x2b0) = 1;
  }
  GetWindowTextA(hWnd_05,local_40,0x40);
  uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
  *(undefined4 *)(iVar1 + 0x3f5) = uVar3;
  GetWindowTextA(hWnd_06,local_40,0x40);
  uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
  *(undefined4 *)(iVar1 + 0x3f9) = uVar3;
  *(undefined4 *)(iVar1 + 0x22c) = uVar3;
  *(undefined4 *)(iVar1 + 0x228) = *(undefined4 *)(iVar1 + 0x3f5);
  GetWindowTextA(hWnd_12,local_40,0x40);
  uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
  *(undefined4 *)(iVar1 + 0xec) = uVar3;
  GetWindowTextA(hWnd_13,local_40,0x40);
  fVar5 = FUN_00430830(local_40,(undefined4 *)0x0);
  *(double *)(iVar1 + 0xd0) = (double)fVar5;
  GetWindowTextA(hWnd_14,local_40,0x40);
  fVar5 = FUN_00430830(local_40,(undefined4 *)0x0);
  *(double *)(iVar1 + 0xd8) = (double)fVar5;
  GetWindowTextA(hWnd_15,local_40,0x40);
  fVar5 = FUN_00430830(local_40,(undefined4 *)0x0);
  *(double *)(iVar1 + 0x3c5) = (double)fVar5;
  GetWindowTextA(hWnd_16,local_40,0x40);
  fVar5 = FUN_00430830(local_40,(undefined4 *)0x0);
  *(double *)(iVar1 + 0x3cd) = (double)fVar5;
  GetWindowTextA(hWnd_17,local_40,0x40);
  uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
  *(undefined4 *)(iVar1 + 0x9c) = uVar3;
  GetWindowTextA(hWnd_18,local_40,0x40);
  uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
  *(undefined4 *)(iVar1 + 0xa0) = uVar3;
  FUN_00415290(iVar1,*(undefined4 **)(*(int *)((int)this + 0x44) + 0x428));
  if (*(int *)((int)this + 0x5c) == 1) {
    LVar2 = SendMessageA(hWnd_19,0xf0,0,0);
    *(uint *)(iVar1 + 0xf4) = (uint)(LVar2 == 1);
    *(undefined4 *)(iVar1 + 0x224) = 5;
    GetWindowTextA(hWnd_20,local_40,0x40);
    iVar4 = FUN_00430020(local_40,(undefined4 *)0x0);
    *(int *)(iVar1 + 0xe4) = iVar4 / 2;
  }
  return 0;
}


