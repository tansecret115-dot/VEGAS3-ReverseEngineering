/* Module: encn3260.dll
   Function: FUN_6649bf60
   Address: 6649bf60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6649bf60(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


