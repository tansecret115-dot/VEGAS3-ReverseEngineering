/* Module: rmbe3260.dll
   Function: FUN_6600df20
   Address: 6600df20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600df20(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  if (*(int *)(param_1 + 4) != 0) {
    return 0x80040007;
  }
  *(undefined1 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 9) = param_3;
  *(undefined1 *)(param_1 + 10) = param_4;
  return 0;
}


