/* Module: mp3rw.dll
   Function: FUN_00475b80
   Address: 00475b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00475b80(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
    (**(code **)(param_1 + 0x44))(param_1,param_2);
    return;
  }
  FUN_00475ce0(param_1,param_2);
  return;
}


