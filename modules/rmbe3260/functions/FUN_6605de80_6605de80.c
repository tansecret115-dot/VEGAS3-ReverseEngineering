/* Module: rmbe3260.dll
   Function: FUN_6605de80
   Address: 6605de80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6605de80(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return 0x80040009;
  }
  *(undefined4 *)(param_1 + 0x15) = 1;
  return 0;
}


