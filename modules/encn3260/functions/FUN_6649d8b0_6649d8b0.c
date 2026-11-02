/* Module: encn3260.dll
   Function: FUN_6649d8b0
   Address: 6649d8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6649d8b0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x11);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x11) = 0;
  }
  return;
}


