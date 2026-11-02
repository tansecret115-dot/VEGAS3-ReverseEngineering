/* Module: encn3260.dll
   Function: FUN_664a6210
   Address: 664a6210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a6210(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    return 0x80040009;
  }
  if (*(int *)(*(int *)(param_1 + 0x6c) + 0x200) == *(int *)(param_1 + 0x60)) {
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x200) = 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x6c) + 0x1fc) == *(int *)(param_1 + 0x60)) {
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x1fc) = 0;
    *(undefined4 *)(param_1 + 0x1f8) = 0;
  }
  if (*(int *)(param_1 + 0x16c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x170) + 0x14))
              (*(int **)(param_1 + 0x170),*(int *)(param_1 + 0x16c));
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x60);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x1d8) != 0)) {
    local_18 = *(undefined4 *)(param_1 + 0x144);
    local_1c = 0x4002;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    (**(code **)(*piVar1 + 0x14))(piVar1,&local_1c);
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x60) + 0x10))(*(int **)(param_1 + 0x60));
  if ((iVar2 == 0) && (piVar1 = *(int **)(param_1 + 0x60), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return 0;
}


