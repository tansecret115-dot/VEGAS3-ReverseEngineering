/* Module: rmto3260.dll
   Function: FUN_662ef380
   Address: 662ef380
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_662ef380(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int local_10 [3];
  
  FUN_662eefd0(local_10);
  FUN_662ef330(local_10,((undefined4 *)*param_2)[-2],(undefined4 *)*param_2,
               ((undefined4 *)*param_3)[-2],(undefined4 *)*param_3);
  FUN_662eeff0(param_1,local_10);
  FUN_662ef0f0(local_10);
  return param_1;
}


