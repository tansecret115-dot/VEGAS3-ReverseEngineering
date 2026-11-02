/* Module: vegas30k.dll
   Function: FUN_01018da0
   Address: 01018da0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_01018da0(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    *param_1 = *param_1 + 1;
    return (undefined1 *)0x0;
  }
  return &DAT_80070057;
}


