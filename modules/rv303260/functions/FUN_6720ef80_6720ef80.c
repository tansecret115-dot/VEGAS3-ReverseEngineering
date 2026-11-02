/* Module: rv303260.dll
   Function: FUN_6720ef80
   Address: 6720ef80
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_6720ef80(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int local_10 [3];
  
  FUN_6720ec10(local_10);
  FUN_6720ef30(local_10,((undefined4 *)*param_2)[-2],(undefined4 *)*param_2,
               ((undefined4 *)*param_3)[-2],(undefined4 *)*param_3);
  FUN_6720ec30(param_1,local_10);
  FUN_6720ed30(local_10);
  return param_1;
}


