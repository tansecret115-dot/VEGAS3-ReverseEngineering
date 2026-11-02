/* Module: vegas30.exe
   Function: FUN_0057fc80
   Address: 0057fc80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0057fc80(int *param_1,undefined4 param_2,int param_3)

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
  FUN_005808d0();
  FUN_00580ae0(&param_3,iVar1,*(int *)(*param_1 + -8) - iVar1,0);
  FUN_005808e0(&param_3);
  FUN_00580a90();
  return param_2;
}


