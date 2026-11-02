/* Module: vegas30.exe
   Function: FUN_005298c0
   Address: 005298c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005298c0(int param_1,HDC param_2)

{
  DWORD color;
  tagRECT local_20;
  RECT local_10;
  
  GetClientRect(*(HWND *)(param_1 + 8),&local_20);
  color = GetSysColor(0xf);
  SetBkColor(param_2,color);
  local_10.top = local_20.top;
  local_10.left = local_20.left;
  local_10.right = local_20.right;
  local_10.bottom = local_20.bottom;
  ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  DrawEdge(param_2,(LPRECT)(param_1 + 0xb4),6,2);
  return;
}


