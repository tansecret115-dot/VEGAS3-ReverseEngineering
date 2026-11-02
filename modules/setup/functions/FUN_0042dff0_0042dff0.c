/* Module: Setup.exe
   Function: FUN_0042dff0
   Address: 0042dff0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0042dff0(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_0043cbb8 + (param_2 & 0xff ^ param_1 & 0xff) * 4) ^ param_2 >> 8;
}


