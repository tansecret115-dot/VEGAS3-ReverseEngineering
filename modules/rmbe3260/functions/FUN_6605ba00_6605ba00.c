/* Module: rmbe3260.dll
   Function: FUN_6605ba00
   Address: 6605ba00
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_6605ba00(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int local_10 [3];
  
  FUN_6605b650(local_10);
  FUN_6605b9b0(local_10,((undefined4 *)*param_2)[-2],(undefined4 *)*param_2,
               ((undefined4 *)*param_3)[-2],(undefined4 *)*param_3);
  FUN_6605b670(param_1,local_10);
  FUN_6605b770(local_10);
  return param_1;
}


