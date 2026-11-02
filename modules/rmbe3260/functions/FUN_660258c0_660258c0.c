/* Module: rmbe3260.dll
   Function: FUN_660258c0
   Address: 660258c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660258c0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[5];
  if (piVar1 == (int *)0x0) {
    return -0x7ffbfff9;
  }
  param_1 = (int *)0x0;
  iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,0xc,&param_1);
  if (-1 < iVar2) {
    iVar2 = (**(code **)*param_1)(param_1,&DAT_66065c38,param_2);
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar2;
}


