/* Module: vegas30.exe
   Function: FUN_0052e040
   Address: 0052e040
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052e040(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x110);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  return;
}


