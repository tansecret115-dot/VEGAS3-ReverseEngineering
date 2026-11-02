/* Module: vegas30k.dll
   Function: FUN_0109af60
   Address: 0109af60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0109af60(int *param_1)

{
  if ((param_1 != (int *)0x0) && ((param_1[2] != *param_1 || (param_1[3] != param_1[1])))) {
    return 0;
  }
  return 1;
}


