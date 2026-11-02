/* Module: vegas30k.dll
   Function: FUN_01176ea0
   Address: 01176ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01176ea0(int param_1,int *param_2)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    return 0x8000ffff;
  }
  piVar1 = *(int **)(param_1 + 0x1f0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x1f8);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  if (param_2 != (int *)0x0) {
    *(int **)(param_1 + 0x1f0) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
    (**(code **)(**(int **)(param_1 + 0x1f0) + 0x10))
              (*(int **)(param_1 + 0x1f0),&DAT_011d9a40,(undefined4 *)(param_1 + 0x1e8));
    FUN_0118a350();
  }
  return 0;
}


