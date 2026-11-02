/* Module: sftrkfx1.dll
   Function: FUN_5cba9420
   Address: 5cba9420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cba9420(HDC param_1,int *param_2)

{
  RECT local_10;
  
  SetBkColor(param_1,0);
  local_10.top = param_2[1];
  local_10.left = *param_2;
  local_10.bottom = local_10.top + 8;
  local_10.right = local_10.left + 8;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  SetBkColor(param_1,0x80);
  local_10.left = *param_2;
  local_10.right = local_10.left + 8;
  local_10.top = param_2[1] + 8;
  local_10.bottom = param_2[1] + 0x10;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  SetBkColor(param_1,0x202020);
  local_10.left = *param_2;
  local_10.top = param_2[1] + 0x10;
  local_10.right = local_10.left + 8;
  local_10.bottom = param_2[1] + 0x18;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  SetBkColor(param_1,0x80);
  local_10.left = *param_2;
  local_10.top = param_2[1] + 0x18;
  local_10.bottom = param_2[1] + 0x20;
  local_10.right = local_10.left + 8;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  SetBkColor(param_1,0x808080);
  local_10.top = param_2[1] + 1;
  local_10.left = *param_2 + 1;
  local_10.right = *param_2 + 7;
  local_10.bottom = param_2[1] + 7;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  SetBkColor(param_1,0x808080);
  local_10.top = param_2[1] + 10;
  local_10.left = *param_2 + 2;
  local_10.right = *param_2 + 6;
  local_10.bottom = param_2[1] + 0xe;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  SetBkColor(param_1,0xffffff);
  local_10.top = param_2[1] + 0x11;
  local_10.left = *param_2 + 1;
  local_10.right = *param_2 + 7;
  local_10.bottom = param_2[1] + 0x17;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  SetBkColor(param_1,0xffffff);
  local_10.top = param_2[1] + 0x1a;
  local_10.left = *param_2 + 2;
  local_10.right = *param_2 + 6;
  local_10.bottom = param_2[1] + 0x1e;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  return;
}


