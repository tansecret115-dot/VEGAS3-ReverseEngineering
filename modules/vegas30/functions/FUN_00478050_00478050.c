/* Module: vegas30.exe
   Function: FUN_00478050
   Address: 00478050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00478050(HDC param_1,int *param_2)

{
  RECT local_10;
  
  SetBkColor(param_1,0);
  local_10.top = param_2[1];
  local_10.left = *param_2;
  local_10.bottom = local_10.top + 0x10;
  local_10.right = local_10.left + 0x20;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  SetBkColor(param_1,0xffffff);
  local_10.left = *param_2;
  local_10.top = param_2[1] + 0x10;
  local_10.right = local_10.left + 0x20;
  local_10.bottom = param_2[1] + 0x20;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  return;
}


