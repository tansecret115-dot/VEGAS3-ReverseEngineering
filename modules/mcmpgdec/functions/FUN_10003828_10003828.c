/* Module: mcmpgdec.dll
   Function: FUN_10003828
   Address: 10003828
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_10003828(int param_1,char param_2)

{
  return *(uint *)(param_1 + 8) >> (0x20U - param_2 & 0x1f);
}


