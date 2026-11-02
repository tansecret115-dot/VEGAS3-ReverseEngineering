/* Module: vidcap30.exe
   Function: FUN_00514870
   Address: 00514870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00514870(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_8 [8];
  
  if ((param_2 == 0) && (param_3 == 0)) {
    return 0;
  }
  iVar2 = 0;
  if (param_2 != 0) {
    if (-1 < param_2) goto LAB_0051489f;
    iVar2 = -param_2;
  }
  param_2 = 0;
LAB_0051489f:
  iVar3 = 0;
  if ((param_3 == 0) || (iVar3 = param_3, -1 < param_3)) {
    param_3 = 0;
  }
  else {
    param_3 = -param_3;
    iVar3 = 0;
  }
  uVar1 = FUN_005148d0(param_1,param_2,param_3,iVar2,iVar3,0,0,auStack_8);
  return uVar1;
}


