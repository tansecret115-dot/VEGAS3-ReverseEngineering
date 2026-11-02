/* Module: enlv3260.dll
   Function: FUN_661d2710
   Address: 661d2710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_661d2710(int param_1,int param_2)

{
  int *piVar1;
  
  if ((param_2 < 0) && (param_2 != -0x7ffbff32)) {
    *(int *)(param_1 + 0x4e) = param_2;
  }
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
  }
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1);
      (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 0;
}


