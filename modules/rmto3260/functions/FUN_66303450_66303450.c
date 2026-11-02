/* Module: rmto3260.dll
   Function: FUN_66303450
   Address: 66303450
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66303450(int param_1,undefined4 param_2,undefined4 param_3)

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


