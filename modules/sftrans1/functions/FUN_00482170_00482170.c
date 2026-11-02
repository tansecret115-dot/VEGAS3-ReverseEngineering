/* Module: sftrans1.dll
   Function: FUN_00482170
   Address: 00482170
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00482170(int param_1)

{
  int *piVar1;
  int lParam;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  lParam = *(int *)(param_1 + 0x30) + 0xe4;
  wParam = 0;
  Msg = 0xa06;
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x676);
  SendMessageA(hWnd,Msg,wParam,lParam);
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xb0) = 1;
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))(piVar1);
  }
  return;
}


