/* Module: vegas30.exe
   Function: FUN_005e4d20
   Address: 005e4d20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005e4d20(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 == (int *)0x0) {
    return 0x8000ffff;
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 0;
}


