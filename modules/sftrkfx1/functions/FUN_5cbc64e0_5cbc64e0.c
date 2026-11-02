/* Module: sftrkfx1.dll
   Function: FUN_5cbc64e0
   Address: 5cbc64e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbc64e0(HDC param_1,RECT *param_2,COLORREF param_3)

{
  SetBkColor(param_1,param_3);
  ExtTextOutA(param_1,0,0,2,param_2,(LPCSTR)0x0,0,(INT *)0x0);
  return;
}


