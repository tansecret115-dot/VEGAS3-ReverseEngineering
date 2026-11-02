/* Module: mpegin.dll
   Function: FUN_100058d0
   Address: 100058d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_100058d0(int param_1,char param_2)

{
  return *(uint *)(param_1 + 8) >> (0x20U - param_2 & 0x1f);
}


