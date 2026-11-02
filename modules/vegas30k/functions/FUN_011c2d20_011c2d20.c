/* Module: vegas30k.dll
   Function: FUN_011c2d20
   Address: 011c2d20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011c2d20(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0x20);
    iVar2 = param_3;
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2,param_3);
      return iVar2;
    }
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2,param_3);
    if ((iVar2 < 0) && (piVar1 = *(int **)(param_1 + 0x20), piVar1 != (int *)0x0)) {
      iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2,param_3);
      return iVar2;
    }
  }
  return iVar2;
}


