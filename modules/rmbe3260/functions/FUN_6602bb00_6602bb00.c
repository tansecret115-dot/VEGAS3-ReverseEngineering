/* Module: rmbe3260.dll
   Function: FUN_6602bb00
   Address: 6602bb00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6602bb00(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,param_2,param_3);
    return;
  }
  (**(code **)(*(int *)(param_1 + 0xc) + 0x10))((int *)(param_1 + 0xc),param_2,param_3);
  return;
}


