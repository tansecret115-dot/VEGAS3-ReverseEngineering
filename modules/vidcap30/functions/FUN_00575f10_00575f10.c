/* Module: vidcap30.exe
   Function: FUN_00575f10
   Address: 00575f10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00575f10(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_005a4cd0 + (param_2 & 0xff ^ param_1 & 0xff) * 4) ^ param_2 >> 8;
}


