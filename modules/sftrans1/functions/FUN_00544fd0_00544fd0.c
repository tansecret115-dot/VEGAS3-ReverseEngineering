/* Module: sftrans1.dll
   Function: FUN_00544fd0
   Address: 00544fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00544fd0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_3;
    if (*(int *)(*param_1 + -8) < param_3) {
      iVar1 = *(int *)(*param_1 + -8);
    }
  }
  FUN_00545bc0();
  FUN_00545dd0(&param_3,iVar1,0,0);
  FUN_00545bd0(&param_3);
  FUN_00545d80();
  return param_2;
}


