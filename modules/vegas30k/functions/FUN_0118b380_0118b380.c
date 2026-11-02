/* Module: vegas30k.dll
   Function: FUN_0118b380
   Address: 0118b380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0118b380(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 200) != 0) {
    FUN_01192380();
  }
  piVar1 = *(int **)(param_1 + 0x1f0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1a4))(piVar1);
  }
  return 0;
}


