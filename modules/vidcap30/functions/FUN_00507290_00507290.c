/* Module: vidcap30.exe
   Function: FUN_00507290
   Address: 00507290
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00507290(uint param_1,uint param_2,uint param_3,int param_4)

{
  if ((param_3 != 0) && (param_4 == 0)) {
    param_3 = param_3 - 1;
  }
  if (0xfeff < param_1) {
    param_1 = 0;
    param_2 = param_2 - 1;
  }
  if (((param_1 < param_3) && (param_2 < param_3)) && (param_1 + param_2 < param_3)) {
    param_3 = param_1 + param_2;
  }
  return param_3;
}


