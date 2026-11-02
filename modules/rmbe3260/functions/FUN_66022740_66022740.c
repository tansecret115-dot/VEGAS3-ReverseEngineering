/* Module: rmbe3260.dll
   Function: FUN_66022740
   Address: 66022740
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66022740(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  if (*(int *)(param_1 + 0x18) == 0) {
    return -0x7ffbfff9;
  }
  piVar1 = (int *)(param_1 + -0x10);
  FUN_66023e20(piVar1);
  piVar2 = *(int **)(iVar3 + 0x18);
  (**(code **)(*piVar2 + 0xc))(piVar2,&param_1);
  if (param_1 == 0) {
    iVar4 = FUN_66022920(piVar1);
  }
  else {
    iVar4 = -0x7ffbfff9;
  }
  if (-1 < iVar4) {
    *(undefined4 *)(iVar3 + 0x10) = 1;
  }
  return iVar4;
}


