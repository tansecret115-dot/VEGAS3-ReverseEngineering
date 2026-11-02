/* Module: extmondrv.dll
   Function: FUN_00404a50
   Address: 00404a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404a50(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == -1) {
    param_2 = *(int *)(param_1 + 0x14);
  }
  if (param_2 != *(int *)(param_1 + 0x14)) {
    return 0x80040216;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(*(int **)(param_1 + 0xc));
    (**(code **)(**(int **)(param_1 + 0x18) + 0x14))(*(int **)(param_1 + 0x18));
    (**(code **)(**(int **)(param_1 + 0x18) + 8))(*(int **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1);
    piVar1 = (int *)(*(int *)(param_1 + 0x10) + 4);
    (**(code **)(*piVar1 + 0x14))(piVar1);
    (**(code **)(**(int **)(param_1 + 0x1c) + 8))(*(int **)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x34))(*(int **)(param_1 + 0x14),0,0);
    (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(LPVOID *)(param_1 + 0x2c) != (LPVOID)0x0) {
    FUN_004044e0(*(LPVOID *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(LPVOID *)(param_1 + 0x30) != (LPVOID)0x0) {
    FUN_004044e0(*(LPVOID *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return 0;
}


