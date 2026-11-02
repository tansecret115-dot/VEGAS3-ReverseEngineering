/* Module: mcplug.dll
   Function: FUN_004110d0
   Address: 004110d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004110d0(void *this,HWND param_1)

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
  LRESULT LVar2;
  undefined4 uVar3;
  int iVar4;
  CHAR local_40 [64];
  
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x44) + 0x424) + 0x3e);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  hWnd = GetDlgItem(param_1,0x45d);
  hWnd_00 = GetDlgItem(param_1,0x426);
  hWnd_01 = GetDlgItem(param_1,0x460);
  hWnd_02 = GetDlgItem(param_1,0x428);
  hWnd_03 = GetDlgItem(param_1,0x423);
  hWnd_04 = GetDlgItem(param_1,0x42d);
  hWnd_05 = GetDlgItem(param_1,0x464);
  hWnd_06 = GetDlgItem(param_1,0x424);
  GetDlgItem(param_1,0x42c);
  hWnd_07 = GetDlgItem(param_1,0x427);
  hWnd_08 = GetDlgItem(param_1,0x425);
  hWnd_09 = GetDlgItem(param_1,0x46a);
  hWnd_10 = GetDlgItem(param_1,0x46c);
  LVar2 = SendMessageA(hWnd_10,0x147,0,0);
  if (LVar2 == 1) {
    *(undefined4 *)(iVar1 + 0x68) = 1;
  }
  else if (LVar2 == 2) {
    *(undefined4 *)(iVar1 + 0x68) = 2;
  }
  else {
    *(undefined4 *)(iVar1 + 0x68) = 0;
  }
  LVar2 = SendMessageA(hWnd_09,0xf0,0,0);
  *(uint *)(iVar1 + 0x5c) = (uint)(LVar2 == 1);
  GetWindowTextA(hWnd,local_40,0x40);
  uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
  *(undefined4 *)(iVar1 + 0x34) = uVar3;
  GetWindowTextA(hWnd_00,local_40,0x40);
  uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
  *(undefined4 *)(iVar1 + 0x38) = uVar3;
  GetWindowTextA(hWnd_01,local_40,0x40);
  uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
  *(undefined4 *)(iVar1 + 0x24) = uVar3;
  GetWindowTextA(hWnd_02,local_40,0x40);
  uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
  *(undefined4 *)(iVar1 + 0x28) = uVar3;
  GetWindowTextA(hWnd_04,local_40,0x40);
  uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
  *(undefined4 *)(iVar1 + 0x44) = uVar3;
  LVar2 = SendMessageA(hWnd_06,0xf0,0,0);
  if (LVar2 == 1) {
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    GetWindowTextA(hWnd_05,local_40,0x40);
    uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
    *(undefined4 *)((int)this + 0x38) = uVar3;
  }
  else {
    GetWindowTextA(hWnd_05,local_40,0x40);
    uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
    *(undefined4 *)(iVar1 + 0x2c) = uVar3;
    *(undefined4 *)(iVar1 + 0x30) = uVar3;
  }
  LVar2 = SendMessageA(hWnd_03,0xf0,0,0);
  if (LVar2 == 1) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
    GetWindowTextA(hWnd_02,local_40,0x40);
    uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
    *(undefined4 *)((int)this + 0x34) = uVar3;
  }
  else {
    GetWindowTextA(hWnd_02,local_40,0x40);
    uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
    *(undefined4 *)(iVar1 + 0x28) = uVar3;
  }
  LVar2 = SendMessageA(hWnd_08,0xf0,0,0);
  if (LVar2 == 1) {
    *(undefined4 *)(iVar1 + 0x60) = 0;
    GetWindowTextA(hWnd_07,local_40,0x40);
    uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
    *(undefined4 *)((int)this + 0x3c) = uVar3;
    return 0;
  }
  GetWindowTextA(hWnd_07,local_40,0x40);
  iVar4 = FUN_00430020(local_40,(undefined4 *)0x0);
  *(int *)(iVar1 + 0x60) = iVar4 / 400;
  return 0;
}


