/* Module: rmbe3260.dll
   Function: FUN_6601f2e0
   Address: 6601f2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6601f2e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_5;
  if (param_5 == (int *)0x0) {
    return -0x7fffbffd;
  }
  *param_5 = 0;
  param_5 = (int *)0x0;
  iVar2 = (**(code **)(*(int *)(param_1 + -4) + 0x10))
                    ((int *)(param_1 + -4),param_2,&param_5,param_3);
  if (-1 < iVar2) {
    iVar2 = (**(code **)*param_5)(param_5,param_4,piVar1);
  }
  if (param_5 != (int *)0x0) {
    (**(code **)(*param_5 + 8))(param_5);
  }
  return iVar2;
}


