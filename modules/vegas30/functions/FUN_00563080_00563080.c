/* Module: vegas30.exe
   Function: FUN_00563080
   Address: 00563080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00563080(HWND param_1,int param_2)

{
  HWND hWnd;
  tagPOINT *lpPoint;
  tagPOINT local_18;
  tagRECT local_10;
  
  GetWindowRect(param_1,&local_10);
  lpPoint = &local_18;
  local_18.x = local_10.left;
  local_18.y = local_10.top;
  hWnd = GetParent(param_1);
  ScreenToClient(hWnd,lpPoint);
  SetWindowPos(param_1,(HWND)0x0,local_18.x,local_18.y + param_2,0,0,0x45);
  return;
}


