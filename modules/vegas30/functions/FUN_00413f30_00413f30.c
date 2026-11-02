/* Module: vegas30.exe
   Function: FUN_00413f30
   Address: 00413f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00413f30(HDC param_1,int *param_2)

{
  RECT local_10;
  
  local_10.left = *param_2;
  local_10.top = param_2[1];
  local_10.right = param_2[2];
  local_10.bottom = local_10.top + 1;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  local_10.bottom = param_2[3];
  local_10.top = local_10.bottom + -1;
  param_2[1] = param_2[1] + 1;
  local_10.left = *param_2;
  local_10.right = param_2[2];
  param_2[3] = local_10.top;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  local_10.left = *param_2;
  local_10.top = param_2[1];
  local_10.right = local_10.left + 1;
  local_10.bottom = param_2[3];
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  local_10.right = param_2[2];
  local_10.left = local_10.right + -1;
  *param_2 = *param_2 + 1;
  param_2[2] = local_10.left;
  local_10.top = param_2[1];
  local_10.bottom = param_2[3];
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  return;
}


