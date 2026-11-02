/* Module: vegas30k.dll
   Function: FUN_01042c60
   Address: 01042c60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_01042c60(uint param_1,uint param_2,uint param_3)

{
  if ((param_1 & 0x110) != 0) {
    return param_2 & 0xffff & param_3;
  }
  return param_2 & 0xffff0000 & param_3;
}


