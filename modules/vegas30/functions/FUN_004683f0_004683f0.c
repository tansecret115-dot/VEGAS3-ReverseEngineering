/* Module: vegas30.exe
   Function: FUN_004683f0
   Address: 004683f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004683f0(HDC param_1,int *param_2)

{
  HGDIOBJ pvVar1;
  COLORREF color;
  COLORREF color_00;
  int mode;
  
  pvVar1 = (HGDIOBJ)_SfGetUIBrush_4(0x2720);
  pvVar1 = SelectObject(param_1,pvVar1);
  color = SetBkColor(param_1,0);
  color_00 = SetTextColor(param_1,0xffffff);
  mode = SetBkMode(param_1,2);
  PatBlt(param_1,*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],0xa0329);
  SetBkColor(param_1,color);
  SetTextColor(param_1,color_00);
  SetBkMode(param_1,mode);
  SelectObject(param_1,pvVar1);
  return;
}


