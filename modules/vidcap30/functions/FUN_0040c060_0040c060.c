/* Module: vidcap30.exe
   Function: FUN_0040c060
   Address: 0040c060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040c060(int param_1,int param_2)

{
  HDC hdc;
  DWORD color;
  tagRECT local_10;
  
  local_10.left = 0;
  local_10.top = 0xd;
  local_10.right = 0xc;
  local_10.bottom = 0x19;
  hdc = GetWindowDC(*(HWND *)(param_1 + 8));
  color = GetSysColor(0xf);
  SetBkColor(hdc,color);
  DrawFrameControl(hdc,&local_10,3,
                   *(uint *)(param_1 + 0xc) >> 0x12 & 1 | -(uint)(param_2 != 0) & 0x200 | 0x4002);
  FUN_0040a810(hdc,&local_10,param_2,0);
  ReleaseDC(*(HWND *)(param_1 + 8),hdc);
  return;
}


