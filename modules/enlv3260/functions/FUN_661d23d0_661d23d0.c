/* Module: enlv3260.dll
   Function: FUN_661d23d0
   Address: 661d23d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_661d23d0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x14) != 0) && (piVar1 = *(int **)(param_1 + 0x20), piVar1 != (int *)0x0))
  {
    uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
    (**(code **)(**(int **)(param_1 + 0x20) + 8))(*(int **)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    return uVar2;
  }
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return 0;
}


