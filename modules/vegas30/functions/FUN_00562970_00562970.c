/* Module: vegas30.exe
   Function: FUN_00562970
   Address: 00562970
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00562970(int param_1)

{
  int *piVar1;
  
  if ((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0x118), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x48))(piVar1);
  }
  return;
}


