/* Module: mp3plug.dll
   Function: FUN_5f726500
   Address: 5f726500
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f726500(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_5f7389c0 + (param_2 & 0xff ^ param_1 & 0xff) * 4) ^ param_2 >> 8;
}


