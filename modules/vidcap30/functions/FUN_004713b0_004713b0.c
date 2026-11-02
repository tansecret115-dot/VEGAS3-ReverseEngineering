/* Module: vidcap30.exe
   Function: FUN_004713b0
   Address: 004713b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004713b0(int param_1)

{
  int *piVar1;
  
  FUN_00471370();
  piVar1 = *(int **)(param_1 + 0x134);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  return;
}


