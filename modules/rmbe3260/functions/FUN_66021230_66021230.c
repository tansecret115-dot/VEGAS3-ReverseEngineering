/* Module: rmbe3260.dll
   Function: FUN_66021230
   Address: 66021230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66021230(int param_1,undefined2 *param_2)

{
  if (param_2 == (undefined2 *)0x0) {
    return 0x80004003;
  }
  *param_2 = *(undefined2 *)(param_1 + 0x178);
  return 0;
}


