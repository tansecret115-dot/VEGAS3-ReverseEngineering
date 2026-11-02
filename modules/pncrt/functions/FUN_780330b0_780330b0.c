/* Module: pncrt.dll
   Function: FUN_780330b0
   Address: 780330b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_780330b0(int param_1,int param_2)

{
  if (((-1 < param_1) && (param_1 < 8)) &&
     ((param_1 = param_1 - param_2, param_1 < 0 || (7 < param_1)))) {
    param_1 = 0x1f;
  }
  return param_1;
}


