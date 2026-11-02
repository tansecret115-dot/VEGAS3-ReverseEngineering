/* Module: rmbe3260.dll
   Function: FUN_6601bd20
   Address: 6601bd20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6601bd20(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = *(undefined4 *)(param_1 + 0xb0);
  return 0;
}


