/* Module: pngu3266.dll
   Function: FUN_60620930
   Address: 60620930
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_60620930(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,param_2,param_3);
    return;
  }
  (**(code **)(*(int *)(param_1 + 4) + 0x10))((int *)(param_1 + 4),param_2,param_3);
  return;
}


