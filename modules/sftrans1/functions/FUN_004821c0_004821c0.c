/* Module: sftrans1.dll
   Function: FUN_004821c0
   Address: 004821c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004821c0(int param_1)

{
  int *piVar1;
  int lParam;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  lParam = *(int *)(param_1 + 0x30) + 0x110;
  wParam = 0;
  Msg = 0xa06;
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x677);
  SendMessageA(hWnd,Msg,wParam,lParam);
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x104) = 1;
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))(piVar1);
  }
  return;
}


