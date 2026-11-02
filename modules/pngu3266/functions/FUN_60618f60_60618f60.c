/* Module: pngu3266.dll
   Function: FUN_60618f60
   Address: 60618f60
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_60618f60(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int local_10 [3];
  
  FUN_60618bb0(local_10);
  FUN_60618f10(local_10,((undefined4 *)*param_2)[-2],(undefined4 *)*param_2,
               ((undefined4 *)*param_3)[-2],(undefined4 *)*param_3);
  FUN_60618bd0(param_1,local_10);
  FUN_60618cd0(local_10);
  return param_1;
}


