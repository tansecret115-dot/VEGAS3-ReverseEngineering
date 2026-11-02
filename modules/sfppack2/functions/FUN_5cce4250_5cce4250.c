/* Module: sfppack2.dll
   Function: FUN_5cce4250
   Address: 5cce4250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cce4250(HDC param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  RECT local_10;
  
  iVar1 = MulDiv(param_3,(param_2[2] - *param_2) + -1,param_5);
  if (param_4 == 0) {
    local_10.left = *param_2 + iVar1;
    local_10.top = (param_2[3] - param_2[1]) / 2;
    local_10.right = local_10.left + 1;
    local_10.bottom = local_10.top + 1;
  }
  else if (param_4 < 0) {
    local_10.bottom = MulDiv(-param_4,param_2[3] - (param_2[3] - param_2[1]) / 2,0x800);
    if (local_10.bottom == 0) {
      local_10.bottom = 1;
    }
    local_10.left = *param_2 + iVar1;
    local_10.top = (param_2[3] - param_2[1]) / 2 + 1 + param_2[1];
    local_10.right = local_10.left + 1;
    local_10.bottom = local_10.top + local_10.bottom;
  }
  else {
    local_10.bottom = MulDiv(param_4,(param_2[3] - param_2[1]) / 2,0x800);
    if (local_10.bottom == 0) {
      local_10.bottom = 1;
    }
    local_10.left = *param_2 + iVar1;
    local_10.top = ((param_2[3] - param_2[1]) / 2 - local_10.bottom) + param_2[1];
    local_10.right = local_10.left + 1;
    local_10.bottom = local_10.top + local_10.bottom;
  }
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  return 1;
}


