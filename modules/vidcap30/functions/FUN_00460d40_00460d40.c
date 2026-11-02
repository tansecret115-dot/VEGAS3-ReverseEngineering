/* Module: vidcap30.exe
   Function: FUN_00460d40
   Address: 00460d40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00460d40(int param_1,HDC param_2)

{
  uint uVar1;
  HGDIOBJ h;
  COLORREF color;
  COLORREF color_00;
  int mode;
  UINT format;
  tagRECT local_10;
  
  h = SelectObject(param_2,*(HGDIOBJ *)(param_1 + 0x30));
  color = SetTextColor(param_2,*(COLORREF *)(param_1 + 0x34));
  color_00 = SetBkColor(param_2,*(COLORREF *)(param_1 + 0x38));
  mode = SetBkMode(param_2,2 - (uint)((*(uint *)(param_1 + 0x4c) & 1) != 0));
  format = 0x820;
  local_10.left = *(int *)(param_1 + 0x14);
  local_10.top = *(int *)(param_1 + 0x18);
  local_10.right = *(LONG *)(param_1 + 0x1c);
  local_10.bottom = *(LONG *)(param_1 + 0x20);
  if ((*(uint *)(param_1 + 0x44) & 0x10) != 0) {
    if ((*(uint *)(param_1 + 0x44) & 8) != 0) {
      DrawEdge(param_2,&local_10,2,0x200f);
    }
    if ((*(byte *)(param_1 + 0x4c) & 2) != 0) {
      DrawEdge(param_2,&local_10,10,0x200f);
    }
    if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
      ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    }
    uVar1 = *(uint *)(param_1 + 0x44);
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 2) != 0) {
        format = 0x822;
      }
    }
    else {
      format = 0x821;
    }
    if ((uVar1 & 4) != 0) {
      format = format | 4;
    }
    if ((uVar1 & 0x20) != 0) {
      format = format | 0x8000;
    }
    local_10.left = local_10.left + *(int *)(param_1 + 0x3c);
    local_10.top = local_10.top + *(int *)(param_1 + 0x40);
    DrawTextA(param_2,*(LPCSTR *)(param_1 + 0x28),-1,&local_10,format);
    SelectObject(param_2,h);
    SetTextColor(param_2,color);
    SetBkColor(param_2,color_00);
    SetBkMode(param_2,mode);
  }
  return;
}


