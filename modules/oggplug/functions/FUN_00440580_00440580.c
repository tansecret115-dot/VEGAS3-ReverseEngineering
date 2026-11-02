/* Module: oggplug.dll
   Function: FUN_00440580
   Address: 00440580
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00440580(int param_1,int param_2,int *param_3)

{
  if (param_1 != 1) {
    FUN_004405a0(param_1,param_2 + param_1 * 4,param_3);
  }
  return;
}


