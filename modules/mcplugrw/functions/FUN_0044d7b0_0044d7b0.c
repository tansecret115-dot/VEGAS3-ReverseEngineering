/* Module: mcplugrw.dll
   Function: FUN_0044d7b0
   Address: 0044d7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044d7b0(int param_1,int param_2,undefined4 param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x6d) = param_3;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x40;
  }
  return;
}


