/* Module: erv33260.dll
   Function: FUN_67071000
   Address: 67071000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_67071000(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0xc)) {
    return *(undefined4 *)(&DAT_67093010 + param_1 * 4);
  }
  return 0x80004005;
}


