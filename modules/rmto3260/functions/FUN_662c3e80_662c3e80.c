/* Module: rmto3260.dll
   Function: FUN_662c3e80
   Address: 662c3e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c3e80(int param_1,undefined2 *param_2)

{
  if (*(int *)(param_1 + 8) == 0) {
    *param_2 = 0;
    return 0x80040007;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *param_2 = *(undefined2 *)(*(int *)(param_1 + 0x1c) + 0x38);
    return 0;
  }
  *param_2 = uRam00000030;
  return 0;
}


