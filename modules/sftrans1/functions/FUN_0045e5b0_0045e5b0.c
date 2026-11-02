/* Module: sftrans1.dll
   Function: FUN_0045e5b0
   Address: 0045e5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0045e5b0(int param_1)

{
  undefined4 *puVar1;
  HWND hWnd;
  int *unaff_EDI;
  UINT Msg;
  WPARAM wParam;
  int lParam;
  int *local_4;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_4 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00555130,&local_4);
  }
  lParam = param_1 + 0x68;
  (**(code **)(*local_4 + 0xc))(local_4,lParam);
  wParam = 0;
  Msg = 0x703;
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x461);
  SendMessageA(hWnd,Msg,wParam,lParam);
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  return;
}


