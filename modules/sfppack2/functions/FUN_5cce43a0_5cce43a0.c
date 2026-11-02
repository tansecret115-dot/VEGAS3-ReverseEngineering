/* Module: sfppack2.dll
   Function: FUN_5cce43a0
   Address: 5cce43a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cce43a0(HDC param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  RECT local_10;
  
  iVar2 = MulDiv(param_3,(param_2[2] - *param_2) + -1,param_5);
  iVar1 = param_2[3];
  iVar3 = MulDiv(param_4,(iVar1 - param_2[1]) / 2,0x800);
  local_10.bottom = iVar1 - (iVar3 + (iVar1 - param_2[1]) / 2);
  local_10.left = *param_2 + iVar2;
  local_10.right = local_10.left + 1;
  local_10.top = iVar1;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  return 1;
}


