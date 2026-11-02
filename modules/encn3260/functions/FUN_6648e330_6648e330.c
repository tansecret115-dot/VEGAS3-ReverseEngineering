/* Module: encn3260.dll
   Function: FUN_6648e330
   Address: 6648e330
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6648e330(int param_1)

{
  int *piVar1;
  
  if (*(void **)(param_1 + 0x85) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x85));
    *(undefined4 *)(param_1 + 0x85) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x6c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x91);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x91) = 0;
  }
  return;
}


