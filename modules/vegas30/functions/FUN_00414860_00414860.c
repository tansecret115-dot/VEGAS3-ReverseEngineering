/* Module: vegas30.exe
   Function: FUN_00414860
   Address: 00414860
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00414860(int param_1,int param_2)

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
  FUN_00412f60(hdc,&local_10,param_2,0);
  ReleaseDC(*(HWND *)(param_1 + 8),hdc);
  return;
}


