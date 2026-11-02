/* Module: mcplug.dll
   Function: FUN_00411c20
   Address: 00411c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00411c20(void *this,HWND param_1)

{
  int *piVar1;
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
  LRESULT LVar2;
  
  piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x44) + 0x424) + 0x3e);
  if (piVar1 == (int *)0x0) {
    return 0x80070057;
  }
  hWnd = GetDlgItem(param_1,0x422);
  hWnd_00 = GetDlgItem(param_1,0x414);
  hWnd_01 = GetDlgItem(param_1,0x41e);
  hWnd_02 = GetDlgItem(param_1,0x415);
  hWnd_03 = GetDlgItem(param_1,0x416);
  hWnd_04 = GetDlgItem(param_1,0x417);
  hWnd_05 = GetDlgItem(param_1,0x420);
  hWnd_06 = GetDlgItem(param_1,0x418);
  hWnd_07 = GetDlgItem(param_1,0x419);
  hWnd_08 = GetDlgItem(param_1,0x41a);
  LVar2 = SendMessageA(hWnd,0xf0,0,0);
  piVar1[0x103] = (uint)(LVar2 == 1);
  LVar2 = SendMessageA(hWnd_00,0x147,0,0);
  if (LVar2 == 1) {
    *piVar1 = 1;
  }
  else if (LVar2 == 2) {
    *piVar1 = 2;
  }
  else if (LVar2 == 3) {
    *piVar1 = 3;
  }
  else {
    *piVar1 = 0;
  }
  LVar2 = SendMessageA(hWnd_01,0x147,0,0);
  piVar1[2] = LVar2 + 1;
  LVar2 = SendMessageA(hWnd_02,0x147,0,0);
  piVar1[1] = LVar2 + 1;
  LVar2 = SendMessageA(hWnd_03,0x147,0,0);
  piVar1[3] = LVar2 + 1;
  LVar2 = SendMessageA(hWnd_04,0x147,0,0);
  if (LVar2 == 0) {
    piVar1[4] = 0;
  }
  else if (LVar2 == 1) {
    piVar1[4] = 1;
  }
  else if (LVar2 == 2) {
    piVar1[4] = 3;
  }
  LVar2 = SendMessageA(hWnd_05,0x147,0,0);
  if (LVar2 == 0) {
    piVar1[0x100] = 32000;
  }
  else if (LVar2 == 1) {
    piVar1[0x100] = 0xac44;
  }
  else if (LVar2 == 2) {
    piVar1[0x100] = 48000;
  }
  LVar2 = SendMessageA(hWnd_06,0xf0,0,0);
  piVar1[6] = (uint)(LVar2 == 1);
  LVar2 = SendMessageA(hWnd_07,0xf0,0,0);
  piVar1[7] = (uint)(LVar2 == 1);
  LVar2 = SendMessageA(hWnd_08,0xf0,0,0);
  piVar1[8] = (uint)(LVar2 == 1);
  FUN_00415210(piVar1,*(undefined4 **)(*(int *)((int)this + 0x44) + 0x424));
  return 0;
}


