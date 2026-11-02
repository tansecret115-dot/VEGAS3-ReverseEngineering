/* Module: sftrans1.dll
   Function: FUN_0048cd60
   Address: 0048cd60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0048cd60(HDC param_1,int param_2,int param_3,int param_4,int param_5)

{
  RECT local_10;
  
  local_10.left = param_2;
  local_10.right = param_2 + param_4;
  local_10.top = param_3;
  local_10.bottom = param_3 + param_5;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  return;
}


