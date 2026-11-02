/* Module: vegas30.exe
   Function: FUN_0043d090
   Address: 0043d090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043d090(int param_1)

{
  int *piVar1;
  
  if ((*(int *)(param_1 + 4) == 3) && (piVar1 = *(int **)(param_1 + 0xf4), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  return;
}


