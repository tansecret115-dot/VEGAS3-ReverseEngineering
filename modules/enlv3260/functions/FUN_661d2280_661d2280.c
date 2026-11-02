/* Module: enlv3260.dll
   Function: FUN_661d2280
   Address: 661d2280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_661d2280(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80004005;
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,param_2);
  }
  return uVar2;
}


