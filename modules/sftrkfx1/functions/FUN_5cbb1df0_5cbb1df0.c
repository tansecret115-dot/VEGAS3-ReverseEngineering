/* Module: sftrkfx1.dll
   Function: FUN_5cbb1df0
   Address: 5cbb1df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbb1df0(HDC param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  RECT local_10;
  
  iVar1 = MulDiv(param_3,(param_2[2] - *param_2) + -1,param_5);
  local_10.bottom = MulDiv(param_4,(param_2[3] - param_2[1]) / 2,0x800);
  local_10.top = (param_2[3] + param_2[1]) / 2;
  local_10.bottom = local_10.top - local_10.bottom;
  local_10.left = *param_2 + iVar1;
  local_10.right = local_10.left + 1;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  return 1;
}


