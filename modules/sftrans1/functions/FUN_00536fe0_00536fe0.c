/* Module: sftrans1.dll
   Function: FUN_00536fe0
   Address: 00536fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00536fe0(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_0056e2a4 + (param_2 & 0xff ^ param_1 & 0xff) * 4) ^ param_2 >> 8;
}


