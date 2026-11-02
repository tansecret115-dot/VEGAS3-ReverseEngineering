/* Module: encn3260.dll
   Function: FUN_664c2050
   Address: 664c2050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664c2050(int *param_1,undefined4 param_2,undefined4 param_3)

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


