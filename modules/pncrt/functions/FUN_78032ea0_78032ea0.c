/* Module: pncrt.dll
   Function: FUN_78032ea0
   Address: 78032ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78032ea0(int param_1,int *param_2,int param_3,int param_4)

{
  if (param_4 < 0) {
    FUN_78033030(param_1,param_4);
  }
  FUN_78032ee0(param_1,param_2,param_3);
  if (0 < param_4) {
    FUN_78033030(param_1,param_4);
  }
  return;
}


