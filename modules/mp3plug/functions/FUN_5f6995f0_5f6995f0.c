/* Module: mp3plug.dll
   Function: FUN_5f6995f0
   Address: 5f6995f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6995f0(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x1a0);
    return 0;
  }
  return 0x80004005;
}


