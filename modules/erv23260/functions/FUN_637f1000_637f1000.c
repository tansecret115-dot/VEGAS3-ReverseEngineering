/* Module: erv23260.dll
   Function: FUN_637f1000
   Address: 637f1000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_637f1000(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0xc)) {
    return *(undefined4 *)(&DAT_6382f010 + param_1 * 4);
  }
  return 0x80004005;
}


