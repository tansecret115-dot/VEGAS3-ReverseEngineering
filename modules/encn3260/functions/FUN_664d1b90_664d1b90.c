/* Module: encn3260.dll
   Function: FUN_664d1b90
   Address: 664d1b90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664d1b90(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x50);
  if (piVar1 != (int *)0x0) {
    FUN_664d12c0(piVar1);
    operator_delete(piVar1);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  FUN_664d18e0(param_1);
  return;
}


