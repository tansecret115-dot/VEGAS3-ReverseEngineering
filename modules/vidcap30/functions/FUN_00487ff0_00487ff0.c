/* Module: vidcap30.exe
   Function: FUN_00487ff0
   Address: 00487ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00487ff0(uint param_1,uint param_2,uint param_3)

{
  if ((param_1 & 0x110) != 0) {
    return param_2 & 0xffff & param_3;
  }
  return param_2 & 0xffff0000 & param_3;
}


