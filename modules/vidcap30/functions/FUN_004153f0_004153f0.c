/* Module: vidcap30.exe
   Function: FUN_004153f0
   Address: 004153f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004153f0(HDC param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 COLORREF param_7)

{
  COLORREF color;
  RECT local_10;
  
  color = SetBkColor(param_1,param_7);
  local_10.right = param_2 + param_4;
  local_10.bottom = param_3 + param_6;
  local_10.left = param_2;
  local_10.top = param_3;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  local_10.top = (param_3 - param_6) + param_5;
  local_10.right = param_4 + param_2;
  local_10.bottom = local_10.top + param_6;
  local_10.left = param_2;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  local_10.right = param_2 + param_6;
  local_10.left = param_2;
  local_10.top = param_3;
  local_10.bottom = param_3 + param_5;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  local_10.left = (param_2 - param_6) + param_4;
  local_10.right = local_10.left + param_6;
  local_10.top = param_3;
  local_10.bottom = param_3 + param_5;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  SetBkColor(param_1,color);
  return;
}


