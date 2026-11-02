/* Module: mcplug.dll
   Function: FUN_0046f830
   Address: 0046f830
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0046f830(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_00482bcc + (param_2 & 0xff ^ param_1 & 0xff) * 4) ^ param_2 >> 8;
}


