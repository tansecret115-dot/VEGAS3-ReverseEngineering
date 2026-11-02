/* Module: vidcap30.exe
   Function: FUN_0040a930
   Address: 0040a930
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_0040a930(int param_1,WPARAM param_2,LPARAM param_3)

{
  HWND hWnd;
  LRESULT LVar1;
  UINT Msg;
  
  switch(param_2) {
  case 0x403:
    FUN_00409070(param_1,1,*(undefined4 *)(param_1 + 0x10),0);
    return 0;
  case 0x404:
    FUN_00409070(param_1,2,*(undefined4 *)(param_1 + 0x10),0);
    return 0;
  case 0x405:
    Msg = 0x111;
    hWnd = GetParent(*(HWND *)(param_1 + 8));
    SendMessageA(hWnd,Msg,param_2,param_1);
    return 0;
  case 0x406:
    FUN_00409070(param_1,0x10,*(undefined4 *)(param_1 + 0x10),0);
    return 0;
  default:
    LVar1 = DefWindowProcA(*(HWND *)(param_1 + 8),0x112,param_2,param_3);
    return LVar1;
  }
}


