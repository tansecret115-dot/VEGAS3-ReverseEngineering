/* Module: vidcap30.exe
   Function: FUN_0040bfd0
   Address: 0040bfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040bfd0(int param_1,int param_2)

{
  HDC hdc;
  DWORD color;
  tagRECT local_10;
  
  local_10.left = 1;
  local_10.right = 0xd;
  local_10.bottom = 0xd;
  local_10.top = 1;
  hdc = GetWindowDC(*(HWND *)(param_1 + 8));
  color = GetSysColor(0xf);
  SetBkColor(hdc,color);
  DrawFrameControl(hdc,&local_10,1,(uint)((byte)(-(uint)(param_2 != 0) >> 8) & 2 | 0x40) << 8);
  FUN_0040a810(hdc,&local_10,param_2,0);
  ReleaseDC(*(HWND *)(param_1 + 8),hdc);
  return;
}


