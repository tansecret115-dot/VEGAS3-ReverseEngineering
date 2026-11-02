/* Module: vidcap30.exe
   Function: FUN_00458bb0
   Address: 00458bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00458bb0(undefined4 param_1,HDC param_2,RECT *param_3)

{
  DWORD color;
  COLORREF color_00;
  
  color = GetSysColor(0xf);
  color_00 = SetBkColor(param_2,color);
  ExtTextOutA(param_2,0,0,2,param_3,(LPCSTR)0x0,0,(INT *)0x0);
  DrawIcon(param_2,param_3->right + -0x20,param_3->bottom + -0x20,*(HICON *)(DAT_005ba4c0 + 0x104));
  SetBkColor(param_2,color_00);
  return;
}


