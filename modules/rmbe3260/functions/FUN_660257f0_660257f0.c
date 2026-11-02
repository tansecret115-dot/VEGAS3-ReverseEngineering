/* Module: rmbe3260.dll
   Function: FUN_660257f0
   Address: 660257f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660257f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1[1] == 0) {
    return 0x80040007;
  }
  piVar1 = param_1 + -4;
  piVar2 = param_1 + -4;
  param_1 = (int *)0x0;
  iVar3 = (**(code **)(*piVar1 + 0x24))(piVar2,param_2,param_3,&param_1);
  if (-1 < iVar3) {
    (**(code **)(*param_1 + 0xc))(param_1,param_4);
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return 0;
}


