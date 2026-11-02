/* Module: vegas30k.dll
   Function: FUN_01041650
   Address: 01041650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01041650(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    return 0x8000ffff;
  }
  piVar1 = *(int **)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x5c))(piVar1,0);
    (**(code **)(**(int **)(param_1 + 0x68) + 0x50))(*(int **)(param_1 + 0x68));
    FUN_01041030();
    (**(code **)(**(int **)(param_1 + 0x68) + 0x60))
              (*(int **)(param_1 + 0x68),param_1 + 8,*(undefined4 *)(param_1 + 0x4c));
    (**(code **)(**(int **)(param_1 + 0x68) + 0x4c))(*(int **)(param_1 + 0x68));
    (**(code **)(**(int **)(param_1 + 0x68) + 0x54))(*(int **)(param_1 + 0x68));
  }
  *(undefined4 *)(param_1 + 0x98) = param_2;
  return 0;
}


