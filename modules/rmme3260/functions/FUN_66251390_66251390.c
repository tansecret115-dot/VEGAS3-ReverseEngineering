/* Module: rmme3260.dll
   Function: FUN_66251390
   Address: 66251390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66251390(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return 0x80040009;
  }
  *(undefined4 *)(param_1 + 0x15) = 1;
  return 0;
}


