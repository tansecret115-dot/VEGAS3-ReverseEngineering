/* Module: vidcap30.exe
   Function: FUN_00410830
   Address: 00410830
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00410830(HDC param_1,int *param_2,int param_3,LPCSTR param_4,COLORREF param_5,int param_6,
                 int param_7)

{
  LONG LVar1;
  UINT c;
  DWORD color;
  COLORREF color_00;
  COLORREF color_01;
  int x;
  int y;
  tagSIZE local_18;
  tagRECT local_10;
  
  LVar1 = GetWindowLongA(*(HWND *)(DAT_005ba4c0 + 0x9c),-0x15);
  local_10.left = *param_2;
  local_10.top = param_2[1];
  local_10.right = param_2[2];
  local_10.bottom = param_2[3];
  if ((local_10.left < local_10.right) && (local_10.top < local_10.bottom)) {
    DrawEdge(param_1,&local_10,2,0x200f);
    x = local_10.left + 2;
    c = lstrlenA(param_4);
    GetTextExtentPointA(param_1,param_4,c,&local_18);
    y = ((local_10.bottom - local_18.cy) + local_10.top) / 2;
    if ((param_7 != 0) && (0 < (int)c)) {
      x = (local_10.right - local_18.cx) + -2;
    }
    if (0 < param_3) {
      color = GetSysColor(8);
      color_00 = SetTextColor(param_1,color);
      color_01 = SetBkColor(param_1,param_5);
      if (local_10.left + param_3 <= local_10.right) {
        local_10.right = local_10.left + param_3;
      }
      ExtTextOutA(param_1,x,y,6,&local_10,param_4,c,(INT *)0x0);
      local_10.left = local_10.right;
      local_10.right = param_2[2] + -1;
      SetTextColor(param_1,color_00);
      SetBkColor(param_1,color_01);
    }
    if (local_10.left < local_10.right) {
      if (0 < param_6) {
        ExtTextOutA(param_1,*(int *)(LVar1 + 4) + x,y,6,&local_10,param_4,c,(INT *)0x0);
        return;
      }
      ExtTextOutA(param_1,x,y,6,&local_10,param_4,c,(INT *)0x0);
    }
  }
  return;
}


