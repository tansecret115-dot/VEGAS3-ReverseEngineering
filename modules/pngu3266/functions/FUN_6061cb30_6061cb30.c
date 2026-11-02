/* Module: pngu3266.dll
   Function: FUN_6061cb30
   Address: 6061cb30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6061cb30(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,param_2,param_3);
    return;
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  return;
}


