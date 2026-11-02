/* Module: vidcap30.exe
   Function: FUN_0054ea90
   Address: 0054ea90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054ea90(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(code **)(param_1 + 0x4c) != (code *)0x0) {
    (**(code **)(param_1 + 0x4c))(param_1,param_2,param_3);
    return;
  }
  FUN_00549540(param_1,"Call to NULL write function");
  return;
}


