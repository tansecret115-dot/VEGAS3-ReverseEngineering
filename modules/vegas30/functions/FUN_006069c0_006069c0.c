/* Module: vegas30.exe
   Function: FUN_006069c0
   Address: 006069c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_006069c0(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_0063255c + (param_2 & 0xff ^ param_1 & 0xff) * 4) ^ param_2 >> 8;
}


