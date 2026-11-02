/* Module: vegas30k.dll
   Function: FUN_0115b380
   Address: 0115b380
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115b380(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(code **)(param_1 + 0x4c) != (code *)0x0) {
    (**(code **)(param_1 + 0x4c))(param_1,param_2,param_3);
    return;
  }
  FUN_01155f80(param_1,"Call to NULL write function");
  return;
}


