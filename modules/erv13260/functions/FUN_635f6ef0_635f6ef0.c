/* Module: erv13260.dll
   Function: FUN_635f6ef0
   Address: 635f6ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_635f6ef0(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_635f7db0(param_2);
  *param_1 = puVar1;
  puVar1 = FUN_635f7db0(param_2);
  param_1[1] = puVar1;
  puVar1 = FUN_635f7db0(param_2);
  param_1[2] = puVar1;
  return 0;
}


