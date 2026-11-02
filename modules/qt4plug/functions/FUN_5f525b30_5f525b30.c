/* Module: qt4plug.dll
   Function: FUN_5f525b30
   Address: 5f525b30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f525b30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80004005;
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x28))(piVar1,param_2,param_3);
  }
  return uVar2;
}


