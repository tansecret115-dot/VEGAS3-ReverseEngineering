/* Module: aviplug.dll
   Function: FUN_5f95cec0
   Address: 5f95cec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f95cec0(void *param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  if (((*(int *)((int)param_1 + 0x2c) != 0) && (*(int *)((int)param_1 + 0x34) != 0)) &&
     (*(int *)((int)param_1 + 0x10) != 0)) {
    FUN_5f95d580(param_1);
    lParam = 0;
    wParam = 0;
    Msg = 0xf0;
    hWnd = GetDlgItem(*(HWND *)((int)param_1 + 0x10),2000);
    LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
    FUN_5f95cfa0(param_1,(uint)(LVar1 == 1));
    return 1;
  }
  return 0;
}


