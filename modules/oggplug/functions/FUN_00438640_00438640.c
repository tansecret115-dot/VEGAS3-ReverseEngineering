/* Module: oggplug.dll
   Function: FUN_00438640
   Address: 00438640
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00438640(int *param_1,int param_2,int param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  FUN_00440540(param_1,param_2 * 2);
  return;
}


