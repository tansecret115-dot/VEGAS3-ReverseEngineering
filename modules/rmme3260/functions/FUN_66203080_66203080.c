/* Module: rmme3260.dll
   Function: FUN_66203080
   Address: 66203080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66203080(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_662043b0(param_1 + 0x10);
  uVar2 = FUN_662043b0(param_1 + 0x24);
  if (*(void **)(param_1 + 0x50) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 0x4e) = 0;
  }
  return uVar2;
}


