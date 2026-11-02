/* Module: rmbe3260.dll
   Function: FUN_66025920
   Address: 66025920
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66025920(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1[1] == 0) {
    return -0x7ffbfff9;
  }
  piVar1 = param_1 + -4;
  piVar2 = param_1 + -4;
  param_1 = (int *)0x0;
  iVar3 = (**(code **)(*piVar1 + 0x28))(piVar2,&param_1);
  if (-1 < iVar3) {
    iVar3 = (**(code **)(*param_1 + 0xc))(param_1,param_2);
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar3;
}


