/* Module: rmbe3260.dll
   Function: FUN_66029890
   Address: 66029890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66029890(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x188);
  return 0;
}


