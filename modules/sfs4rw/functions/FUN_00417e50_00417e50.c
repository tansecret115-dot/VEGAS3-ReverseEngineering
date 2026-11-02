/* Module: sfs4rw.dll
   Function: FUN_00417e50
   Address: 00417e50
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00417e50(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_0049576c + (param_2 & 0xff ^ param_1 & 0xff) * 4) ^ param_2 >> 8;
}


