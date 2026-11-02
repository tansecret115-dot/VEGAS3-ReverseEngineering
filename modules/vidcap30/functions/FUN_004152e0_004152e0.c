/* Module: vidcap30.exe
   Function: FUN_004152e0
   Address: 004152e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004152e0(HDC param_1,int param_2,int param_3,int param_4,int param_5)

{
  DWORD DVar1;
  COLORREF color;
  RECT local_10;
  
  DVar1 = GetSysColor(0x10);
  color = SetBkColor(param_1,DVar1);
  param_4 = param_2 + param_4;
  local_10.bottom = param_3 + 1;
  local_10.left = param_2;
  local_10.top = param_3;
  local_10.right = param_4;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  local_10.right = param_2 + 1;
  param_5 = param_3 + param_5;
  local_10.left = param_2;
  local_10.top = param_3;
  local_10.bottom = param_5;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  DVar1 = GetSysColor(0x14);
  SetBkColor(param_1,DVar1);
  local_10.top = param_5 + -1;
  local_10.left = param_2;
  local_10.right = param_4;
  local_10.bottom = param_5;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  local_10.left = param_4 + -1;
  local_10.top = param_3;
  local_10.right = param_4;
  local_10.bottom = param_5;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  SetBkColor(param_1,color);
  return;
}


