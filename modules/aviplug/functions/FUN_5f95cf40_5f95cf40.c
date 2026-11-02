/* Module: aviplug.dll
   Function: FUN_5f95cf40
   Address: 5f95cf40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f95cf40(void *param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  FUN_5f95d890(param_1);
  lParam = 0;
  wParam = 0;
  Msg = 0xf0;
  hWnd = GetDlgItem(*(HWND *)((int)param_1 + 0x10),2000);
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  FUN_5f95cfa0(param_1,(uint)(LVar1 == 1));
  FUN_5f95cf90((int)param_1);
  *(undefined4 *)((int)param_1 + 0x24) = 1;
  return;
}


