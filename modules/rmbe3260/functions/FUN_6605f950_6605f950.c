/* Module: rmbe3260.dll
   Function: FUN_6605f950
   Address: 6605f950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6605f950(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,param_2,param_3);
    return;
  }
  (**(code **)(*(int *)(param_1 + 8) + 0x10))((int *)(param_1 + 8),param_2,param_3);
  return;
}


