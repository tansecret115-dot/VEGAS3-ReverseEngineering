/* Module: rmbe3260.dll
   Function: FUN_6600eb40
   Address: 6600eb40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600eb40(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x10);
    return 0;
  }
  return 0x80004003;
}


