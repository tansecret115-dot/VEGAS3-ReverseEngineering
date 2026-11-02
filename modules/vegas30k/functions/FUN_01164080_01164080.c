/* Module: vegas30k.dll
   Function: FUN_01164080
   Address: 01164080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01164080(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10) = param_2;
  return 0;
}


