/* Module: vegas30.exe
   Function: FUN_0050a0a0
   Address: 0050a0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050a0a0(undefined4 *param_1,undefined4 *param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = *param_1;
    return 0;
  }
  return 0x80070057;
}


