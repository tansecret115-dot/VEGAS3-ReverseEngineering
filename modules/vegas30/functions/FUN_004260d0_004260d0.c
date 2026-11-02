/* Module: vegas30.exe
   Function: FUN_004260d0
   Address: 004260d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004260d0(int param_1,HDC param_2)

{
  HWND hWnd;
  LONG LVar1;
  tagRECT local_50;
  tagPAINTSTRUCT local_40;
  
  hWnd = *(HWND *)(param_1 + 8);
  local_40.hdc = (HDC)0x0;
  if (param_2 == (HDC)0x0) {
    param_2 = BeginPaint(hWnd,&local_40);
  }
  GetClientRect(hWnd,&local_50);
  LVar1 = GetWindowLongA(hWnd,-0x10);
  FUN_00425ec0(param_1,param_2,&local_50,LVar1);
  if (local_40.hdc != (HDC)0x0) {
    EndPaint(hWnd,&local_40);
  }
  return;
}


