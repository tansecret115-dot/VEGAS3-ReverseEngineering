/* Module: wmfplug2.dll
   Function: FUN_0043d250
   Address: 0043d250
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0043d250(uint param_1,uint param_2,uint param_3)

{
  if ((param_1 & 0x110) != 0) {
    return param_2 & 0xffff & param_3;
  }
  return param_2 & 0xffff0000 & param_3;
}


