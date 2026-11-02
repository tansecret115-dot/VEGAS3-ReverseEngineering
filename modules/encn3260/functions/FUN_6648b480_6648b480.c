/* Module: encn3260.dll
   Function: FUN_6648b480
   Address: 6648b480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6648b480(int param_1)

{
  int *piVar1;
  
  (**(code **)(**(int **)(param_1 + 0x6e) + 4))();
  piVar1 = *(int **)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 100) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x6e) + 8))();
  return 0;
}


