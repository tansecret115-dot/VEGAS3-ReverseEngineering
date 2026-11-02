/* Module: sftrkfx1.dll
   Function: FUN_5cbf1997
   Address: 5cbf1997
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cbf1997(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  FUN_5cbf0f86(param_1);
  return;
}


