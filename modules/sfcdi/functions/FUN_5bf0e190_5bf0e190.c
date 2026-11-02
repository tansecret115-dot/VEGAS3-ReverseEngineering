/* Module: sfcdi.dll
   Function: FUN_5bf0e190
   Address: 5bf0e190
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf0e190(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_5bf63618 + (param_1 & 0xff ^ param_2 & 0xff) * 4) ^ param_1 >> 8;
}


