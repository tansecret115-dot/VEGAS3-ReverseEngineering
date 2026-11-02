/* Module: vegas30k.dll
   Function: FUN_01188a10
   Address: 01188a10
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_01188a10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x4b8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *param_2 = *(undefined4 *)(param_1 + 0x4b8);
  return piVar1 == (int *)0x0;
}


